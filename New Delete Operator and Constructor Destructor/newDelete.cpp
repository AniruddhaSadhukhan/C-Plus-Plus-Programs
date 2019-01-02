#include<iostream>
using namespace std;

/* Program to allocate memory to store 3 integers. 
Use new and delete operators for allocating and 
de-allocating memory. Initialize and display the values. */
//				by Aniruddha

void input(int *a,int n)
{
	cout<<"Enter elements : ";
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void display(int *a,int n)
{
	cout<<"Array is : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void deleteall(int *a)
{
	delete []a;
}
int main()
{
	int n;
	cout<<"Enter size : ";
	cin>>n;
	
	int *arr = new int[n];
	
	input(arr,n);
	display(arr,n);
	deleteall(arr);
	display(arr,n);//arr is now Dangling pointer...garbage value is shown
	arr = NULL;	//removing dangling pointer
	return 0;
}
/*Sample Output:
Enter size : 3
Enter elements : 5 10 15
Array is : 5 10 15
Array is : 6165584 0 6160720
*/
