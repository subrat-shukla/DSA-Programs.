#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next = a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    cout<<"Fibonacci Series : "<<endl;
    fibonacci(n);
}