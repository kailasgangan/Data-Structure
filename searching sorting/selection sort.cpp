#include<iostream>
using namespace std;

int a[10]={1740,20,330,40,512,60,740,80,90,1200};

void SelectionSort(int a[4],int Size)
{
          int min, pos,i,j;

     for(i=0;i<Size;i++)
   {

          min=a[i];
          pos=i;
         for(j=i+1;j<Size;j++)
       {
             if(a[j]<min)
           {
               min=a[j];
                pos=j;
            }

        }
        a[pos]=a[i];
        a[i]=min;
   }

}
int main(){

    int Size = sizeof(a)/sizeof(a[0]);

 cout<<"before sort \n ";

 for(int i=0;i<Size;i++)
    cout<<a[i]<<",";

 SelectionSort(a,Size);
 cout<<"\n after sort \n ";

for(int i=0;i<Size;i++)
    cout<<a[i]<<",";}

