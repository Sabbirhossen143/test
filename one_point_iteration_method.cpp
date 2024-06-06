#include<bits/stdc++.h>

#define f(x) cos(x)-3*x+1
#define g(x) (1+cos(x))/3

using namespace std;

int main()
{
    int step=1,N;
    float x1,x2,e;

    cout<< setprecision(6)<< fixed;

    cout<<"Enter initial guess: ";
    cin>>x1;

    cout<<"Enter tolerable error: ";
    cin>>e;

    cout<<"Enter maximum iteration: ";
    cin>>N;

    do
	 {
		  x2 = g(x1);
		  cout<<"Iteration-"<< step<<":\t x2 = "<< setw(10)<< x2<<" and f(x2) = "<< setw(10)<< f(x2)<< endl;

		  step = step + 1;

		  if(step>N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }

		  x1 = x2;

	 }while( fabs(f(x2)) > e);

	 cout<< endl<<"Root is "<< x2;

	 return(0);
}
