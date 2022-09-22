#include<iostream>
using namespace std;
template<class T>
void SelectionSort(T a[],int n)
{
  T temp;
  for(int i=0;i<n-1;i++)
  {
      int imin=i;
      for(int j=i+1;j<n;j++)
      {
        if(a[j]<a[imin])
        {
           imin=j;
        }
      }
      temp=a[i];
      a[i]=a[imin];
      a[imin]=temp;
  }
  cout<<"Sorted array:\n";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<"\t";
  }
}

int main()
{
  int a[50],i,n;
  float b[50];
  cout<<"\n Enter the no of elements";
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
    cout<<"\n Enter elements";
    cin>>a[i];
  }    
  SelectionSort(a,3);
  for(int i=0;i<n;i++)
  {
    cout<<"\n Enter elements";
    cin>>b[i];
  }    
  SelectionSort(b,3);
  
  return 0;
}  
                    
