#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int n,i,sum=0;
    cout<<"Enter the ending range of natural number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       sum+=i;
    }
    cout<<"Sum of "<<n<<" Natural number is "<<sum<<endl;
    return 0;
}
