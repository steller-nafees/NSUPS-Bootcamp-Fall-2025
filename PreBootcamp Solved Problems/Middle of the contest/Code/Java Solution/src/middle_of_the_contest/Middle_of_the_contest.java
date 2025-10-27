package middle_of_the_contest;
import java.util.Scanner;

public class Middle_of_the_contest 
{

	public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        String[] t1,t2;//array of strings
        int h1, m1, h2, m2;
        
        //read inputs as a string and split from ':'
        t1 = scanner.nextLine().split(":");
        t2 = scanner.nextLine().split(":");
        
        //now assign both part of a string in different variable
        //use Integer class. 
        h1 = Integer.parseInt(t1[0]);//t1[0] means left part of ':'
        m1 = Integer.parseInt(t1[1]);//t1[1] means right part of ':'
        h2 = Integer.parseInt(t2[0]);
        m2 = Integer.parseInt(t2[1]);

        int h3 = h1 * 60 + m1;
        int h4 = h2 * 60 + m2;
        int t = (h3 + h4) / 2;
        int midH = t / 60;
        int midM = t % 60;

        System.out.printf("%02d:%02d%n", midH, midM);
    }

}
