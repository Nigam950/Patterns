#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<n-i;j++)
    {
      cout<<" ";
    }
    for(int k=1;k<=i;k++)
    {
        cout<<k<<" ";
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