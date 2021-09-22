//格式控制输出的实例
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = -1, b = 97;
	float c = 215.005f;
	printf("%d\n%u\n",a,a);//4294967295补码
	printf("%d\n%x\n%c\n",b,b,b-32);//97的十六进制为61
	printf("%s\n","Hello,World!");
	printf("%5.2f\n%e\n%g\n",c,c,c);//5.2f是什么意思？:以5为总最大长度保留2位小数。e为以指数形式输出，g是什么意思？：%g  表示自动选择合适的表示法输出
	printf("%%");
	return 0;
}