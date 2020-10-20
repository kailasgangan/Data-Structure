#include<iostream>
using namespace std;
int arr[10]={10,2340,30,4230,50,6120,70,80,9780,1500};
void QuickSort(int arr[],int start,int End)
{
    int i,j,pivot,t;
    i=start;
    j=End;
    pivot=start;
    while (i<j)
    {
        while (arr[i]<arr[pivot])
            i++;
        while(arr[j]>arr[pivot])
            j--;
        if(i<j)
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    if(i<End)
        QuickSort(arr,i+1,End);

    if(start<j)
       QuickSort(arr,start,j-1);

}
int main()
{
    int Size=sizeof(arr)/sizeof(arr[0]);
 cout<<"Before Sort \n";
    for(int k=0;k<Size;k++)
        cout<<arr[k]<<" ";
         QuickSort(arr,0,Size-1);
    cout<<"\n After Sort"<<endl;
    QuickSort(arr,0,Size-1);
    for(int k=0;k<Size;k++)
        cout<<arr[k]<<" ";
    return 0;
}
