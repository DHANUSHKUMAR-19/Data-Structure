#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cout<<"Enter the numbers to compare"<<endl;
   cin>>a>>b;
   if(a==b)
   {
       cout<<"a and b are equal"<<endl;
   }
   else if(a>b)
   {
       cout<<a<<" is the greatest"<<endl;

   }
   else{
        cout<<b<<" is the greatest"<<endl;

   }
    return 0;
}
