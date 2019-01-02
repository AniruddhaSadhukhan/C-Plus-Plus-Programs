#include<iostream>
using namespace std;

//Program to find second largest element using dynamic array
//		by Aniruddha

int secondLargest(int *arr,int n)
{
	int max_1,max_2;
	max_1=max_2=arr[0];
	for(int i=0;i<n;i++)
	{
		if(max_1<arr[i])
		{
			max_2=max_1;
			max_1=arr[i];
		}
		else if(max_2<arr[i])
		{
				max_2=arr[i];
		}
	}
	cout<<"Second Max:"<<max_2<<endl;		
}
int main()
{	
	int n;
	cout<<"Input array length: ";
	cin>>n;	
	int *arr= new int[n];  /* Allocates the memory for 'n' elements */
    	if(arr==NULL)
    	{
        	cout << "Error!!! memory not allocated.";
      		return -1;
    	}	
	
	cout<<"Input array: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	secondLargest(arr,n);
	delete[] arr;
	return 0;
}

/*Sample Output
Input array length: 5
Input array: 5 10 15 9 2
Second Max:10
*/



