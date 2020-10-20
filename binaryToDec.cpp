#include<iostream>
#include<math.h>
using namespace std;
static int sum=0;
struct node{
    int data;
    struct node *next;
};
class LinkedList{
public:
    struct node *root;
    int cnt=0;
    void createlist(){//--------------create list------
        root=NULL;
    }
    void insertleft(int e){//--------insert-left-----------
        node *n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(root==NULL)
            root=n;
        else{
             n->next=root;
             root=n;
        }
        cnt++;
    }
     void insertright(int e){//--------insert-right-----------
        node *n,*t;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(root==NULL)
            root=n;
        else{
             t=root;
             while(t->next!=NULL){
                t=t->next;
             }
             t->next=n;
        }
        cnt++;
    }
 void BinaryToDecimal(){//-----------print queue----------------
         node *t;
        if(root==NULL){
            cout<<"\n"<<"empty list";
    }
    else{
        t=root;
        while(t!=NULL){
            //cout<<"\n"<<t->data;
            int k=t->data;
           // cout<<" "<<k;
            int power = pow(2,cnt-1);
           // cout<<"\n power ="<<power;
            sum=sum+k*power;
            t=t->next;
            cnt--;
        }
    }
     cout<<"\n Decimal= "<<sum;
    }
};
int main(){
    LinkedList lst;
    lst.createlist();
    lst.insertleft(1);
    lst.insertleft(1);
    lst.insertleft(1);
    lst.insertleft(1);
    lst.insertright(0);

    lst.BinaryToDecimal();
    return 0;
}
