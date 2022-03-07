#include <iostream>

using namespace std;
int b[30];

int main()
{
    int a[30],n,ele,i,j;
    cout<<"Enter the total number of inputs"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        ele=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]==ele)
            {
                b[i]++;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" has occurred "<<b[i]<<" times"<<endl;

    }

    return 0;
}
