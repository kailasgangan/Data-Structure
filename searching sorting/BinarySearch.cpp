#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10]={10,20,30,40,50,60,70,80,90,100};
int mid=0;

int binarysearch(int start,int End,int key){
    if(start==End){
        if(key==a[start]){
            return start;
        }
        else
            return (-1);
    }
    else{
        mid=(start+End)/2;
        if(key==a[mid]){
            return mid;
        }
        else{
            if(key<a[mid])
                return (binarysearch(start,mid-1,key));
            else
                return (binarysearch(mid+1,End,key));
        }
    }
}
int main(){
    int key;
cout<<"enter key to be search between ";
cin>>key;
int k = sizeof(a)/sizeof(a[0]);

int val=binarysearch(0,k,key);
if(val>=0){
cout<<a[val]<<" is available at "<<val<<" position";
}
if(val==-1){
    cout<<"not found";
}
return 0;

}





