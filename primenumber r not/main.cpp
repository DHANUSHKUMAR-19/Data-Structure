#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout << "Enter the number to check" << endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Number "<<n<<" is not Prime number"<<endl;
            exit(0);
        }
    }
    cout<<"Number "<<n<<" is Prime number"<<endl;
    return 0;
}
