#include<iostream>
using namespace std;

//Program to copy string
//		by Aniruddha

void stringCopy(char *a,char *b)
{
	int i;
	for(i=0; a[i]!='\0'; i++)
  	{
    		b[i]=a[i];
  	}
  	b[i]='\0';
}
int main()
{	
	char a[100],b[100];	
			
	cout<<"Enter string : ";
	cin>>a;
	stringCopy(a,b);
	cout<<"Copied string : "<<b<<endl;
	return 0;	
}

/*Sample Output
Enter string : Ani
Copied string : Ani
*/
