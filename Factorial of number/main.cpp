#include <iostream>

using namespace std;

int main()
{
    int n,y,fact;
    y=1;
    cout << "Enter the number to find factorial" << endl;
    cin>>n;
    fact=n;
    while(n>0)
    {
        y=y*n;
        n--;
    }
    cout<<"Factorial of "<<fact<<" is "<<y<<endl;
    return 0;
}
