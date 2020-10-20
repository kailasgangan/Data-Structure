#include<iostream>
using namespace std;
int Count=0;
struct node{
int data;
struct node *left,*right;
};
class TreeDll{
public:

    struct node *root;
void createdll(){
        root=NULL;
    }
node* createnode(int a){

       node *n=new node();
       n->data=a;
       n->left=NULL;
       n->right=NULL;
       return n;
    }
void insertdll(node *r,node *n){
if(root==NULL){
    root=n;
}
else{
        if(n->data<r->data){
    if(r->left==NULL){
        r->left=n;
    }
    else{
        return (insertdll(r->left,n));
    }
}
else{
         if(r->right==NULL){
        r->right=n;
    }
    else{
        return (insertdll(r->right,n));
    }
}
}
}
void inorder(node *r){
if(r!=NULL){
    inorder(r->left);
    cout<<r->data<<" ";
    inorder(r->right);

}
}
void preorder(node *r){
if(r!=NULL){
    cout<<r->data<<" ";
    preorder(r->left);
    preorder(r->right);

}
}
void postorder(node *r){
if(r!=NULL){
        preorder(r->left);
    preorder(r->right);
    cout<<r->data<<" ";

}
}
void countnodes(node *r,int k){ //---------print nodes
    if(r!=NULL){

       /* if(r->left==NULL && r->right==NULL)//------print leaf only
        {
            Count++;
        }
        }*/
        Count++;
         countnodes(r->left,Count);
         countnodes(r->right,Count);
    }
}
};
int main(){
   TreeDll td;
   td.createdll();
   node *r=new node();//root creation---------------------
   r->data=50;
   r->left=NULL;
   r->right=NULL;
    td.insertdll(r,r);
node *n=td.createnode(30);//node creation---------------
   td.insertdll(r,n);
node *n1=td.createnode(40);//node creation---------------
   td.insertdll(r,n1);
   node *n2=td.createnode(800);//node creation---------------
   td.insertdll(r,n2);
//--------------------------printing-----------------------------------------
cout<<"\n in-order =";
td.inorder(r);
cout<<"\n pre-order =";
td.preorder(r);
cout<<"\n post-order =";
td.postorder(r);

td.countnodes(r,0);
cout<<"\n count of nodes is ="<<Count;
return 0;
};

