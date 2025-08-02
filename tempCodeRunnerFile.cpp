#include<iostream>
#include<cmath>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
  {
      int c=1;
    for(int j=1;j<=i;j++)
    {
      cout<<c<<" ";
      c=c*(i-j)/j;
    }
    cout<<endl;
  }
}
int main()
{
  int a;
  cout <<"Enter the number of the rows:";
  cin>>a;
  pattern(a);
  return 0;
}