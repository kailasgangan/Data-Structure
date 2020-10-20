#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

double s1[100];
int maxsize,tos;

void stack(int n)
{
	maxsize=n;
	tos=-1;
}
void push(int e)
{
	tos++;
	s1[tos]=e;
}
int pop()
{
	int temp;
	temp=s1[tos];
	tos--;
	return temp;
}
int main(){
  string expr;
  cout<<"enter postfix";
  cin>>expr;
  int s=expr.size();
  for (int j = 0; j <= s - 1; j++) {


		if (isdigit(expr[j]))
			push(expr[j] - '0');

		else {
			double o2 = pop();
			//Stack.pop();
			double o1 = pop();
			//Stack.pop();

			switch (expr[j]) {
			case '+':
				push(o1 + o2);
				break;
			case '-':
				push(o1 - o2);
				break;
			case '*':
				push(o1 * o2);
				break;
			case '/':
				push(o1 / o2);
				break;
            case '^':
				push((int)o1 ^ (int)o2);
				break;
			}
		}
  }
  int k=pop();
  cout<<k;
}
