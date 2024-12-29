#include <stdio.h>
#include <math.h>
int main()
{
    long n,r,sum=0;
    int i=0;
    printf("enter the decimal no.");
    scanf("%ld",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum+=pow(2,i)*r;
        i++;
    }
    printf("%ld",sum);
    return 5;
}
