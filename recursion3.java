import java.util.Scanner;
//recursion recursively
public class Recursion {
    public static int  pow(int x, int n){
        if(n == 0){return 1;}
        int res=pow(x,n-1);
        res=res*x;
        return res;
    }
    //count no of digits in a number recursively
    public static  int countDigit(int n,int c){
        if(n == 0){
            return c;
        }
        c++;
        int res=countDigit(n/10,c);
        return res;
    }
    //sum of array elements using recursion
    public static int sum(int arr[],int sum,int i){
        if(i == arr.length){
            return sum;
        }
        sum+=arr[i];
        int res=sum(arr,sum,++i);
        return res;
    }


    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        System.out.println( pow(sc.nextInt(),sc.nextInt()));
       System.out.println(countDigit(sc.nextInt(),0));
        System.out.println(sum(arr,0,0));
    }
}
