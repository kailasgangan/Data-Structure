#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10]={150,2430,30,420,506,605,70,80,990,1020};


void BubbleSort(int a[],int Size){
  int i,j,t;
  for(i=0;i<Size-1;i++){

    for(j=0;j<Size-1;j++){

        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
           }
    }
   }
}
int main(){
    int Size = sizeof(a)/sizeof(a[0]);
    cout<<"Before sort \n";
    for(int j=0;j<Size;j++)
        cout<<a[j]<<" ";

     BubbleSort(a,Size);
cout<<"\n After sort \n";
    for(int i=0;i<Size;i++)
        cout<<a[i]<<" ";
    return 0;

return 0;

}





