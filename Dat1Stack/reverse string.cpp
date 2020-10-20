#include<iostream>
using namespace std;
char size[50];
int tos,maxsize;
void initStack(int size){
    maxsize=size;
    tos=-1;
}
void push(char e){
    size[++tos]=e;
}
char pop(){
     char x=size[--tos];
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
char attop(){
    return (size[tos]);
}
void printStack(){
    int i;
    for(i=tos;i>-1;i--){
        cout<<size[i]<<endl;
    }
}
int main(){
    int size;
     cout<<"enter  string";
    string str;
    cin>>str;
    cout<<"enter stack size";
    cin>>size;
   //string str(s);

    char p[str.length()];
    int i;
    for(i=0;i<sizeof(p);i++){
        p[i]=str[i];
    }
    initStack(size);
    for(int i=0;i<20;i++){
            push(str[i]);
    }
    for(int i=0;i<20;i++){
        cout<<pop();
    }

}

