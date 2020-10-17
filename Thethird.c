#include<stdio.h>
int main(void)
{
    int no=17;
    printf("请输入两个整数");
    scanf("%d",&no);
    if (no % 5)
       puts("B是A的约数")
    else
       puts("B不是A的约数");
       return 0;      
}
