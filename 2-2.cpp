#include<iostream>
using namespace std;
void pattern(int n)
{
  for(int i=n;i>0;i--)
  {
    for(int j=0;j<i;j++)
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