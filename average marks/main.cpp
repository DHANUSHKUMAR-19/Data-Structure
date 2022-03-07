#include <iostream>

using namespace std;

int main()
{
int roll,i=0,total=0;
float m[3];

cout<<"Enter the roll no"<<endl;
cin>>roll;

while(i<3){

    cin>>m[i];
    total+=m[i];
    i++;
}
cout << "average score"<<(total)/3<< endl;

return 0;
}
