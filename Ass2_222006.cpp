
#include <iostream>
using namespace std;

class complex
{
private:
int a,b;
public:
complex(int x,int y) //Parameuterized Constructor
{
a=x;
b=y;
}

complex(int k)  //Parameutarized constructor
{
a=k;
b=0;
}
complex()    //default constructor
{
a=0;
b=0;
}

complex operator +(complex c)    //+ Operator Overloaded
{
complex temp;
temp.a = a+c.a;
temp.b = b+c.b;
return(temp);
}

complex operator *(complex c)    //* Operator Overloaded
{
complex temp;
temp.a = (a*(c.a))-(b*(c.b));
temp.b = (a*(c.b))+(b*(c.a));
return(temp);
}


friend ostream& operator<<(ostream &dout,complex &c);
friend istream& operator>>(istream &din,complex &c);


void read()
{
cout<<"Enter the Real Part"<<endl;
cin>>a;
cout<<"Enter te Imaginary Part"<<endl;
cin>>b;
}

void display()
{
cout<<"Complex Number is "<<a<<" + i"<<b<<endl;
}





};


ostream& operator<<(ostream &dout,complex &c)
{
dout<<c.a<<" + i"<<c.b<<endl;
return(dout);
}

istream& operator>>(istream &din,complex &c)
{
din>>c.a>>c.b;
return(din);
}

int main()
{
complex c1,c2,c3,c4;
cout<<"Enter the First Complex Number"<<endl;
cin>>c1;
cout<<"Enter the Second Complex Number"<<endl;
cin>>c2;
cout<<"complex Numbers are"<<endl;
cout<<c1;
cout<<c2;
c3=c1+c2;
c4=c1*c2;
cout<<"Addition of complex numbers is "<<endl;
cout<<c3;
cout<<"Multiplication of complex numbers is "<<endl;
cout<<c4;


return 0;

}

