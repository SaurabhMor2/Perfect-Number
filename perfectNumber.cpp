#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the number \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(2*n==sum)
    {
        cout<<"Its a Perfect Number \n";
    }
    else
        cout<<"Its NOT a Perfect Number \n";
    return 0;
}
