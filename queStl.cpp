#include<iostream>
#include<queue>
using namespace std;

void showq(queue <int> gq){
    queue <int> g=gq;
    while(!g.empty()){
        cout<<"  "<<g.front();
        g.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    gquiz.push(40);

    cout<<"The queue is "<<endl;
    showq(gquiz);

    cout<<"Size of gquiz is "<<gquiz.size();
    cout<<endl<<"front : "<<gquiz.front()<<endl;
    cout<<"back : "<<gquiz.back()<<endl;
    gquiz.pop();
    cout<<"After pop : "<<endl;
    showq(gquiz);
    return 0;
    }