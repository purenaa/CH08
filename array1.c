//array1.c

#include <stdio.h>

//�迭(Array) : �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �����͵��� ����.
//              �� �������� �޸� ����

int main()
{
	int num[5] = { 300, 20, 75, -40, 130 };   //�迭����(���� ����)
	int i;

	printf("%d, %d \n", sizeof(num), sizeof(num[0]));  
	                    //��üũ��            //[] : ÷��(subscript)
	printf("%d, %p, %p \n\n\n", num[0], &num[0], num);
	                        //������ �� //������ �����ּ�
	//÷�ڰ� ���� �迭������ �� �迭�� �Ҵ�� �޸��� �����ּ�(������ �����ּҿ� ����)�� ����
	//������ ����̴�.


	/*for (i = 0; i < 5; i++)
	{
		printf("%d, input ? ", i+1);
		scanf("%d", &num[i]);
	}*/


	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");

	
	return 0;
}