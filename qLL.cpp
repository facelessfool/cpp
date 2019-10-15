#include<iostream>
using namespace std;

//empty when front==NULL

/*
When first element is inserted both front and rear point to it
this is a special condition

when heap is full, queue is full

*/

struct Node{
    int data;
    struct Node * next;

}*front=NULL, *rear=NULL;

void enqueue(int x){
    struct Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Queue is full i.e heap is full"<<endl;
    }

    else{
    t->data=x;
    t->next=NULL;
    if(front==NULL)
    front=rear=t;
    else
    {
        rear->next=t;
        rear=t;
    }
    
    }
}

int deque(){
    int x=-1;
    if(front==NULL)
    cout<<"Queue is empty"<<endl;
    else
    {   
        struct Node *q;
        q=front;
        front=front->next;
        x= q->data;
        free (q);
    }

    return x;

}
void Display(){
    struct Node * b =front ;
    while(b){
        cout<<b->data<<" ";
        b=b->next;

    }
}



int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    Display();
    cout<<endl;
    deque();
    cout<<"elements in queue after deque "<<endl;
    Display();

}