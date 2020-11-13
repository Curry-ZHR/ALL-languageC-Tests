#include<stdio.h>      /*求矩阵的转置，首先考虑多重数组的多重循环，所谓转置就是第i行变成第i列，第j列变成第j行*/
int main(void)
{
    int i,j;
    int v[3][3];
    printf("请输入这个矩阵。\n");   /*只是输入文字*/
    for (i=0;i<3;i++){
        printf("第%d行:",i+1);       /*矩阵的输入格式：选定某一行，输入所有列*/
        for (j=0;j<3;j++){
            scanf("%d",&v[i][j]);
        }
    }
    printf("这个矩阵的转置矩阵为\n");
    for (j=0;j<3;j++){
        for (i=0;i<3;i++){
            printf("%3d",v[i][j]);   /*用%d的时候每个数字会紧密排列,若改成%3d时，每个数字都占有三个字符的大小*/
        }
        printf("\n");
    }
    return 0;
}
