#include<iostream>
using namespace std;

int main()
{
    int T,N;
    cin>>T;

    for(int i=1; i<=T; i++)
    {
        cin>>N;
        int x=0;
        while(N!=0)
        {

            x=N%10;
            N=N/10;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
