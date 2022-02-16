import java.util.Scanner;

public class ReverseLinkedList {
    Node head;
    void push(Node newnode)
    {
        if(head==null)
            head=newnode;
        else
        {
           newnode.next=head;
           head=newnode;

        }
        System.out.println(head.data);
    }
    public void reverse()
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public Node reversebyrec(Node head)
    {
        if(head==null || head.next==null)
        {
            return head;
        }
        Node temp=reversebyrec(head.next);
        head.next.next=head;
        head.next=null;
        return temp;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for (int i = 0; i < t; i++) {
            ReverseLinkedList obj = new ReverseLinkedList();
            int data =sc.nextInt();
            while (data != -1) {
                obj.push(new Node(data));
                data= sc.nextInt();
            }
            obj.reverse();
            //System.out.println( obj.reversebyrec(obj.head));
        }
    }

