//arrayTest.c
#include <stdio.h>

#define ArrSz 100
int main()
{
	int num[ArrSz + 4] = { 0 };
	int Cn, i;

	for (i = 0; i < ArrSz; i++)
	{
		printf("%d, input ? (입력종료: 0)", i+1);
		scanf("%d", &num[i]);    //30, 50m ... 0

		if (num[i] == 0)
			break;      //반복문 빠져나갈 땐 break;
		num[ArrSz] += num[i];
	}

	Cn = i;
	num[ArrSz+1] = num[ArrSz] / Cn;

	num[ArrSz + 2] = num[ArrSz + 3] = num[0];
	for (i = 1; i < Cn; i++)
	{
		if (num[ArrSz + 2] < num[i])   //최댓값
			num[ArrSz + 2] = num[i];

		if (num[ArrSz + 3] > num[i])   //최솟값
			num[ArrSz + 3] = num[i];

	}

	printf("\n");
	for (i = 0; i < Cn; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("합: %d, 평균: %d \n", num[ArrSz], num[ArrSz + 1]);
	printf("max: %d, min: %d \n", num[ArrSz + 2], num[ArrSz + 3]);

	return 0;
}