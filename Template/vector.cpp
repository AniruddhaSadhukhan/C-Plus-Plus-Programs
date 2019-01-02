#include<iostream>
using namespace std;

/*Write a class template to represent a generic vector. Include the member function to
perform the following task:
a. To create the vector
b. To modify the value of a given element
c. To multiply by scalar value.
d. To display the vector in the form (10, 20, 30...........)*/
//		by Aniruddha

template < class T >
class vector
{
	T *arr;
	int s;
	public:
	void create(int size)
	{
		arr=new T[size];
		s=size;
		cout<<"Enter vector: ";
		for(int i=0;i<s;i++)
			cin>>arr[i];
	}
	void modify(int pos,T val)
	{
		if(pos<s) arr[pos] = val;
	}
	void mul(T n)
	{
		for(int i=0;i<s;i++)
			arr[i] *= n;
	}
	void display()
	{
		cout<<"(";
		for(int i=0;i<s;i++)
			cout<<arr[i]<<",";
		cout<<"\b)\n";
	}
};

int main()
{	
	vector<int> v;
	v.create(5);
	v.modify(2,20);
	v.display();
	v.mul(10);
	v.display();
	return 0;	
}

/*Sample Output
Enter vector: 4 2 3 5 1
(4,2,20,5,1)
(40,20,200,50,10)
*/
