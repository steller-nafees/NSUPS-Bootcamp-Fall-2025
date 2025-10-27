package random_Teams;
import java.util.Scanner;
public class Random_Teams 
{
	public static long groups(long n)
	{
		return n * (n-1)/2 ;
	}

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		long n,m;
		n = sc.nextLong();
		m = sc.nextLong();
		
		long p = n/m;//size of the smallest group after evenly dividing the participants in groups
		long q = n%m;//remaining groups with a+1 elements  
		
		long minPairs = groups(p) * (m-q) + groups(p+1) * q;
		long maxPairs = groups(n-m+1);
		System.out.println(minPairs + " " + maxPairs);
		sc.close();
	}

}
