#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<n;k++)
        {
            cout<<char('A'+k);
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    cout<<"Enter the rows:";
    cin>>a;
    pattern(a);
    return 0;
}