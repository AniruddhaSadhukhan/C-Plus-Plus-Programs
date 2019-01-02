#include<iostream>
#include<cstring>
using namespace std;

//Program to enter the information of the employee 
//using class Employee and display the following 
//information (use constructor): Name, Address, Department, Wages
//		by Aniruddha

class employee
{
	char name[30],address[100],dept[10];
	float wage;
	public:
		employee(char n[],char a[],char d[],float w)
		{
			strcpy(name,n);
			strcpy(address,a);
			strcpy(dept,d);
			wage=w;
		}
		void display()
		{
			cout<<"\nName : "<<name<<"\nAddress : "<<address<<"\nDept : "<<dept<<"\nWages : "<<wage;
		}
};
int main()
{	
	employee e[2]={
		employee("Ani","3 Bedon Row","Admin",50000),
		employee("Arka","5 MG Road","HR",30000)};
	for(int i = 0;i<2;i++)
		e[i].display();	
}

/*Sample Output
Name : Ani
Address : 3 Bedon Row
Dept : Admin
Wages : 50000
Name : Arka
Address : 5 MG Road
Dept : HR
Wages : 30000
*/
