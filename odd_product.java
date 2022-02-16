

package Nandini;

import java.util.Scanner;

public class odd_product {
    int arr[];
    odd_product(){
        arr=new int [10];
    }
    void odd_pro(){
        for(int i=0;i<arr.length;i++){
            for(int j=i;j<arr.length;j++){
                if(arr[i] * arr[j] % 2 == 1){
                    System.out.println(arr[i]+ " "+arr[j]);
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        odd_product obj1=new odd_product();
        for(int i=0;i<obj1.arr.length;i++){
            obj1.arr[i]=s.nextInt();
        }
        obj1.odd_pro();
    }
}
