#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int k=1;k<=n-i;k++)
    {
      cout<<" ";
    }
    for(int j=1;j<=i;j++)
    {
        cout<<"*";
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