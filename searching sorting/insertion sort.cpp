 #include<iostream>
using namespace std;
int a[10]={10,230,30,4330,550,60,770,80,90,180};
void insertionSort(int a[], int Size)
{
    int i,newelement, j;
    for (i = 0; i < Size; i++)
    {
        j = i+1;
		newelement=a[j];
        while (j > 0 && a[j-1] > newelement)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = newelement;
    }
}


int main()
{
	int i;
    int Size = sizeof(a) / sizeof(a[0]);
    cout<<"before sort\n ";
 for (i = 0; i < Size; i++)
        cout << a[i] << " ";
    insertionSort(a, Size);
    cout<<"\n After sort\n";
    for (i = 0; i < Size; i++)
        cout << a[i] << " ";

    return 0;
}
