package divide_it;
import java.util.Scanner;

public class Divide_it 
{

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int q = sc.nextInt();
		long n;
		
		while(q-- > 0)
		{
			n=sc.nextLong();
			if(n == 1)
			{
				System.out.println("0");
				continue;
			}
			int moves=0;//calculate moves
			while(n > 1)//this loop will run and find minimum moves until n becomes 1 
			{
				if(n % 2 == 0)
				{
					n/=2;
					moves++;
				}
					
				else if(n % 3 == 0)
				{
					n = (2*n)/3;
					moves++;
				}
				else if(n % 5 == 0)
				{
					n = (4*n)/5;
					moves++;
				}
				else if((n%2 != 0 && n%3 != 0) && n%5 != 0)
				{
					if(n != 1)
					{
						//if n isn't divisible by any of 2,3 or 5 then it will print -1 if n is not equal 1. -1 means its impossible to obtain 1 from n
						System.out.println("-1");
						break;//break is needed otherwise it can be infinity loop for any n greater then 1 which is not divisible by 2,3 or 5
					}
				}	
			}
			//then after checking n is equal to 1 it will print minimum moves. other wise it will print moves number after even -1.
			if(n == 1)
			{
				System.out.println(moves);
			}
		}
		
	}

}
