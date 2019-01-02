#include<iostream>
#include<vector>
using namespace std;

/*Program to develop a matrix class which can handle integer matrices 
of different dimensions. Also overload the operator for addition, 
multiplication and comparison of matrices.*/
//		by Aniruddha

class Matrix
{
	vector<vector<int> > M;
	int r,c;
	public:
		Matrix() {};

		Matrix(int a,int b)
		{
			r = a , c = b ;
			M.resize(r,vector<int> (c));
			cout<<"Enter "<<r<<" x "<<c<<" matrix : \n";
			for(int i=0;i<r;i++)
				for(int j=0;j<c;j++)
					cin>>M[i][j];
		}
		
		void display()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
					cout<<M[i][j]<<"\t";
				cout<<endl;
			}
		}
		
		Matrix operator + (Matrix &a)
		{
			Matrix x;
			if(r == a.r && c == a.c)
			{
				x.r = r , x.c = c;
				x.M.resize(r,vector<int> (c));
				for(int i=0;i<r;i++)
					for(int j=0;j<c;j++)
						x.M[i][j] = M[i][j] + a.M[i][j];
			}
			return x;
		}
		
		Matrix operator * (Matrix &a)
		{
			Matrix x;
			if(c == a.r)
			{
				x.r = r , x.c = a.c;
				x.M.resize(x.r,vector<int> (x.c));
				for(int i=0;i<r;i++)
					for(int j=0;j<x.c;j++)
						for(int k=0;k<c;k++)
							x.M[i][j] += M[i][k] * a.M[k][j];
			}
			return x;
		}
		
		bool operator == (Matrix &a)
		{
			if(r == a.r && c == a.c)
			{
				for(int i=0;i<r;i++)
					for(int j=0;j<c;j++)
						if(M[i][j] != a.M[i][j])
							return false;
				return true;
			}
			return false;
		}
		
};

int main()
{	
	Matrix m1(3,3);
	cout<<"1st matrix: \n";
	m1.display();
	
	Matrix m2(3,3);
	cout<<"2nd matrix: \n";
	m2.display();
	
	bool a = m1==m2;
	cout<<"\nTwo matrices are ";
	(a==true)?cout<<"same\n":cout<<"not same\n";
	
	Matrix m3 = m1 + m2;
	cout<<"\nAfter addition : \n";
	m3.display();
	
	Matrix m4 = m1 * m2;
	cout<<"After multiplication : \n";
	m4.display();	
	
	
}

/*Sample Output
Enter 3 x 3 matrix : 
1 2 3 
4 5 6
7 8 9
1st matrix: 
1	2	3	
4	5	6	
7	8	9	
Enter 3 x 3 matrix : 
1 4 7
2 5 8
3 6 9
2nd matrix: 
1	4	7	
2	5	8	
3	6	9	

Two matrices are not same

After addition : 
2	6	10	
6	10	14	
10	14	18	
After multiplication : 
14	32	50	
32	77	122	
50	122	194	

*/
