#include<iostream>
#include<cstdlib>
using namespace std;

//Program to overload new/delete operators in a class.
//		by Aniruddha

class Employee
{
	string n;
	int s;
	
	public:
		Employee()
		{
			cout<<"Constructor called\n";
		} 
		
		Employee(string a,int b)
		{
			cout<<"Parameterised Constructor called\n";
			n = a;
			s = b;
		}
		
		void display()
		{
			cout<<"Name : "<<n<<"\nSalary : "<<s<<endl;
		}
		
		void* operator new (size_t size)
		{
			cout<<"Overloading new operator with size "<<size<<endl;
			return ::new Employee();
			/*	Dynamic memory is allocated using new operator 
			But it should be global new operator otherwise it will go in recursion
			void *p = new Employee(); -->this will go in recursion as new will 
							be overloaded again and again
			*/
			//return malloc(size);
		}
		
		void operator delete (void* p)
		{
			cout<<"Overloading delete operator\n";
			::delete p;
			//free(p);//also can be used
		}
};


int main()
{	
	Employee *e = new Employee("Aniruddha",40000);
	e->display();
	delete e;	
}

/*Sample Output
Overloading new operator with size 40
Constructor called
Parameterised Constructor called
Name : Aniruddha
Salary : 40000
Overloading delete operator
*/
