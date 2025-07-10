//floyd triangle(char).
#include<iostream>
using namespace std;
void pattern(int n)
{
  int sum =1;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<sum++<<" ";
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