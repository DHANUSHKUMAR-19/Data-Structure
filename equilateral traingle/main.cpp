#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the total rows required"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                cout<<"*";
            }
            else
                {
                cout<<"";
            }
        }
            printf("\n");
    }

    return 0;
}
