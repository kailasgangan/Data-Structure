#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
class DynamicStack{
public:
    node *tos;
    void createstack(){
        tos=NULL;
    }
    void push(int e){
        node *n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(tos==NULL){
            tos=n;
        }
        else{
            n->next=tos;
            tos=n;
        }
    }
    void pop(){
        node *t;
        if(tos==NULL)
            cout<<"\n"<<"empty stack";
        else{
            t=tos;
            tos=tos->next;
            cout<<"\n"<<"deleted"<<t->data;
            delete t;
        }
    }
    void PrintStack(){
        node *t;
        t=tos;
        while(t!=NULL){
            cout<<"\n"<<t->data;
            t=t->next;
        }
    }
};
int main(){
    DynamicStack s;
    s.createstack();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.PrintStack();
    s.pop();
    s.PrintStack();
}
