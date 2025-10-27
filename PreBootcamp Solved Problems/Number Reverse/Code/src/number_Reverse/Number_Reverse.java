package number_Reverse;
import java.util.Scanner;
public class Number_Reverse 
{

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		long N = sc.nextLong();
		long digit = 0;
		long reversedNumber = 0;
		while(N != 0)
		{
			digit = N%10;
			reversedNumber = reversedNumber * 10 + digit;//modding a negative number will return negative reminder
			N /= 10;
		}
		System.out.print(reversedNumber);

	}

}
