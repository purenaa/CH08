//pointer2.c
#include <stdio.h>

int main()
{
	char ch, *cp;
	int num, *ip;
	float fnum, *fp;
	double dnum, *dp;

	printf("%d, %d, %d, %d \n", sizeof(ch), sizeof(num), sizeof(fnum), sizeof(dnum));		//����
	printf("%d, %d, %d, %d \n", sizeof(cp), sizeof(ip), sizeof(fp), sizeof(dp));		//������ ����


	//1. �����ͺ����� ������ ������ �ּҸ� �Ҵ�

	cp = &ch; ip = &num, fp = &fnum, dp = &dnum;


	//2. �����͸� ����Ͽ� ������ ���� �Ҵ�
	*cp = 'A', * ip = 100, * fp = 1.1, * dp = 5.3;
	
	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);
	//printf("%p, %p, %p, %p \n", &cp, &ip, &fp, &dp);

	ch++, num++, fnum++, dnum++;	//���� ����(����)
	cp++, ip++, fp++, dp++;			//������ ����(����)

	printf("%c, %d, %f, %lf \n", ch, num, fnum, dnum);
	printf("%p, %p, %p, %p \n", cp, ip, fp, dp);	//������ ������ �ڷ��� ũ�⿡ ���缭 �����Ѵ�.

	return 0;











}