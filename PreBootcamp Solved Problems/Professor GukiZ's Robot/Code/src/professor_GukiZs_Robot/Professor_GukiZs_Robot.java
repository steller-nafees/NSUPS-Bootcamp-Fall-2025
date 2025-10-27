package professor_GukiZs_Robot;
import java.util.Scanner;
public class Professor_GukiZs_Robot 
{

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		int x1,x2,y1,y2;
		//In this way you can also use space to separate inputs
		x1 = sc.nextInt();
		y1 = sc.nextInt();
		x2 = sc.nextInt();
		y2 = sc.nextInt();
		
		int x_Dist = Math.abs(x1-x2);
		int y_Dist = Math.abs(y1-y2);
		
		int moves = Math.max(x_Dist, y_Dist);// Maximum distance is the minimum moves
		
		System.out.println(moves);
	}

}
