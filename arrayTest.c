//arrayTest.c
#include <stdio.h>

#define ArrSz 100
int main()
{
	int num[ArrSz + 4] = { 0 };
	int Cn, i;

	for (i = 0; i < ArrSz; i++)
	{
		printf("%d, input ? (�Է�����: 0)", i+1);
		scanf("%d", &num[i]);    //30, 50m ... 0

		if (num[i] == 0)
			break;      //�ݺ��� �������� �� break;
		num[ArrSz] += num[i];
	}

	Cn = i;
	num[ArrSz+1] = num[ArrSz] / Cn;

	num[ArrSz + 2] = num[ArrSz + 3] = num[0];
	for (i = 1; i < Cn; i++)
	{
		if (num[ArrSz + 2] < num[i])   //�ִ�
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i])   //�ּڰ�
			num[ArrSz + 3] = num[i];

	}

	printf("\n");
	for (i = 0; i < Cn; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("��: %d, ���: %d \n", num[ArrSz], num[ArrSz + 1]);
	printf("max: %d, min: %d \n", num[ArrSz + 2], num[ArrSz + 3]);

	return 0;
}