#include <iostream>
using namespace std;
int a[10]={10,20,30,40,50,60,70,80,90,100};
int SequentialSearch(int a[], int Size, int key)
{
    int i;
    for (i = 0; i < Size; i++)
        if (key == a[i])
            return i;
    return -1;
}

int main()
{
    int key,Size;
    cout<<"Enter element to be saerch ";
    cin>>key;
     Size = sizeof(a) / sizeof(a[0]);
   int k = SequentialSearch(a, Size, key);
   if(k == -1)
        cout<<"not found";
    if(k >=0)
    cout<<"Found At" <<k+1;
   return 0;
}
