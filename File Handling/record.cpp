#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/*Write a C++ program to create a text file. Add and modify 
records in the text file.The record should contain 
name, age and height of a boy.*/
//		by Aniruddha

string name;
int age;
float height;
fstream out ("rec.txt",ios::out | ios::in);
void add()
{
	
	//fstream out ("rec.txt",ios::out | ios::in);
	if(out.is_open())
	for(int i=1;i<4;i++)
	{
		cout<<"Enter name,age,height : ";
		cin>>name>>age>>height;
		out<<i<<" "<<name<<" "<<age<<" "<<height<<endl;
	}
}

void display()
{
	out.seekg(0,ios::beg);
	string text;
	while (getline(out,text))
	{
		cout<<text<<"\n";
	}
}
void modify()
{
	string text;
	out.clear();
	out.seekg(0,ios::beg);
	int x;
	cout<<"Enter record to modify :";
	cin>>x;
	for(int i=1;i<x;i++)
		getline(out,text);
	cout<<"Enter name,age,height : ";
	cin>>name>>age>>height;
	out<<x<<" "<<name<<" "<<age<<" "<<height;
}
int main()
{
	add();
	display();
	modify();
	display();
	
	
	
	return 0;
	
}
/*Output:
Enter name,age,height : Ani 21 5.11
Enter name,age,height : Arka 25 5.2
Enter name,age,height : Ram 30 6.1
1 Ani 21 5.11
2 Arka 25 5.2
3 Ram 30 6.1
Enter record to modify :2
Enter name,age,height : Raj 35 4.64
1 Ani 21 5.11
2 Raj 35 4.64
3 Ram 30 6.1
*/
