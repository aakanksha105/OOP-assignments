#include <iostream>
using namespace std;

class shape
{
    protected:
    double x,y;
};


class derived1 : public shape
{

public:
    void get_data()
    {
        cout<<"Enter two values to calculate the area"<< endl;
        cin>>x;
        cin>>y;
    }


};

class derived2:public derived1
    {
        double area;

public:
       void disp_data()
    {
        get_data();
        cout<<"Data entered is as follows:-"<<endl;
        cout<<x<<"  "<<y<<endl;
    }
      void Area_rectangle()
      {

          area=x*y;
          cout<<"Area of the Rectangle is  "<<area<<endl;
      }
      void Area_triangle()
      {

          area=(0.5*x*y);
          cout<<"Area of the Triangle is "<<area<<endl;
      }

    };


int main()
{
    int x;
    char ch;
    derived2 d2;
do{
    d2.disp_data();



    cout<<"Enter the shape of the figure you want to calculate Area of"<<endl<<" 1.Rectangle  2.Triangle"<<endl;
    cin>>x;
    switch(x)
    {
     case 1:
     d2.Area_rectangle();
     break;
     case 2:
     d2.Area_triangle();
     break;
     default:
     cout<<"Invalid Choice"<<endl;
     break;
    }
cout<<"Do you want to find area of another shape(Y/N)"<<endl;
cin>>ch;
}while(ch=='y'||ch=='Y');



return 0;
}
