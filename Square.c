#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

//在主函数前面只需要放一句话引用出函数名就行
void print_row(int n);


//主函数
int main(void)
{
    for (int j = 0; j < 2; j++)
    {
        print_row(2);
    }
}



//单独创造出一个函数，放在底下
void print_row(int n)
{
for (int i = 0; i < n; i++)
{
    printf("#");
}
printf("\n");  //在for循环外，进行完for循环再换行
}
