#include<iostream>

using namespace std;

class demo
{

};
class d
{

};

int main()
{
	string city,vehicle;
	cout<<"Enter city: ";
	cin>>city;
	cout<<"Enter vehicle: ";
	cin>>vehicle;
try
{
	if(city=="pune"||city=="mumbai"||city=="banglore"||city=="chennai")
	{
	   cout<<city<<endl;
  	}
	else
	{
   		throw demo();
	}
}
catch(demo e)
{
	cout<<"Enter valid city"<<endl;
}
try
{
	if(vehicle=="fourwheeler")
	{
		cout<<vehicle<<endl;
	}
        else
	{
    		throw d();
   	}
}
catch(d e)
{
	cout<<"Enter valid vehicle"<<endl;
}
return 0;
}
