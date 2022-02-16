import java.util.Scanner;

 class Recursion2 {
    //to replace every occurence of char ch1  with char ch2
   public static  String replace(String str,char ch1,char ch2,String temp){
        if(str.length() == 0){
            return temp;
        }
        char ch=str.charAt(0);
        if(ch1 == ch){
            temp+=ch2;
        }
        else {
            temp+=ch;
        }
        String res=replace(str.substring(1),ch1,ch2,temp);
        return res;
    }
    //remove consecutive duplicates recursively
    public static String removedup(String str,String temp){
       if(str.length() == 0){return temp;}
       char ch=str.charAt(0);
       char ch1=temp.charAt(temp.length()-1);
       if(ch1 != ch){
           temp+=ch;
       }
      String res= removedup(str.substring(1),temp);
       return res;
    }
    //convert string into number recursively
    public static int toNum(String temp,int res){
       if(temp.length() == 0){return res;}
       char ch=temp.charAt(0);
       res=res*10+(ch-'0');
       int p=toNum(temp.substring(1),res);
       return p;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //String str=sc.nextLine();
        //System.out.println(replace("i am nandini",'i','k',""));
        System.out.println(removedup("nnannddinnii","n"));
        //System.out.println(toNum("35467789",0));
    }
}
