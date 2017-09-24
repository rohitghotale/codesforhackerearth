


/*#include <stdio.h>
#include <string.h>
int main () 
{
   int c = 0;
   char ch, s[1000];
 
   printf("Input a string\n");
   fgets(s,30,stdin);
 
   while (s[c] != '\0') {
      ch = s[c];
      if (ch >= 'A' && ch <= 'Z')
         s[c] = s[c] + 32;
      else if (ch >= 'a' && ch <= 'z')
         s[c] = s[c] - 32;   
      c++;   
   }
 
   printf("%s\n", s);

 
   return 0;

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int result,a=0,len,i=0;
	char s[100];
	char sp[100];
	fgets(s,100,stdin);
	while(s[i]!='\0')
	{
		i++;
	}
	len=i;
	printf("%d",len);
	for(i=len-2;i>=0;i--)
	{
		sp[a]=s[i];
		a++;
	}
	printf("%s",sp);
	
	for(i=0;i<=len-2;i++)
	{
		if(sp[i]!=s[i])
		{	 printf("NO");
			exit(0);
		}
			
	}
	printf("YES");
	return 0;
}

#include <stdio.h>

int main()
{
    int j,i,a[10000],result=1;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        scanf("%d",&a[j]);
        result=result*a[j];
    }
	printf("%d",result);
    return 0;
}
prime number
#include<stdio.h>
int main()
{
int a,n,k=0,b,j;
printf("Enter the number");
scanf("%d",&n);
for(int i=2;i<=n;i++)
	{
	a=i-2;
		for(j=2;j<i;j++)			
			{
				if(i%j!=0)
				{
					k++;
				}
			}
		if(k==a)
		printf("%d \n",j);
		k=0;
	}
}
#include <stdio.h>

int main()
{
	int l,n,i=0,h,w;
    
	scanf("%d",&l);
	scanf("%d",&n);
	while(i<n)
		{
			scanf("%d",&w);
			scanf("%d",&h);
			if((w<l && h>l)||(w>l && h<l))
				{
					printf("UPLOAD ANOTHER");
				}   
			else if(w>l && h>l)
				{
					printf("CROP IT");
				}   
			else
				{
					printf("ACCEPTED");
				}
				i++;
		}
}
#include <stdio.h>

int main()
{
    int a=0,l,k,r;
    scanf("%d",&l);
    scanf("%d",&k);
    scanf("%d",&r);
    for(int i=l;i<=k;i++)
        {
            if(i%r==0)
            {
                a++;
            }
        }
        printf("%d",a);
}

#include <stdio.h>

int main()
{
    int i=0,j=0,a;
    double l;
    scanf("%d",&j);
    while(i<j)
    {
        scanf("%d",&a);
        l=ceil(a/6);
        if(l%2!=0)
        {
            if(a%6==0)
            {
                a=a+1;
                printf("%d",a);
                printf("WS");
            }
            if(a%6==1)
            {
                a=a+11;
                printf("%d",a);
                printf("WS");
            }
            if(a%6==2)
            {
                a=a+9;
                printf("%d",a);
                printf("MS");
            }
            if(a%6==3)
            {
                a=a+7;
                printf("%d",a);
                printf("AS");
            }
            if(a%6==4)
            {
                a=a+5;
                printf("%d",a);
                printf("AS");
            }
            if(a%6==5)
            {
                a=a+3;
                printf("%d",a);
                printf("MS");
            }
        }
       
    }
}

}
#include <iostream>
using namespace std;
int main()
{
	int i,j,count=0,t;
	char a[11][11];
	cin>>t;
	while(count<t)
	{	
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=3;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		for(i=0;i<=3;i++)
		{
			for(j=0;j<=1;j++)
			{
				if(((a[i][j]=='x' && a[i][j+1]=='x')&&(a[i][j+2]=='.'))||((a[i][j]=='x' && a[i][j+2]=='x')&&(a[i][j+1]=='.')))
					{
						cout<<"YES"<<endl;
						goto end;
					}

				else if(((a[j][i]=='x' && a[j+1][i]=='x')&&(a[j+2][i]=='.'))||((a[j][i]=='x' && a[j+2][i]=='x')&&(a[i][j+1]=='.')))
					{
						cout<<"YES"<<endl;
						goto end;
					}
				else if(((a[j][j]=='x' && a[j+1][j+1]=='x')&&(a[j+2][j+2]=='.'))||((a[j][j]=='x' && a[j+2][j+2]=='x')&&(a[j+1][j+1]=='.')))
					{
						cout<<"YES"<<endl;
						goto end;
					}
					
			}
			for(i=0;i<=0;i++)
				{
					for(j=3;j>=0;j--)
						{
							if(((a[i][j]=='x' && a[i+1][j-1]=='x')&&(a[i+2][j-2]=='.'))||((a[i][j]=='x' && a[i+2][j-2]=='x')&&(a[i+1][j-1]=='.')))
							{
								cout<<"YES"<<endl;
								goto end;
							}
					
						}
				}
		}
		cout<<"NO"<<endl;
	end:count++;
	}	
}
#include <iostream>
using namespace std;

int main()
{
   int n,i,a[10^9],one=0,two=0,teen=0;
   cin>>n;
   a[n]=a[n+1]=a[n+2]=0;
   for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i+=3)
    {
        one=one+a[i];
        two=two+a[i+1];
        teen=teen+a[i+2];
    }
   cout<<one<<" "<<two<<" "<<teen<<" ";
}

#include <iostream>
using namespace std;

int main()
{
    int n=0,a;
    cin>>a;
    while(n<a)
    {
	 int i=0,k=0,array[1000],array1[1000],c,temp,j,final[1000],length;       
	 cin>>length;
        for(i=0;i<length;i++)
        {
            
            cin>>array[i];
            if(array[i]<=9)
            {
                array1[k]=array[i];
                k++;
            }
            else
            {
                while(array[i]!=0)
                    {
                        c=array[i]%10;
                        array1[k]=c;
                        array[i]=array[i]/10;
                        k++;
                    }
            }
            
        }
	
	
            
         for(j=0;j<k;j++)   
        {
            for(i=0;i<k;i++)
            {
                if(array1[i]>array1[i+1])
                    {
                        temp=array1[i+1];
                        array1[i+1]=array1[i];
                        array1[i]=temp;
                    }
            }
            final[j]=array1[k];
            array1[k]=0;
        }
        for(i=0;i<k;i++)
        {
            cout<<final[i];
        }
	cout<<endl;
	n++;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n,k=0,d,a[1000],c,j,i=0,final[1000],temp;
    cin>>n;
    cin>>d;
    while(n!=0)
        {
                c=n%10;
                a[k]=c;
                n=n/10;
	k++;
        }
	for(j=0;j<k;j++)
		{
			cout<<a[j]<<endl;
		}
	 for(j=k-1;j>=0;j--)   
        {
            for(i=0;i<k;i++)
            {
                if(a[i]>a[i+1])
                    {
                        temp=a[i+1];
                        a[i+1]=a[i];
                        a[i]=temp;
                    }
            }
            final[j]=a[k];
            a[k]=0;
        }
	
		for(j=0;j<i;j++)
		{
			cout<<final[j];
		}
	int result = 0;
	for(int j=0;j<k;j++)
		{
					
				for (int i=0; i < k; i++)
				{
			  	result = result*10 + final[i];
				}
				final1[j]=result;
				temp=final[j+1];
				final[j+1]=final[j];
				final[j]=temp;
		}
	for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
				{
					if(result%d==0)
					{
						cout<<result;
					}
					else
						cout<<"-1"<<endl;
					
				}	
		}
}
 */       ollowing is C++ implementation of above idea.
// C++ program to  print all increasing sequences of
// length 'k' such that the elements in every sequence
// are from first 'n' natural numbers.
#include<iostream>
using namespace std;
 
// A utility function to print contents of arr[0..k-1]
void printArr(int arr[], int k)
{
    for (int i=0; i<k; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// A recursive function to print all increasing sequences
// of first n natural numbers.  Every sequence should be
// length k. The array arr[] is used to store current
// sequence.
void printSeqUtil(int n, int k, int &len, int arr[])
{
    // If length of current increasing sequence becomes k,
    // print it
    if (len == k)
    {
        printArr(arr, k);
        return;
    }
 
    // Decide the starting number to put at current position:
    // If length is 0, then there are no previous elements
    // in arr[].  So start putting new numbers with 1.
    // If length is not 0, then start from value of
    // previous element plus 1.
    int i = (len == 0)? 1 : arr[len-1] + 1;
 
    // Increase length
    len++;
 
    // Put all numbers (which are greater than the previous
    // element) at new position.
    while (i<=n)
    {
        arr[len-1] = i;
        printSeqUtil(n, k, len, arr);
        i++;
    }
 
    // This is important. The variable 'len' is shared among
    // all function calls in recursion tree. Its value must be
    // brought back before next iteration of while loop
    len--;
}
 
// This function prints all increasing sequences of
// first n natural numbers. The length of every sequence
// must be k.  This function mainly uses printSeqUtil()
void printSeq(int n, int k)
{
    int arr[k];  // An array to store individual sequences
    int len = 0; // Initial length of current sequence
    printSeqUtil(n, k, len, arr);
}
 
// Driver program to test above functions
int main()
{
    int k = 3, n = 7;
    printSeq(n, k);
    return 0;
}
