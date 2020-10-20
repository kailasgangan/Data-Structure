#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
class LinkedList{
public:
    struct node *root;
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
    }
    void deleteleft(){//------------------delete left-----------
        node *t;
        if(root==NULL)
            cout<<"\n"<<"empty list";
        else{
            t=root;
            root=root->next;
            cout<<"\n"<<"deleted"<<t->data;
            delete t;
        }
    }
void deleteright(){//------------------delete right-----------
        node *t,*t2;
        if(root==NULL)
            cout<<"\n"<<"empty list";
        else{
            t=t2=root;
           while(t->next!=NULL){
                t2=t;
            t=t->next;
           }
           t2->next=NULL;
            cout<<"\n"<<"deleted"<<t->data;
           delete t;
        }
    }
    void printqueue(){//-----------print queue----------------
         node *t;
        if(root==NULL){
            cout<<"\n"<<"empty list";
    }
    else{
        t=root;
        while(t!=NULL){
            cout<<"\n"<<t->data;
            t=t->next;
        }
    }
    }
    int searching(int e){//-----------------searching--------------------
         node *t;
        if(root==NULL){
            cout<<"\n"<<"empty list";
            return (-1);
        }
            else{
                t=root;
                while(t!=NULL){
                    if(t->data==e){
                        return 1;
                    }
                }
                return (-1);
            }
    }
    void deleteelement(int key){//---------------delete element----------------
        node *t2,*t;
        if(root=NULL){
            cout<<"\n"<<"empty";
            return;
        }
        else{
            t=t2=root;
            while(t->data!=key && t!=NULL){//traverse till data to be found or last element
                t2=t;
                t=t->next;
            }
            if(t!=NULL){//check that node is last or not
                if(t==root)//-------------------------------if node is left most node
                    root=root->next;
                else if(t->next==NULL){//-----------------if node is right most OR last node
                    t2->next=NULL;
                }
                else{//---------------------------------node inbetween
                    t2->next=t->next;
                }
                cout<<"\n"<<"deleted"<<t->data;
                delete t;
            }
            else{
                cout<<"\n"<<"not found";
            }
        }
    }
};
int main(){
    LinkedList lst;
    lst.createlist();
    lst.insertleft(10);
    lst.insertleft(20);
    lst.insertright(30);
    lst.insertright(40);
    lst.insertright(50);
    lst.printqueue();
    lst.deleteleft();
    lst.deleteright();
    lst.printqueue();
    lst.deleteelement(40);
    return 0;
}
