#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream f;
	char ch;	
	f.open("first.txt",ios::out);
	if(!f)
	{
		cout<<" Error opening file ";
		return 0;
	}
	cout<<" File name first.txt created";
	f<<"SY BTech Computer Division B,Batch B-1,VIIT Pune "<<endl;
	f.close();
	f.open("first.txt",ios::in);
	if(!f)
	{
		cout<<" Error opening file ";
		return 0;
	}
	while(!f.eof())
	{
		f>> ch;
		cout<<ch;
	}
	f.close();
	return 0;
}	
