#include <iostream>

using namespace std;

int main()
{
    int d,y,w,temp;
    cout<<"Enter the total dates"<<endl;
    cin>>d;
    y=d/365;
    temp=d%365;
    w=temp/7;
    d=temp%7;
    cout<<"Years "<<y<<endl<<"Weeks "<<w<<endl<<"Days "<<d<<endl;
    return 0;
}
