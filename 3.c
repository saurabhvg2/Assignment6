#include<stdio.h>
int main()
{
    int n, i , sum = 0;
    printf("enter the n value");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i*2-1;
    }
    printf("%d",sum);
}