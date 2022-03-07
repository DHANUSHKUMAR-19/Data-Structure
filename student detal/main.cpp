#include <iostream>

using namespace std;

int main()
{
    char  name[20];
    int marks[3];
    float avg;
    cout<<"Enter the name"<<endl;
    cin>>name;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter marks in subject "<<(i+1)<<endl;
        cin>>marks[i];
        avg+=marks[i];
    }
    cout << "Average marks = " <<avg/3<< endl;
    if(avg/3>90)
    {
        cout<<"Distinction"<<endl;
    }
    else if(avg/3>80)
        cout<<"First class"<<endl;
    else if(avg/3>60)
        cout<<"Second class"<<endl;
    else
        cout<<"Fail"<<endl;
    return 0;
}
