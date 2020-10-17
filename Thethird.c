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


#include<stdio.h>
int main(void)
{
    int A=54,B=12;
    printf("请输入两个整数。");
    printf("整数A：");
    scanf("%d",&A);
    printf("整数B：");
    scanf("%d",&B);
    if (A==B)
       puts("A和B相等");
    else if(A>B)
       puts("A大于B");
    else (A<B)
       puts("A小于B");
       return 0;      
}
