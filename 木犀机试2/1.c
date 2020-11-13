/*旧键盘问题：设置新函加上两个字符串的遍历*/
#include <stdio.h>
#include <ctype.h>  /*ctype.h内的函数是字符测试函数：1 函数原bai型均为int isxxxx(int)
                                                    2> 参数为int, 任何实参均du被提升成整型
                                                    3> 只能正确处理处于[0, 127]之间的值*/
int put_stringr(const char s[]){
    int i=0;
    int cnt=0;
    while(s[i]){       /*在数组s[i]中当i增加时cnt也增加*/
      cnt++;
      i++;
    }
    return cnt;     /*该函数返回cnt*/

}
int main(void)
{
    int i,j,k;
    char str_1[128];/*应该输入的字符串*/
    char str_2[128];/*实际输入的字符串*/
    /*接下来键入数据至字符串中*/
    printf("请输入应该输入的字符串：");scanf("%s",&str_1);
    printf("请输入实际输入的字符串：");scanf("%S",&str_2);
    printf("坏掉的键是：");
    for (i=0;i<put_stringr(str_1);i++){
        if (str_1[i]!=str_2[j]){        /*j的值是不是没有写出？*/
            printf("%c",toupper(str_1[i]));    /*一次遍历：当i取定，j值变化，当两字符串不等时则输出不等时的str_1[i]*/
            j--;
        }
            /*j++？*/
        return 0;
    }
}        /*有问题*/
