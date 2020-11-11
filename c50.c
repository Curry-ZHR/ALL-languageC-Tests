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


#include<stdio.h>
int main(void)              /*第二题*/
{
    int i,j;
    printf("请输入两门课的成绩:");
    scanf("%d %d",%i,&j);
    switch{
    case i>=60,j>=60 : puts("it is pass");
    case i<60||j<60 puts("it is no pass");
    case i<0&&i>100 ||j<0&&j>100 puts("it is error");
    }
    return 0;
}


#include<stdio.h>                  /*第三题*/
int main(void)
{                                    /*存疑*/
    int i,j,len;
    puts ("打印一个沙漏型。");
    printf ("总行数：");
    scanf ("%d",&len);

    for (i=1;i<=len/2;i++){
        for (j=1;j<=i;j++)
            putchar('*');
            putchar('/n');
    }
    for (i=len/2;i<=len;i++){
        for (j=len/2;j<=i;j++)
            putchar('*');
    }
    return 0;
}

#include<stdio.h>          /*用辗转相除法求最大公因数*/
int main(void)
{                               /*第四题*/
    int a,b;
    puts("输入两个整数求他们的最大公因数。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    if (a>b){
        for (a%b>0){
            printf("%d",b);
            putchar('/n');
        }
    }
    else (a<b){
        for (b%a>0){
            printf("%d",a);
            putchar('\n');
        }
    }
        return 0;
}

#include<stdio.h>            /*1~1100的素数 五个一行*/
              /*怎么表达素数？*/
int main(void)                     /*第五题不会做*/
{
    int a[100];
    int i;
    printf ("打印1~100以内的素数");
        for (i=0;i<NUMBER;i++)
            a[NUMBER]=1        /*把数组内所有元素初始化为1*/

}


#include<stdio.h>
void bsort(int a[],int n)
{
    int i,j;
    for (i=0;i<n-1;i++){
        for (j=n-1;j>i;j--){               /*构造新函数*/
            if(abs(a[j-1])>abs(a[j])){    /*绝对值函数abs（）*/
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
}
int main(void)
{
    int i;
    int a[101];                 /*第六题*/
    int n;

    scanf("%d",&n);    /*这里就是键入我们需要的整数个数n*/
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);       /*在for循环下键入我们需要的数组内的元素*/
    }
    bsort(a,n);
    for (i=0;i<n;i++){
        printf("%d\n",a[i]);           /*这怎么让输入数据全部横向排列？*/
    }
    return 0;
}

 
#include<stdio.h>                  /*第七题*/
int main(void)         /*putchar*/
{
    int n;
    int i;
    int a[101];
    int j;
    int sum;      /*累乘 累加变量*/

    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=1;
    }
    for (int j=0;j<n;j++){
        if ((a[j]%2)!=0){
            sum=sum*a[j];
        }
        else continue;    /*继续循环*/
                         /*如果数组a[i]某个元素是奇数，则将其累乘，如果不是，则继续循环*/

    }
    printf("%d",sum);
    return 0;
}
