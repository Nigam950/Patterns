//hollow invereted pyramid
#include<iostream>
using namespace std;

void pattern(int n) 
{
    for (int i=n;i>=1;i--) {
        cout << string(n-i, ' ');
        for (int j=0;j<i;j++) {
            if (j==0| i==n||j==i-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    int a;
    cout<<"Enter the number of rows: ";
    cin>>a;
    pattern(a);
    return 0;
}
