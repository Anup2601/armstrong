// sum of  element of array
#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("enter the five elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of  element is %d",sum);
    return 0;
}