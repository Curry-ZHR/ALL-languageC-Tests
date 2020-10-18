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
    int no=-8;
    printf("请输入一个整数：);
    scanf("%d",abs(-8));
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

#include <stdio.h>
int main(void)
{
    int a=4,b=5;
    puts("请输入两个整数。");
    printf("整数1："); scanf("%d,&a");
    printf("整数2："); scanf("%d,&b");
    if (a!=b)
      puts("结果为1");
    else if (a>b)
      puts("结果为0");
    else  (a<b)
      puts("结果为0");
    return 0;  
}
           
           
#include <stdio.h>
int main <void>
{
    int a=4,b=5,c=6,min;
    puts("请输入三个整数：");
    printf("整数1："),scanf("%d",&a);
    printf("整数2："),scanf("%d",&b);
    printf("整数3："),scanf("%d",&c);
    min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    printf("三个数中最小值为%d。\n",min);
    return 0;
}
           
           
#include <stdio.h>
int main <void>
{
    int a=4,b=5,c=6,d=7,max;
    puts("请输入四个整数：");
    printf("整数1："),scanf("%d",&a);
    printf("整数2："),scanf("%d",&b);
    printf("整数3："),scanf("%d",&c);
    printf("整数4："),scanf("%d",&d);
    max=a;
    if (b>max) max=b;
    if (c>max) max=c;
    if (d>max) max=d;
    printf("最大值是%d。\n",max);
    return 0;
}    
           

#include<stdio.h>
int main(void)
{
    int n1,n2,D;
    puts("请输入两个整数。");
    printf("整数1："),scanf("%d",&n1);
    printf("整数2："),scanf("%d",&n2);
    if(n1>n2) n1-n2=D;
    if(n1<n2) n2-n1=D;
    printf("它们的差是%d。\n",D);
    return 0;
}
