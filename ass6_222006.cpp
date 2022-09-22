#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v)
{
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	vector<int>v;
	cout<<"\n Initial size=  "<<v.size()<<"\n";
	
	int x;
	cout<<"\n Enter values  ";
	for(int i=0; i<5; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"\n\n Size after inserting values  "<<v.size();
	cout<<"\n\n Current contents  ";
	display(v);
	
	v.push_back(60);
	cout<<"\n\n Size after push_back()=  "<<v.size()<<"\n";
	cout<<"\n\n The contents of the vector after push_back()  ";
	display(v);

	cout<<"\n\n Iterator created and inserted elements at 3rd position  ";
	vector<int>::iterator itr1=v.begin();
	itr1=itr1+2;
	v.insert(itr1,1,6);
	
	cout<<"\n\n Contents of vector after inseting  ";
	display(v);
	cout<<"\n\n Removing elements at 3rd and 4th position  ";
	//v.erase(v.begin()+2,v.begin()+6);
	v.erase(v.begin()+2,v.begin()+4);
	cout<<"\n\n Contents after deletion  ";
	display(v);
	cout<<"\n\n";
	
	int i,y;	
	cout<<"\n\n Multiplication of Scalar factor and vecor ";
	cout<<"\n\n Scalar factor for multiplication is=  ";
	cin>>y;
	cout<<"\n\n Multiplication of scalar factor and vector is=  "<<v[i]<<"\n";
	
	for(int i=0; i<v.size(); i++)
	{
		v[i]=v[i]*y;
	}	

	cout<<"\n";
	display(v);
	return 0;
}


