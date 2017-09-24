


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

}*/
#include <iostream>
using namespace std;
int main()
{
  int a=0,i,j;
  int t[3][3];
  cin>>a;
  while(i<a)
  {
      for(i=0;i<a;i++)
      {
          for(j=0;j<a;j++)
        {
            cin>>t[i][j];
        }
      }
  }
}
