// C++ program to find median of a matrix
// sorted row wise
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX = 100;


int Median(int m[][MAX], int r ,int c)//--------function to find median
{
	int min = INT_MAX, max = INT_MIN;

	for (int i=0; i<r; i++)
	{

		if (m[i][0] < min)//----------------- Finding the minimum element
			min = m[i][0];


		if (m[i][c-1] > max)//-------------------- Finding the maximum element
			max = m[i][c-1];
	}
	int mid = (min+max) / 2;
	return mid;
	}
int main()
{
	int r,c;
	int m[MAX][MAX];
	cout << "enter row size \n";
	cin >> r;
	cout << "enter column size \n";
	cin >> c;
	cout << "enter matrix";
	for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin >> m[i][j];
    }
	}
	cout << "Median is =" << Median(m, r, c) << endl;
	return 0;
}
