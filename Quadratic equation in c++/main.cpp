#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c,d,x1,x2,x;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(a==0)
    {
        cout<<"Roots can't be found"<<endl;
        exit(0);
    }
    else if(d==0)
    {
        cout<<"ROots ae real and equal"<<endl;
        x=(-b)/(2*a);
        cout<<"x1 = "<<x<<"x2 ="<<x<<endl;
    }
    else if(d>0)
    {
        cout<<"Roots are real and distinct"<<endl;
        x1=(-(b)+sqrt(d))/2*a;
        x2=(-(b)-sqrt(d))/2*a;
        cout<<"x1 = "<<x1<<"\nx2 ="<<x2<<endl;
    }
    else{
        cout<<"Roots are  imaginary"<<endl;
        x1=(-b)/2*a;
        x2=sqrt(fabs(d))/2*a;
        cout<<"x1+ ix2 = "<<x1<<"+i"<<x2<<endl;
        cout<<"x1-ix2 = "<<x1<<"-i"<<x2<<endl;


    }
    return 0;
}
