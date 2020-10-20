#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//global var
int s[100];
int tos1;
int tos2;
int maxSize ;

// initialising Stack 1
void initStack1(int size1){
	maxSize = size1;
	tos1=-1;
}

// initialising Stack 2
void initStack2(int size2){
	tos2=size2;
}

// isFull
int isFull(){
	if(tos1-tos2 == -1 || tos1==maxSize-1 || tos2==0)
		return 1;
	else
		return 0;
}

// push on stack 1
void push1(int e){

    if(++tos1!=tos2 )
	s[tos1] = e;
else{
    cout<<"stack full";
}
}

// push on stack 2
void push2(int e){

     if(tos1!=--tos2)
	s[tos2] = e;
else{
    cout<<"stack full";
}
}

// isEmpty
int isEmpty(){
	if(isFull())
		return 1;
	else
		return 0;
}

// pop from stack 1
int pop1(){

	int temp = s[tos1];
	s[tos1]=NULL;
	tos1--;
	return temp;
}

// pop from stack 2
int pop2(){

	int temp = s[tos2];
	s[tos2]=NULL;
	//tos2++;
	return temp;
}

// printStack 1
void printStack1(){
	for(int i = tos1; i>-1; i-- ){
		cout<<s[i];
	}
}

// printStack 2
void printStack2(){
	for(int i = tos2; i<maxSize; i++ ){
		cout<<s[i];
	}
}
void printArray(){
for(int i=0;i<maxSize;i++){
    cout<<s[i]<<",";
}
}
int main(){
    int size1;
	cout<<"enter size of array";
	cin>> size1;
	int ArraySize=  sizeof(s)/sizeof(s[0]);
	initStack1(size1);
	initStack2(size1);

    int ch;
    int c;
int d;
    do{
cout<< " \n 1.insert a value into Stack 1 \n 2.insert a value into Stack 2 \n 3.pop from stack 1 \n 4.pop from stack 2 \n 5.check if array is full \n 6.check if array is empty \n 7. printStack 1 \n 8. printStack 2 \n 9. exit the program \n 10. Print Array"<<endl;
cin >> ch;
switch(ch)
{
case 1:
	cin >> c;
	push1(c);
break;
case 2:
  	cin >>d;
	push2(d);
break;
case 3:
	pop1();
break;
case 4:
	pop2();
break;
case 5:
    if(isFull()){
	cout<<"isFull";
    }
    else
        cout<<"not full";
break;
case 6:
	if(isEmpty()){
        cout<<"empty";
	}
	else
        cout<<"not empty";
break;
case 7:
	printStack1();
break;
case 8:
	printStack2();
break;
case 9:
	cout<<"exiting";
break;
case 10:
    printArray();
    break;
}
}
while(ch!=9);
return 0;
}
