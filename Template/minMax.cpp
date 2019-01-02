#include<iostream>
using namespace std;

/*Write a Template function for finding the minimum 
and maximum value in a one dimensional array*/
//		by Aniruddha

template < class T >

T Min(T *arr,int n)
{
	T min = arr[0];
	for(int i=1;i<n;i++)
		if(min>arr[i])	min=arr[i];
	return min;	
}

template < class T >
T Max(T *arr,int n)
{
	T max = arr[0];
	for(int i=1;i<n;i++)
		if(max<arr[i])	max=arr[i];
	return max;
}

int main()
{	
	int a[]={4,5,3,1,2};	
	cout<<"Min : "<<Min(a,5)<<"\nMax : "<<Max(a,5)<<endl;
		
}

/*Sample Output
Min : 1
Max : 5
*/
