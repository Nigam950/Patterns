// diamond
#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<=i;k++)
    {
        cout<<"* ";
    }
    cout<<endl;
  }
    for(int i=n;i>0;i--)
  {
    for(int j=-1;j<n-i;j++)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<"* ";
    }
    cout<<endl;
  }
}
int main()
{
    int a;
    cout<<"Enter the number of rows:";
    cin>>a;
    pattern(a);
    return 0;
}