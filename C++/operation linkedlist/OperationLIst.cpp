#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* addToEmpty(struct Node* last , int data )
{
    if(last != NULL){
        return last;
    }
    struct Node* temp
        =(struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    last = temp;

    last->next = last;
    return last;
}

struct Node* addBegin(struct Node* last , int data)
{
    if(last == NULL)
        return addToEmpty(last , data);
    struct Node* temp
        =(struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    return last;
}

struct Node* addEnd(struct Node* last , int data)
{
    if(last == NULL)
        return addToEmpty(last, data);
    struct Node* temp
        =(struct Node*)malloc(sizeof(struct Node));
    temp->data =data;
    temp->next = last->next;
    last->next = temp;
    last = temp;

    return last;
}

void traversre(struct Node* last)
{
    struct Node* p;
    if(last == NULL) {
        cout<<"Element in the list is Empty" << endl;
        return;
    }

    p = last->next;

    do{
        cout <<p->data<<" ";
        p = p->next;
    }while(p != last->next);
}

int main()
{
    struct Node* last = NULL;
    last = addToEmpty(last , 8);
    last = addBegin(last , 3);
    last = addBegin(last , 2);
    last = addEnd(last,7);
    last = addEnd(last,9);

    traversre(last);
    return 0;

}