#include <iostream>

using namespace std;

int main()
{
   int a[20],b[20],i,n;
   cout<<"Enter the total number of input"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int max=a[0];
   for(i=1;i<n;i++)
   {
       if(max<a[i])
       {
           max=a[i];
       }
   }
   cout<<"The greatest element "<<max<<endl;
      for(i=0;i<n;i++)
   {
       if(a[i]!=max)
       {
           b[i]=a[i];

       }
   }
   int max2=b[0];
   for(i=1;i<n-1;i++)
   {
       if(max2<b[i])
       {
           max2=b[i];
       }
   }
   cout<<"2nd largest element "<<max2<<endl;
    return 0;
}
