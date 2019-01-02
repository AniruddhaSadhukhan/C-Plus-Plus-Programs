#include<iostream>
#include<fstream>
using namespace std;

//Program to implement Bubble Sort
//		by Aniruddha

ifstream fi;
ofstream fo;

template <class T>
class BubbleSort
{
	int n;
	T *arr;
	public:
		void input();
		void sort();
		
		~BubbleSort()
		{
			delete []arr;
			cout<<"Destructor\n";
		}
};
template <class T> 
void BubbleSort<T>:: input()
{
	fi>>n;
	arr = new T[n];
	for(int i=0;i<n;i++)
		fi>>arr[i];
}
template <class T> 
void BubbleSort<T>:: sort()
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]>arr[j])
				arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	fo<<"Sorted array is: ";
	for(int i=0;i<n;i++)
		fo<<arr[i]<<" ";
	fo<<endl;
}

int main()
{	
	cout<<"Enter filename: ";
	string s;
	cin>>s;
	
	fi.open(s.c_str());
	fo.open(s.c_str(),ios::app);
	
	if(fi.is_open() && fo.is_open())
	{
		BubbleSort<int> b;
		b.input();
		b.sort();
	}
	else
	{
		cout<<"Error opening file";
	}
	fi.close();
	fo.close();
	return 0;	
}

/*Sample Output
Enter filename: file.txt
5 10 15 20 25 
Destructor

**file.txt**
5
20 25 10 15 5
Sorted array is: 5 10 15 20 25 
*/
