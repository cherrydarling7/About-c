//��ʽ���������ʵ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = -1, b = 97;
	float c = 215.005f;
	printf("%d\n%u\n",a,a);//4294967295����
	printf("%d\n%x\n%c\n",b,b,b-32);//97��ʮ������Ϊ61
	printf("%s\n","Hello,World!");
	printf("%5.2f\n%e\n%g\n",c,c,c);//5.2f��ʲô��˼��:��5Ϊ����󳤶ȱ���2λС����eΪ��ָ����ʽ�����g��ʲô��˼����%g  ��ʾ�Զ�ѡ����ʵı�ʾ�����
	printf("%%");
	return 0;
}