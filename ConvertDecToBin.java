
import java.util.Scanner;

public class ConvertDecToBin {
    public static int dectobin(int d)
    {
        if (d==0)
        {
            return 0;
        }
        else{
        int rem=0;
        rem=rem+d%2;
        return rem+10  * dectobin(d=d/2);
      }
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println(dectobin(sc.nextInt()));
    }
}