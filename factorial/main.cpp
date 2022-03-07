#include <iostream>

using namespace std;

int main()
{
    int fact=1,n,i;

    cout<<"Enter the number to find the factorial"<<endl;
    cin>>n;
    i=n;
    while(i>0)
    {
        fact=fact*i;
        i--;
    }
    cout << "Answer  "<<fact<<endl;
    return 0;
}
