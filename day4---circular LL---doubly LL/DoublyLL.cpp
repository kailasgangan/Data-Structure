#include<iostream>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
class doublyLL{
public:
       struct node *root;
       void createlist(){
             root=NULL;
       }
       void insertleft(int e){
            node *n;
            n=new node;
            n->data=e;
            n->left=NULL;
            n->right=NULL;
            if(root==NULL){
                root=n;
               // cout<<"in if left";
            }
            else{
                n->right=root;
                root->left=n;
                root=n;

            }
       }
       void insertright(int e){
            node *n;
            n=new node;
            n->data=e;
            n->left=NULL;
            n->right=NULL;
            if(root==NULL){
                root=n;

            }
            else{
                node *t;
                t=root;
                while(t->right!=NULL){
                    t=t->right;
                }
                t->right=n;
                n->left=t;
            }
       }
       void deleteleft(){
          node *t;
          if(root==NULL)
            cout<<"empty list";
          else{
            t=root;
            root=root->right;
            root->left=NULL;
            cout<<"deleted ="<<t->data;
            delete t;
          }
       }
       void deleteright(){
          node *t,*t2;
          if(root==NULL)
            cout<<"empty list";
          else{
            t=t2=root;
            while(t->right!=NULL){
                t2=t;
                t=t->right;
            }
            t2=t->left;
            t2->right=NULL;
            cout<<"deleted ="<<t->data;
            delete t;
          }
       }
       void print(){
       node *t;
       if(root==NULL)
        cout<<"empty list";
       else{
        t=root;
        while(t!=NULL){
            cout<<"\n"<<t->data;
            t=t->right;
        }
       }
       }
};
int main(){
  doublyLL dll;
  dll.createlist();
  dll.insertleft(10);
 dll.insertleft(20);
 dll.insertright(30);
 dll.insertright(40);
dll.deleteleft();
dll.deleteright();
  dll.print();
}

