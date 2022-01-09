#include <stdio.h>
#include <stdlib.h>
int a[100];
int c=0;
int bin(int l,int h,int key);


//Compiler version gcc  6.3.0

int main()
{
  int n,l,h,i,key,m;
  printf("Enter the total numebrs\n");
  scanf("%d",&n);
  l=0;
  h=n-1;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("enter the key\n");
  scanf ("%d",&key);
  m=bin(l,h,key);
  if(c==0)
  {
    printf("Key could't be found\n");
   
     
   }
   return 0;
  }
  
  
int bin(int l,int h,int key)
{
  int mid;
  if(l==h)
  {
    if(key==a[l])
    {c++;
      return l;
    }
    
  }
  else
  {
    
    mid=(l+h)/2;
    if(key==a[mid])
    {
      c++;
      return mid+1;
    }
    else if(key>a[mid])
    {
      return bin(mid+1,h,key);
      
    }
    else
    {
      return bin(l,mid-1,key);
    }
  }
  
}}
  
}