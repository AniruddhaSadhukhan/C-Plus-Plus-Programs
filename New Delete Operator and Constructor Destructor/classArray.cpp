#include<iostream>
using namespace std;

/* Write a C++ function that creates an array of user 
given size M using new operator. Include this function 
in a class vector. Create the object of vector and allocate 
memory to this object using new and free it using delete */
//				by Aniruddha

class vector
{
	int *a,n;
	public:
		void create(int s)
		{
			n = s;
			a = new int[s];
		}
		void input()
		{
			cout<<"Enter elements : ";
			for(int i=0;i<n;i++)
				cin>>a[i];
		}

		void display()
		{
			cout<<"Array is : ";
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
		void deleteall()
		{
			delete []a;
		}
};

int main()
{
	int n;
	cout<<"Enter size : ";
	cin>>n;
	
	vector *v = new vector;
	
	(*v).create(n);
	v->input();
	v->display();
	v->deleteall();
	v->display();//arr is now Dangling pointer...garbage value is shown
	return 0;
}
/*Sample Output:
Enter size : 3
Enter elements : 5 10 15
Array is : 5 10 15
Array is : 14096352 0 14090576
*/
