package Nandini;

import java.util.Scanner;

public class GameEntry {
    private int score;
    private  String name;
    public GameEntry(int score,String name){
        this.name=name;
        this.score=score;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
 public int getScore() {
        return score;
    }
public void setScore(int score) {
        this.score = score;
    }
    @Override
    public String toString(){
        return "(" + score + ","+ name + ")";
    }
public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        GameEntry arr[]=new GameEntry[n];
        for(int i=0;i< arr.length;i++){
            arr[i]=new GameEntry(s.nextInt(),s.next());
        }
        int b=0;
        int max=0;
        for(int i=0;i<n;i++){
            if(arr[i].getScore() >max) {
                max = arr[i].getScore();
                b = i;
            }
        }
        System.out.println(arr[b].toString());
    }
}
