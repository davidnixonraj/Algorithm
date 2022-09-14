int gcd(int,int);
#include <stdio.h>

int main()
{
    int r1,r2;
    printf("GCD calculator using Euclidean Algorithm\n");
    printf("Enter the values(with space seperated) :\n");
    scanf("%d %d",&r1,&r2);

    printf("GCD of given number is %d",gcd(r1,r2));

    return 0;
}

int gcd(int r1,int r2)
{
    int q;
    int r;

    while(r2)
    {
         q=r1/r2;
         r=r1%r2;
         r1=r2;
         r2=r;
    }

    return r1;
}
