package fraction;
import java.util.Scanner;
public class Fraction 
{
	public static int gcd(int a,int b)
	{
		while(b!=0)
		{
			int temp = b;
			b = a%b;
			a = temp;
		}
		return a;
	}

	public static void findProperIrreducableFunction(int n)
    {
        int a=0,b=0;
        int d;
        for(int c=1;c<=n/2;c++)
        {
        	d=n-c;
        	if(gcd(c,d) == 1)
        	{
        		a = c;
        		b = d;
        	}
        }
        System.out.println(a + " " + b);
    }
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        findProperIrreducableFunction(n);
    }

}
