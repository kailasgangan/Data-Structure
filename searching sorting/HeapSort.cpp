#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10]={10,2330,320,4220,550,60,710,80,190,100};
void heap(int a[],int Size){
int i,j,pc,done,t;
for(i=Size-1;i>0;i--){
    for(j=0;j<i;j++){
        pc=j;
        done=0;
        while(pc>0 && pc/2 >= 0 && done!=1){
            if(a[pc/2] < a[pc]){
                t=a[pc/2];
                a[pc/2]=a[pc];
                a[pc]=t;
                pc=pc/2;
            }
            else
                done=1;
        }
    }
}
}
int main(){
int Size=sizeof(a)/sizeof(a[0]);
cout<<"before sort\n";
for(int i=0;i<Size;i++)
    cout<<a[i]<<" ";
heap(a,Size);
cout<<"\nAfter sort\n";
for(int i=0;i<Size;i++)
    cout<<a[i]<<" ";

}
