//pointer4.c
#include <stdio.h>

int *swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;	//x, y�� ��������
	int* sal;

	printf("before x: %d, y: %d \n", x, y);
	//swap(x, y); //call by value : �θ��� ���μ� ���� �ڽĿ��� �������� ���� ����
	            	//(�ڽ��Լ��� �θ��� �޸��Լ�(���μ�)�� ������ �� �� ����.
	sal = swap(&x, &y); //call by reference
	printf("after x: %d, y: %d \n", x, y);

	printf("salary : %d \n", *sal);

	return 0;
}

//swap(int x, int y)
int *swap(int* x, int* y)
{
	int tmp;
	static int salary = 3700000;	//��������

	tmp = *x;
	*x = *y;
	*y = tmp;		//x, y ���� ��ȯ�Ǵ� �Լ�

	return &salary;
}



