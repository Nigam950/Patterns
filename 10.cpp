// hollow square
#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1; i<=n;i++)
     {
        for(int j=1;j<=n;j++)
        {

        
        if(i==1||i==n||j==1||j==n)
        {   
            cout<<"* ";
        }
        else{
           cout<<" "<<" ";
        }
    }
        cout<<endl;
     }
}
int main()
{
     int a;
     cout<<"Enter the number of the rows:";
     cin >>a;
     pattern(a);
    return 0;
}