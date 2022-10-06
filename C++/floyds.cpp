#include<bits/stdc++.h>
using namespace std ;

/// floyds cycle detection is a process in which we have to detect the part where the ther eis a circular linked list 

// process is that ki 
// we take two pointer slow and fast and both fast will move twice the slow then if slow and fast pointer meet then
// the linked list is circular 

class node{
    public:
    int d;
    node *next;
    node(int a){
        d=a; 
        next=NULL;       
    }

};

void insertion_head(node *&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *n =new node(d);
    n->next=head;
    head=n;

}

/// inserting a linked list  with element d 
void inserCir(node*&head,int d){
    node*n=new node(d);
    node*temp=head;
    n->next=head;
    if(temp!=NULL){
        while(temp->next!=head){
            temp=temp->next;
        }
    temp->next=n;
    }
    else{
        n->next=n;
    }
    head=n;
    // return;

}
node*getnode(node*head,int data){
    node*temp=head;
    while(temp->next!=head){
        if(temp->d==data){
            return temp;
        }
        temp=temp->next;
        // /. in this case we are not considering the last node 
    }
    if(temp->d==data){
        return temp;
    }
    return NULL;


}


void deletefun(node*&head,int data){
    node*temp=head;
    node*del=getnode(head,data);
    if(del==NULL){
        return ;
    }
    while(temp->next!=del){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    delete del;
    return;

}


void print(node*head){
    while(head!=NULL){
        cout<<head->d<<endl;
        head=head->next;
    }
}


// /// tring to make connect the list 
// void link(node *&head){
//     if(head==NULL){
//         return;
//     }
//     node*temp=head;
//     if(temp->next != NULL){
//         temp=temp->next;
//     }
//     temp->next=head;
// }

/// checking if linked list contain cycle

bool floyds_cycle(node*head){
    node*it2=head;
    node*it1=head;
    while(it2->next!=NULL  && it2!= NULL){
        it2->next->next; // the fast one takes two step 
        it1->next;  // slow arrow takes one step 
        if(it1==it2){
            return true;
        }
    }
    return false;

}

// to break the cycle 
node*del(node*head){
    node*it2=head;
    node*it1=head;
    while(it2->next!=NULL  && it2!= NULL){
        it2->next->next; // the fast one takes two step 
        it1->next;  // slow arrow takes one step 
        if(it1==it2){
            break;           
        }
    }
    while(it1==it2){
        it2->next->next;
        it1->next;
    }
    while(it2->next!=it1){
        it2=it2->next;
    }
    it2->next=NULL;
    return head;
    
}


void printCir(node*head){
    node*temp=head;
    do{
        cout<<temp->d<<endl;
        temp=temp->next;
    }
    while(temp !=head);

    return;
}

int main(){
    node*head=NULL;
    inserCir(head,3);
    inserCir(head,1);
    inserCir(head,2);
    inserCir(head,0);
    inserCir(head,9);
    inserCir(head,8);
    inserCir(head,7);
    deletefun(head,0);
    // printCir(head);
    cout<<floyds_cycle(head);
    

}