#include<iostream>
#include<string.h>
using namespace std;
char s[100];
int maxsize,tos;
void stack(int n)//--------------------stack initalization
{
	maxsize=n;
	tos=-1;
}
void push(char e)//----------------------------push
{
	tos++;
	s[tos]=e;
}
char pop()//-----------------------pop
{
	char temp;
	temp=s[tos];
	tos--;
	return temp;
}
int isEmpty()//------------------------------------isEmpty
{
	if(tos==-1)
		return 1;
	else
		return 0;
}
int Preced(char c)//--------------------------------preced
{
	if(c=='+'||c=='-')
		return 1;
	if(c=='*'||c=='/'||c=='%')
		return 2;
	if(c=='^')
		return 3;
	else
		return 0;
}
int main()//---------------------------------------main
{
	char inFx[100],postFx[100],c;
	int pi=0;
	cout<<"Enter Infix: ";
	cin>>inFx;
	int k=strlen(inFx);
	stack(k);

	for(int i=k-1;i>-1;i--)
	{

		c=inFx[i];
		switch(c)
		{
			case '(':
          while(s[tos]!=')')
				{
					postFx[pi]=pop();
					pi++;
				}
				c=pop();
				break;


			case ')':
                 push(c);
				break;
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				while((Preced(s[tos])>Preced(c)) && (isEmpty()!=1))
				{
					postFx[pi]=pop();
					pi++;;
				}
				push(c);
				break;
			default:
				postFx[pi]=c;
				pi++;
				break;
		}
	}
	while(isEmpty()!=1)
	{
		postFx[pi]=pop();
		pi++;
	}
	for(int i=strlen(postFx);i>-1;i--){
	cout<<postFx[i];
}
}
