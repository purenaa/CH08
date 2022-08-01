//array1.c

#include <stdio.h>

//배열(Array) : 하나의 이름으로 참조되는 같은 자료형을 갖는 데이터들의 집합.
//              즉 연속적인 메모리 공간

int main()
{
	int num[5] = { 300, 20, 75, -40, 730 };   //배열변수(열의 집합)
	int i, sum = 0, max, min;
	float avg;

	printf("%d, %d \n", sizeof(num), sizeof(num[0]));  
	                    //전체크기            //[] : 첨자(subscript)
	printf("%d, %p, %p \n\n\n", num[0], &num[0], num);
	                        //원소의 값 //원소의 시작주소
	//첨자가 없는 배열변수는 그 배열이 할당된 메모리의 시작주소(원소의 시작주소와 동일)를 갖는
	//포인터 상수이다.


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
		if (max < num[i])   //최댓값
			max = num[i];

		if (min > num[i])   //최솟값
			min = num[i];
	}


	for (i = 0; i < 5; i++)
		printf("%d, ", num[i]);
	printf("\n");
	printf("합: %d, 평균: %.2f \n", sum, avg);
	printf("max: %d, min: %d \n", max, min);

	return 0;
}