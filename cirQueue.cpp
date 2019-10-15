//circular queue
#include<iostream>
using namespace std;

class Queue{
private:
    int rear;
    int front;
    int  size;
    int * Q;
public:
    Queue(){
        rear=front=0;
        size=10;
        Q=new int[size] ;
    }

    Queue(int size){
        rear=front=0;
        this->size=size;
        Q=new int[this->size];
    }
    void enqueue(int x);
    int deque();
    void Display();
    
};


void Queue::enqueue(int x){

    if((rear+1)%size == front)
        cout<<"Queue is empty"<<endl;
    else
    {
      rear=((rear+1)%size);
      Q[rear]=x;  
    }
    
}

int  Queue::deque(){
    int x=-1;
    if(front==rear){
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        front = (front+1)%size;
        x=Q[front];

    }
    return x;

}

void Queue::Display(){
    for(int i= front+1;i<((rear+1)%size);i++){
        cout<<Q[i]<<" ";
    }
}

int  main(){
    Queue q(10);
    

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    
    q.Display();
    cout<<endl;
    cout<<"element removed after deque is :"<<q.deque()<<endl;
    cout<<"queue after the deque"<<endl;
    q.Display();

}
