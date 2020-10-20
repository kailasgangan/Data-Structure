#include<iostream>
using namespace std;
int size[50];
int tos,maxsize;
void initStack(int size){
    maxsize=size;
    tos=-1;
}
void push(int e){
    size[++tos]=e;
}
int pop(){
     int x=size[tos--];
      return x;
}
int isfull(){
    if(tos==maxsize-1){
        return 1;
    }
    else {
        return 0;
    }
}
int isEmpty(){
    if(tos==-1){
        return 1;
    }
    else {
        return 0;
    }
}
int attop(){
    return (size[tos]);
}
void printStack(){
    int i;
    for(i=tos;i>-1;i--){
        cout<<size[i]<<endl;
    }
}
int main(){
    int size,str;
    int v,x;
    static int cnt=0;
    cout<<"enter stack size";
    cin>>size;
    cout<<"enter a number";
    cin>>str;

    initStack(size);
do{
    v=str%2;
    cout<<"mod value"<<v<<"\n";
    x=str/2;
    str=x;
    push(v);
    ++cnt;
}while(str!=0);
//cout<<cnt;
    for(int i=0;i<cnt;i++){
        cout<<pop();
    }

}

