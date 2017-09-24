#include<iostream>
using namespace std;
int main()
{
    long int i=0,n,eat,add,total,count=0;
    cin>>n;
    while(i<n)
    {
        cin>>eat;
        cin>>add;
        cin>>total;
        if(eat<=add)
        {
            cout<<"-1"<<endl;
            goto l1;
        }
        while(total>=eat)
        {
            total=total-eat;
            total=total+add;
            count++;
        }
        
        cout<<count;
        l1 :count=0;
	i++;
    }
}
