// hollow pyramid
#include<iostream>
using namespace std;
void pattern(int n)
{
   for(int i=1;i<=n;i++)
   {
    for(int j=0;j<n-i;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<i;k++)
    {
      if(k==0||i==n||k==i-1)
      {
       cout<<"* ";
      }
      else
      {
        cout<<"  ";
      }
    }
    cout<<endl;
   }
}
int main()
{
  int a;
  cout<<"Enter the number of the rows:";
  cin>>a;
  pattern(a);
  return 0;
}