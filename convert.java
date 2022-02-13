
import java.util.*;
class Node {
    String s;
    Node next;

    public Node(String s) {
        this.s = s;
next=null;
    }
}

 class convert {

    Node head;
   Node addtoLL(String p,Node head) {
         Node t=new Node(p);
      Node build=head;
         if(head  == null){
            return t;
         }

             while (build.next != null) {
                 build = build.next;
             }
             build.next = t;
         t.next=null;
         return head;
     }
     void display(Node head) {

         Node curr = head;
         while (curr != null) {
             System.out.println(curr.s);
             curr = curr.next;
         }

     }
     String temp="";
    public  void cal(String [] str){
        for(int i=0;i<str.length;i++){
            for(int j=0;j<str[i].length();j++){
                if(str[i].charAt(j) % 2 == 0){
                    temp+='e';
                }
                else{
                    temp+='o';
                }
            }
            Node t=addtoLL(temp,head);
            display(t);
            temp="";
        }

    }
    public static void main(String[] args) {
        convert obj1=new convert();
        String arr[]={"ABCD","ABCDEF","XYZAB"};

obj1.cal(arr);

    }

}
