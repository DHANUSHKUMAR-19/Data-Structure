#include <iostream>

using namespace std;
struct person{
char name[50];
int age;
float salary;
};

int main()
{
    struct person p[100];
    int n,i;
    char dname;
    int op;
    cout<<"Enter the total number of Persons"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter detail of person "<<i+1<<endl;
        //cin.get(p[i].name,50);
        cin>>p[i].name;
        cout<<"Enter the age "<<endl;
        cin>>p[i].age;
        cout<<"Enter the salary"<<endl;
        cin>>p[i].salary;
        cout<<endl;
    }

    cout<<"Enter the person name to Delete "<<endl;
    cin>>dname;
    for(i=0;i<n;i++)
    {
        if(p[i].name==dname)
        {
            cout<<"Are your sure to Delete the information?"<<endl<<"Enter 1 to continue "<<endl;
            cin>>op;
            if(op==1)
            {
                cout<<"Deletion successfull "<<endl;
                p[i]=NULL;
            }

        }
    }
        for(i=0;i<n;i++)
    {
       cout<<"Name : "<<p[i].name<<endl<<"Age : "<<p[i].age<<endl<<"Salary : "<<p[i].salary<<endl;
       cout<<endl;
    }
    return 0;
}
