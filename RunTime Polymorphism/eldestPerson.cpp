#include<iostream>
using namespace std;

/*Write a C++ program to maintain the records of person with details (name and
age) and find the eldest among them. The program must use this pointer to return
the result */
//		by Aniruddha

class Records
{
	int age;
	string name;
	public: 
		Records() {};
		Records(string n,int a): name(n),age(a) {}
		void show()
		{
			cout<<name<<" : "<<age<<endl;
		}
		Records eldest(Records o)
		{
			return (o.age>age)? o: *this;
		}
};

int main()
{	
	Records ob[3]={Records("Ani",21),Records("Arka",50),Records("Ram",30)};
	Records res;
	for(int i=0;i<2;i++)
		res = ob[i].eldest(ob[i+1]);
	res.show();
	return 0;	
}

/*Sample Output
Arka : 50
*/
