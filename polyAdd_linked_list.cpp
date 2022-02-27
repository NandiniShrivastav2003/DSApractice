    Node* addPolynomial(Node *p1, Node *p2)
    {
        if(p1==NULL){
            return p2;
        }
        if(p2== NULL){
            return p1;
        }
       Node* res=new Node(0,0);
       Node* temp=res;
       while(p1 && p2){
           
               
       if((p1->pow) < (p2->pow)){
           Node* x=new Node(p2->coeff,p2->pow);
           x->next=NULL;
               temp->next=x;
               temp=x;
               p2=p2->next;
              
           }
           else if((p1->pow) > (p2->pow)){
                Node* x=new Node(p1->coeff,p1 ->pow);
           x->next=NULL;
               temp->next=x;
               temp=x;
               p1=p1->next;
              
           }
           else{
           int sum=p1->coeff+p2->coeff;
           Node* x=new Node(sum,p1 ->pow);
           x->next=NULL;
               temp->next=x;
               temp=x;
                p2=p2->next;
                  p1=p1->next;
           }
       }
       while(p1 != NULL){
            Node* x=new Node(p1->coeff,p1 ->pow);
           x->next=NULL;
               temp->next=x;
               temp=x;
              
                  p1=p1->next;
       }
        while(p2 != NULL){
            Node* x=new Node(p2->coeff,p2 ->pow);
           x->next=NULL;
               temp->next=x;
               temp=x;
              
                  p2=p2->next;
       }
       res=res->next;
       return res;
    }
