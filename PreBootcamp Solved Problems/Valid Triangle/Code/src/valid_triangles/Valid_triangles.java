package valid_triangles;
import java.util.Scanner;

public class Valid_triangles
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0)
		{
			int A = input.nextInt();
			int B = input.nextInt();
			int C = input.nextInt();
			
			if(A + B + C == 180)
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
					
		}
		input.close();
	}
}