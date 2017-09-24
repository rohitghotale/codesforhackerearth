#include <iostream>
using namespace std;
int main()
{
  int t,n,array1[100000000],array2[100000000],k=0,a=0;
  cin>>t;
  while(a<t)
  {
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>array2[i];
    }
    for(int i=0;i<n-1;i++)
    {
        while(array2[i]!=array1[i])
        {
            if(array2[i]>array1[i])
            {
                array1[i]++;
                array1[i+1]--;
            }
            else if(array2[i]<array1[i])
            {
                array1[i]--;
                array1[i+1]++;
            }
            else
                array1[i]=array2[i];
        }
    }
    int i=0;
     for(i=0;i<n;i++)
     {
        if(array2[i]==array1[i]) 
        {
            k++;
        }
     }
    if(k==n)
    {
    cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    a++;
  }
}

