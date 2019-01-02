#include<iostream>
using namespace std;

//Program to access private data members of a class without using a member or a friend function
//		by Aniruddha

class Test
{
	private:
		int data;
		string S;
	public:
		Test(int d,string a): data(d),S(a) {}
		void display()
		{
			cout<<data<<" "<<S<<endl;
		}	
};


int main()
{	
	Test t(5,"Ani");
	
	//writing private data member	
	int* ptr = ((int*)&t);
	*ptr = 10;
	//how to write the string???
	
	t.display();
	
	
	//reading private data member
	//int x = ((int *)(&t))[0]; //not working
	//string s = ((string *)(&t))[1]; //not working
	
	//cout<<"Main:"<<x<<" "<<s<<endl;
		
}

/*Sample Output

*/
