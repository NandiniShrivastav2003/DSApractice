import java.util.Scanner;

public class Lexico {
    public static void lexica(int intial,int end)
    {
        if (intial > end)
        {
            return ;
        }
        System.out.println(intial);
        int i=0;
        if (intial==0)
        {
            i=1;
        }
        while(i<10)
        {
            lexica(intial*10+i,end);
            i++;
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int intial=sc.nextInt();
        int end = sc.nextInt();
        lexica(intial,end);
    }
}