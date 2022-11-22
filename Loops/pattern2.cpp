#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<j;  //for reverse printing cout<<n-j+1;
        }
        cout<<endl;
    }
}