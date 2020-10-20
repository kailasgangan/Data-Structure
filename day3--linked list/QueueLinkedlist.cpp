#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
class DynamicQueu{
public:
    node *rear,*front;

    void createqueu(){
    rear=front=NULL;
    }
    void Enqueu(int e){
    node *n;
    n=new node;
    n->data=e;
    n->next=NULL;
    if(rear==NULL)
        rear=front=n;
    else{
        rear->next=n;
        rear=n;
    }
    }
    void dequeu(){
    node *t;
    if(front==NULL)
        cout<<"\n"<<"empty";
    else{
    t=front;
    front=front->next;
    cout<<"\n"<<"deleted"<<t->data;
    delete t;
    }
    }
    void printqueue(){
    node *t;
    if(front==NULL)
        cout<<"\n"<<"empty";
    else{
        t=front;
        while(t!=NULL){
            cout<<"\n"<<t->data;
            t=t->next;
        }
    }
    }
};
int main(){
DynamicQueu dq;
dq.createqueu();
dq.Enqueu(10);
dq.Enqueu(20);
dq.Enqueu(30);
dq.Enqueu(40);
dq.printqueue();
dq.dequeu();
dq.printqueue();
}

