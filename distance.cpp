#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		int inch;
	public:
		Distance()
		{
		}
	    Distance add(int f1,int i1)
	    {
	    	feet=f1;
	    	inch=i1;
		}
		void add(Distance d1,Distance d2)
		{
			feet=d1.feet+d2.feet;
			inch=d1.inch+d2.inch;
			feet=feet+(inch/12);
			inch=inch%12;
	 }
	 ~Distance()
	 {
	 	cout<<"feet="<<feet<<endl;
	 	cout<<"inch="<<inch<<endl;
	 			
		}
};
main()
{
	int f1,i1,f2,i2;
	cout<<"enter values of feet and inch";
	cin>>f1>>i1>>f2>>i2;
    Distance d1(int f1, int i1);
    Distance d2( int f2,int i2);
	Distance.add(d1,d2);
}
