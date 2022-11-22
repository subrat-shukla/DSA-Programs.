#include<iostream>
using namespace std;                 
int main()
{
    int n,i,j;
    cout<<"Enter number : ";
    cin>>n;
    for(i=n; i>0; i--)
    {
        int k=1;
        for(j=1;j<=n;j++){
            if(j>=i){
                cout<<n-j; //doubttttt
                  k++;
            }
          
            else{
            cout<<" ";
            }
        }
             
        cout<<endl;
    }
}