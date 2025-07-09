//inverted half left angle triangle
#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=n;i>0;i--)
  {
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