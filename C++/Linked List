        #include<iostream>
        using namespace std;
        
        
        struct node{
        
            int data;
            struct node* next;
            
            node(int newData){
                
                this->data = newData;
                this->next = NULL;
                
                
            }
        
        };
        
        
        
            void insertBegin(struct node* &head , int newData){
        
              struct node* temp = new node(newData);
              temp ->next = head;
              
              head = temp;
            }


            
            
            void insertEnd(struct node* head , int newData){
        
                while(head ->next != NULL){
                    head = head->next;
                }
                
              struct node* temp = new node(newData);
              head ->next = temp;
              
            }
            

            
         void insertAtPosition(struct node* head , int pos , int data){
                 
                 struct node* temp = head;
                 
                 int count = 1;
                 
                while(count < pos){
                    temp = temp->next;
                    count++;
                }
                    
              struct node* NewTemp = new node(data);
              NewTemp->next = temp->next;
              
              temp->next = NewTemp;
              
                
        }
            
            
        
        void display(struct node* head){
        
              while(head != NULL)
                {
                    cout<<head->data << "->";
                    head = head->next;
                }
                
                cout<<endl<<endl;
        
        
            }
            
            
            
        void insertAtMiddle(struct node* head , int NewData){
                 
                 struct node* ptr = head;
                 
                 int count=0;
                 
                 while(ptr != NULL){
                     count++;
                     ptr = ptr->next;
                 }
                 
                 
                 int middle = count/2;
                 
                 insertAtPosition(head , middle , NewData);
                
                // cout<<"Middle : "<<count<<endl;
                
            }
      
      
            
    void deleteFront(struct node* &head){
        
        struct node* temp = head;
        
        head = head->next;
        
        delete(temp);
        
    }
        
          
    void deleteEnd(struct node* head){
        
        struct node* temp = head;
        
        while(temp -> next->next != NULL){
            temp = temp->next;
        }
        
        temp->next = NULL;
        
        
    }
        
        
        
    void deleteAtPos(struct node* head , int pos ){
        
        struct node* temp = head;
        
         int count = 2;
                 
                while(count < pos){
                    temp = temp->next;
                    count++;
                }
        
        temp->next = temp->next->next;
        
        
    }
        
        
        
        
     void search(struct node* head , int ele){
         
            int i=1;
            
            bool flag = false;
            
            while(head != NULL){
                
                if(head -> data == ele)
                {
                    cout<<ele<< " , Found  At : "<<i<< " Position ."<<endl;
                    flag = true;
                    break;
                }
                
                head = head->next;
                i++;
                
            }
            
            
            if(!flag){
                 cout<<ele<< " , Not Found"<<endl;
            }
     }
        
        
        
        
int main(){
        
        
            struct node* head = new node(1);
        
            struct node* temp2 = new node(2);
            head->next = temp2;
        
        
            display(head);
            
            
    insertBegin(head , 100);
        
        
            display(head);
        
            
    insertEnd(head , 1000);
        
        
            display(head);
            
            
    insertAtPosition(head , 2 , 50);
        
        display(head);
        
        
    insertAtMiddle(head , 99);
        
        
            // if list empty  display the msg   list is empty
            // if u r trying to insert at begin  , if pos not exits
            // if list is empty , insertatEnd not works ..
        
        
         display(head);
         
         
         
    deleteFront(head);
         
         
         display(head);
         
         
    deleteEnd(head);
    
         
         
         display(head);
         
         
         
    deleteAtPos(head , 2);
    
    
         display(head);
    
         
    int ele = 112;
    
    search(head , ele);
    
         
    }
