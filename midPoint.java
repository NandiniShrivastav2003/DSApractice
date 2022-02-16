import java.util.Scanner;

public class MidPointLinkedList {
    Node head;
     void push(Node newnode)
     {
         if(head==null)
         {
             head= newnode;
             return;
         }
         Node temp=head;
         while(temp.next != null)
         {
             temp=temp.next;
         }
         temp.next=newnode;
     }
    public  int length()
    {
        int c=0;
        Node temp= head ;
        while(temp!=null)
        {
            c++;
            temp=temp.next;
        }

        return c;
    }
     public void MidValue() {
         Node temp = head;
         int c = length();
         if (c == 0)
             return;
         else if (c == 1)
             System.out.println(temp.data);
         else {
             for (int i = 0; i < c; i++) {
                 if (c % 2 == 0) {
                     if (i == (c / 2) - 1) {
                         System.out.println(temp.data);
                         break;
                     }
                 } else {
                     if (i == (c / 2)) {
                         System.out.println(temp.data);
                         break;
                     }
                 }
                 temp = temp.next;
             }
         }
     }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for (int i = 0; i < t; i++) {
            MidPointLinkedList obj = new MidPointLinkedList();
            int data =sc.nextInt();
            while (data != -1) {
                obj.push(new Node(data));
                data= sc.nextInt();
            }
            obj.MidValue();
        }
    }
}
