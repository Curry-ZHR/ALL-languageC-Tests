#include <stdio.h>   /*读取两个整数，然后显示前者是后者的百分之几*/
int main(void)
{
    int x=54,y=84;
    puts("请输入两个整数")
    
    printf("整数x:");scanf("%d,&x");
    printf("整数y:");scanf("%d,&y");
    printf("x的值是y的值的%%d。\n",54/84);
    return 0;
    
}



#include <stdio.h>
int main(void)       /*输出和以及积*/
{
    int a=54,b=12;
    puts("请输入两个整数。")
    printf("整数a:");
    printf("整数b:");
    printf("它们的和是%d,积是%d。\n",a+b,a*b);
    return 0;
}


#include <stdio.h>
int main(void)
{
    double x=57.3;
    printf("请输入一个实数：");scanf("%lf",&x);
    printf("你输入的是%f\n");
    return 0;
}


#include <stdio.h>    /*编写程序对整体常量，浮点型常量，int，double进行乘除等各种运算*/      
int main(void)
{
    int a1,a2,a3;
    double b1,b2,b3,b4;
    a1=7/2;
    a2=7.0/2.0;
    a3=7.0*2.0;
    b1=7/2;
    b2=7.0/2.0;
    b3=7.0/2;
    b4=7.0*2;
    printf("a1=%d\n,a1");
    printf("a2=%d\n,a2");
    printf("a3=%d\n,a3");
    printf("b1=%d\n,b1");
    printf("b2=%d\n,b2");
    printf("b3=%d\n,b3");
    printf("b4=%d\n,b4");
    return 0;
}


#include<stdio.h>
int main(void)
{
    int a=54,b=84;
    printf("整数a:");scanf("%d,&a");
    printf("整数b：");scanf("%d,&b");
    printf("a是b的%%f。\n",(double)a/b);
    return 0;
}


#include<stdio.h>
int main(void)
{
    int a=175
    printf("请输入您的身高："); scanf("%d,&a");
    printf("您的标准体重是[%.1f]公斤。\n",(double)(a-100)*0.9);
    return 0;
}
