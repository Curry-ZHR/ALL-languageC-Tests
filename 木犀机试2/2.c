#include<stdio.h>
int bsort(int a[],int n){
    int i,j;
    int cnt=0;           /*每一次遍历 经过的元素个数减少一*/
    for (i=0;i<n;i++){                  /*构造新函数*/
        for (j=0;j<=n-i;j++){         /*从开头向末尾遍历,每两个值交换一次，cnt+1*/
            if(a[j]<a[j-1]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                cnt++;
            }
        }
    }
    return cnt;
}
int main(void)
{
    int n,i;
    int a[n];       /*数组中可以输入未知变量n*/
    printf("总共有多少节车厢：");scanf("%d",&n);
    printf("他们的顺序是：");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);      /*这里键入的n个值就是车厢的序号*/
    }
    printf("至少旋转%d次。\n",bsort(a[n],n));
    return 0;
}
