#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
class CircularLL{
public:
struct node *root,*last;

     void createList(){
        root=last=NULL;
}
     void insertleft(int a){
     node *n;
     n=new node;
     n->data=a;
     n->next=NULL;
     if(root==NULL){
        root=last=n;
        last->next=root;
     }
     else{
        n->next=root;
        root=n;
     }
}
     void insertright(int a){
     node *n;
     n=new node;
     n->data=a;
     n->next=NULL;
     if(root==NULL){
        root=last=n;
        last->next=root;
     }
     else{
        last->next=n;
        last=n;
        last->next=root;
     }
     }
     void deleteleft(){
         node *t;
         if(root==NULL)
            cout<<"\n empty list";
         else{
            t=root;
            root=t->next;
            last->next=root;
            cout<<"deleted ="<<t->data;
            delete t;
         }
     }
     void deleteright(){
         node *t,*t2;
         if(root==NULL)
            cout<<"\n empty list";
         else{
            t=t2=root;
            while(t!=last){
                t2=t;
                t=t->next;
            }
            last=t2;
            last->next=root;
            cout<<"deleted ="<<t->data;
            delete t;
         }
     }
     void print(){
     node *t;
     t=root;
     do{
        cout<<" "<<t->data;
        t=t->next;
     }while(t!=root);
     }
     void shift(int a){//-------shifting-------
         for(int i=0;i<a;i++){
         node *t;
     t=root;
     int temp1,temp;
     temp=t->data;
     do{
        temp1=t->data;
        t->data=temp;
        temp=temp1;
        t=t->next;
     }while(t!=root);
      temp1=t->data;
        t->data=temp;
     }
     }

};
int main(){
    int n;
    CircularLL c;
    c.createList();
    c.insertleft(10);
    c.insertleft(20);
    c.insertleft(30);
    c.insertleft(40);
    c.insertright(50);
    c.insertright(60);
    c.print();
    c.deleteleft();
    c.deleteright();
    cout<<"\n";
    c.print();
    cout<<"how many time you want to cycle list";
    cin>>n;
    cout<<"\n after shifting";
    c.shift(n);
    c.print();
return 0;
}
