//pointer1.c
#include <stdio.h>

//Pointer: ���� �������� ���μ���

int main()
{
	double d;	//����(���� ����)  //��������
	double *dp;	//������ ����(�޸��ּҸ� ����)  //�������� �ϱ� ���� �����ͺ���(*)�� �ʿ���
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);	//%p�� �����ּ�

	dp = &d;
	                  //�����Ϳ�����(����)
	printf("%lf, %p \n", *dp, dp);

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", &ptr);

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	return 0;
}


