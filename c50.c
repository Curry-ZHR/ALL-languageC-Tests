#include<stdio.h>             /*第一题*/
int main(void)
{
    int i,j,k;
    puts("请输入三个整数。");
    printf("整数1：");scanf("%d",&i);
    printf("整数2：");scanf("%d",&j);
    printf("整数3：");scanf("%d",&k);
    if (i+j>k||i+k>j||k+j>i)
        puts("3");
    else if(i==k||i==j||k==j)
        puts("2");
    else if(i==k==j)
        puts("1");
    else(i+j<=k||i+k<=j||i+k<=j)
        puts("0");
    return 0;
}
