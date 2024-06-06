 #include <iostream>

using namespace std;


int main() {
    int N,x;

    cin >> N;
    // Print the tree body
    for (int i = 1; i <= N+5-1; i++) {
        // Print spaces
        for (int j = 1; j <= N+5 - i; j++) {
            cout << " ";
        }

        // Print *
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
            x=(2*i)/2;
        }
        cout << endl;
}
 for(int y=1;y<=5;y++)
 {
    for(int k=1;k<=x-1;k++)
    {
        cout << " ";
    }
    for(int l=1;l<=N;l++)
    {
        cout << "*";
    }
cout << endl;

 }

}

