//array1.c

#include <stdio.h>

//�迭(Array) : �ϳ��� �̸����� �����Ǵ� ���� �ڷ����� ���� �����͵��� ����.
//              �� �������� �޸� ����

int main()
{
	int num[5] = { 300, 20, 75, -40, 730 };   //�迭����(���� ����)
	int i, sum = 0, max, min;
	float avg;

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
		sum += num[i];
	avg = (float)sum / 5;


	max = min = num[0];
	for (i = 0; i < 5; i++)
	{
		if (max < num[i])   //�ִ�
			max = num[i];

		if (min > num[i])   //�ּڰ�
			min = num[i];
	}


	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("��: %d, ���: %.2f \n", sum, avg);
	printf("max: %d, min: %d \n", max, min);

	return 0;
}