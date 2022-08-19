//program for lcm and gcd for n numbers.

#include<stdio.h>

int gcd(int,int);

int main()
{
     int n,i,a[10],lcm,m=1,k,g=0;
     printf("enter the number of elements n:");
     scanf("%d",&n);
     printf("enter the elements of array:");

     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         m=m*a[i];
     }

     for(lcm=1;lcm<=m;lcm++)
     {
        for(k=0;k<n;k++)
        {
            if(lcm%a[k]!=0)
            {
                break;
            }
        }
        if(k>n-1)
            break;
     }
     g=gcd(a[0],a[1]);
     for(i=2;i<n;i++)
     {
        g=gcd(g,a[i]);
     }
     printf("lcm=%d\n gcd=%d\n",lcm,g);
}

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}




