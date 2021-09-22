#include<stdio.h>//printf()修饰符使用
int main()
{
    printf("%d\n",2589);//可以直接输入数字
    printf("%2d\n",2598);//超过一位原样输出  2表示输出长度？
    printf("%10d\n",2589);//补足10位，右对齐（默认）
    printf("%06d\n",2589);//0表示用0填充，笑死没有打d哭了
    printf("%-6d\n",2589);//左对齐

    return 0;
}