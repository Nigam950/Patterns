#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=n;i>=1;i--)
  {
    for(int k=n-i;k>=1;k--)
    {
      cout<<" ";
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<char('A'+j);
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