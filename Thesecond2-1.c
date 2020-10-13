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
