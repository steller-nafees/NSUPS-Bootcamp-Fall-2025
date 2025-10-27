package nearly_Lucky_Number;

import java.util.Scanner; 
public class Nearly_Lucky_Number 
{

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		String n = sc.nextLine();
		int len = n.length();
		
		int count=0;
		for(int i=0; i<len; i++)
		{
			if(n.charAt(i) == '4' || n.charAt(i) == '7')//n.charAt(i) is equivalent to n[i] in C or C++ to. Using to find a particular index 
			{
				count++;
			}
		}
		if(count == 4 || count == 7)
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
	}

}
