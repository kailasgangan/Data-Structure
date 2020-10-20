#include <iostream>
 using namespace std;
 int arr[10]={1340,20,330,4330,50,610,720,8330,90,100};
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}


void MergeSort(int a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		Merge(a, low, high, mid);
	}
}

int main()
{

int Size=sizeof(arr)/sizeof(arr[0]);
cout<<"After Sort\n";
for (int i = 0; i < Size; i++)
        cout<<arr[i]<<" ";

	MergeSort(arr, 0,Size-1);

	cout<<"\n After Sort\n";
	for (int i = 0; i < Size; i++)
        cout<<arr[i]<<" ";

	return 0;
}
