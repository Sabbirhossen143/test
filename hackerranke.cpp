#include<iostream>
using namespace std;

int main()
{
    int T;
    long long int A,B;
    cin>>T;

    for(int i=1;i<=T;i++)
    {
        long long int x=0;
        cin>>A>>B;
        x=(A*B)%100;
        cout<<x<<endl;
    }
}
