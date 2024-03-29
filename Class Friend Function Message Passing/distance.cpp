#include<iostream>
using namespace std;

/* Program to implement two classes named DM and DB which store value
of distances.DM stores the value in meters and centimeters and DB stores the value in
feet and inches. Add this two classes using friend function to carry out addition
operation. The object that stores the result may be DM or DB type depending upon
the result to be displayed */
//				by Aniruddha

class DB;

class DM
{
	int m;
	double cm;
	public:
		void input()
		{
			cout<<"Enter distance in meter - centimeter : ";
			cin>>m>>cm;
		}
		void show()
		{
			cout<<"\nDistance = "<<m<<" m & "<<cm<<" cm\n";
		}
		
		int getm()
		{
			return m;
		}
		double getcm()
		{
			return cm;
		}
		friend DM add(DM,DB);
};

class DB
{
	int ft;
	double in;
	public:
		DB()
		{
			ft = in =0;
		}
		DB(DM dm)
		{
			double xin;
			xin = (dm.getm()*100 + dm.getcm())*0.394;
			ft = xin/12;
			in = xin - (ft*12);
		}
		void input()
		{
			cout<<"Enter distance in feet - inches : ";
			cin>>ft>>in;
		}
		void show()
		{
			cout<<"\nDistance = "<<ft<<" ft & "<<in<<" inches\n";
		}
		friend DM add(DM,DB);
};

DM add(DM mc,DB fi)
{
	DM a;
	
	double cm,in,xcm,xin;
	cm = mc.m*100 + mc.cm;
	in = fi.ft*12 + fi.in;
	
	xcm = cm + in*2.54;
	xin = in + cm*0.394;
	
	a.m = xcm/100;
	a.cm = xcm - (a.m*100);
	
	return a;
	
}

int main()
{
	DM a;
	DB b;
	a.input();
	b.input();
	cout<<"After adding : ";
	DM c;
	DB d;
	c = add(a,b);
	d = add(a,b);
	c.show();
	d.show();
	return 0;
}
/*Sample Output:
Enter distance in meter - centimeter : 15 65
Enter distance in feet - inches : 2 5
After adding : 
Distance = 16 m & 38.66 cm

Distance = 53 ft & 9.63204 inches

*/
