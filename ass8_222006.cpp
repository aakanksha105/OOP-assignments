#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int display(list<int> &l)
{
  list<int>::iterator itr;
  for(itr=l.begin();itr!=l.end();++itr)
  {
        cout<<*itr;
        cout<<"\n";
  }
   return 0;
}
int main()
{
  int value;
  list<int> l1(3);
  list<int> l2(5);
  cout<<"Add at the back";
  for(int i=0;i<5;i++)
  {
      cin>>value;
      l1.push_back(value);
      l2.push_back(value+5);
  }
  display(l1);
  cout<<"\n\n";
  display(l2);
  cout<<"\n\n";

  

  cout<<"\nSort list1 and list2";
  l1.sort();
  l2.sort();
  display(l1);
  cout<<"\n\n";
  display(l2);
  cout<<"\n\n";
  

  cout<<"\nMerge two lists";
  l1.merge(l2);
  display(l1);
  cout<<"\n\n";
  
  cout<<"Add at the front";
  for(int i=0;i<5;i++)
  {
      cin>>value;
      l1.push_front(value);
      l2.push_front(value+5);
  }
  display(l1);
  cout<<"\n\n";
  display(l2);
  cout<<"\n\n";
  return 0;
}



       
       

