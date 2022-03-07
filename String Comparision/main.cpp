#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char str1[100],str2[100];
    cout<<"Enter the string 1"<<endl;
    cin>>str1;
    cout<<"Enter the string 2"<<endl;
    cin>>str2;
    for(int i=0;i<strlen(str1);i++)
    {
        if(str1[i]!=str2[i])
        {
            exit(0);
        }
    }
        cout<<"Both given strings are RKe "<<endl;
    return 0;
}
