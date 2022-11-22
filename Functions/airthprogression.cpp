#include<iostream>
using namespace std;

int ap(int n){
    int ans = 3*n+7;
    return ans; 
}
int main()
{
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;

    int answer = ap(n);
    cout<<"The Nth term is : "<<answer<<endl;
    return 0;
}