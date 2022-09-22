#include <iostream>

using namespace std;
class StudData;  //Formal Declaration
class Student
{
    string name;
    string cls;
    char* division;
    string dob;
    char* bloodgroup;
    static int count;  //Static members
public:
    int roll_no;
    Student()       //Constructor
    {

        name="";
        roll_no = 0;
        cls = "";
        division = new char;
        dob = "dd/mm/yyyy";
        bloodgroup = new char[4];
    }
    ~Student()     //Destructor
    {
        delete division;
        delete[] bloodgroup;

    }
    static int getcount()
    {
        return count;
    }
    void getData(StudData*);
    void dispData(StudData*);

};

class StudData
{
    string caddress;
    long long int *teleno;
    long long int *dlno;
    friend class Student;    //Friend Class of StudData
public:
    StudData()
    {

        caddress = "";
        teleno = new long long int;   //Dynamic Memory Allocation
        dlno = new long long int;
    }
    ~StudData()
    {
     delete teleno;
     delete dlno;
    }
    void getStudData()
    {

        cout<<"Enter Contact Address"<<endl;
        cin.get();
        getline(cin,caddress);
        while(1)
        {
        cout<<"Enter the Telephone Number"<<endl;
        cin>>*teleno;
        if(((*teleno/100000)>10000) && (*teleno/100000)<=100000)
        {
            break;
        }
        else
        cout<<"Please Enter a valid telephone Number"<<endl;
        }
        cout<<"Enter the Driving License number:"<<endl;
        cin>>*dlno;
    }
    void dispStudData()
    {
        cout<<"Contact Address : "<<caddress<<endl;
        cout<<"Telephone Number : "<<*teleno<<endl;
        cout<<"Driving License Number : "<<*dlno<<endl;

    }


};

inline void Student:: getData(StudData* st)   //Inline Function
{
    cout<<"Enter Student Name: ";
    //cin.get();
    getline(cin,name);
    cout<<"Enter Roll Number: ";
    cin>>roll_no;
    cout<<"Enter Class: ";
    cin.get();
    getline(cin,cls);
    cout<<"Enter the Division: ";
    cin>>division;
    cout<<"Enter the Date of Birth: ";
    cin.get();
    getline(cin,dob);
    cout<<"Enter Blood Group: ";
    cin>>bloodgroup;
    st->getStudData();
    count++;
}


 inline void Student::dispData(StudData* st1)  //Inline Function
{

    cout<<"Student Name: "<<this->name<<endl;     //this pointer
    cout<<"Roll Number: "<<this->roll_no<<endl;
    cout<<"Class: "<<this->cls<<endl;
    cout<<"Division: "<<this->division<<endl;
    cout<<"Date of Birth: "<<this->dob<<endl;
    cout<<"Blood Group: "<<this->bloodgroup<<endl;
    st1->dispStudData();

}
int Student::count;


int main()
{
    Student* stud1[100];
    StudData* stud2[100];
    int n=0,x,i,roll;
while(1)
    {
     cout<<"                               1.Add Record   2.Display Records    3.Delete Records"<<endl<<endl;
     cin>>x;
     cin.get();
     switch(x)
     {
      case 1:
        stud1[n]=new Student;  //Dynamic Memory Allocation
        stud2[n]=new StudData;  //Dynamic Memory Allocation
        stud1[n]->getData(stud2[n]);
        n++;
        cout<<"Record Added Successfully"<<endl<<endl;
      break;

      case 2:
          if(n==0)
          {
              cout<<"DATABASE IS EMPTY"<<endl;
          }
          else
          {

        cout<<"----------------- STUDENT DETAILS -------------------------------------------"<<endl;
        for(i=0;i<n;i++)
          {
            cout<<"----------------------------------------------------"<<endl;
            stud1[i]->dispData(stud2[i]);
          }
          }
      break;

      case 3:
            if(n<1)
            {
              cout<<"DATABASE IS EMPTY"<<endl;
            }
            else
            {

            cout<<"Enter the Roll number of Student to be Deleted"<<endl;
            cin>>roll;
            for(i=0;i<n;i++)
            {
                if(stud1[i]->roll_no == roll)
                {
                    while(i<n-1)
                    {
                     stud1[i] = stud1[i+1];
                     stud2[i] = stud2[i+1];
                     i++;
                    }
                    n--;

                }
                else
                {
                    cout<<"RECORD  DOES NOT EXIST"<<endl<<endl;
                }
            }
            cout<<"Record Deleted Successfully"<<endl<<endl;
            }
            break;
     }
    }
    return 0;
}
