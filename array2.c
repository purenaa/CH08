//array2.c
#include <stdio.h>

#define Arr_SZ 5
int main()
{
	int i;
	//1. 배열은 상수로 선언한다.

	int a1[5];
	int a2[Arr_SZ];
	int n = 5;
	//int a3[n];      //에러(상수가 아님)
	const int m = 5;
	//int a4[m];      //에러(상수가 아님)



	//2. 배열복사는 배열변수명으로 복사할 수 없다.

	int x1[5] = { 1, 2, 3, 4, 5 };
	int x2[5];

	//x2 = x1;   //배열변수는 상수라서 한번에 받을 수 없고 원소 대 원소로 받아야한다.

	for (i = 0; i < 5; i++)
	{
		x2[i] = x1[i];
		printf("%d, ", x2[i]);
	}
	printf("\n");




	//3. 배열초기화

	int x3[5] = { 100, 200, 300, 400, 500 };
	//int x3[5] = { 100, 200 };//초기화 값을 저장한 나머지 영역은 0을 보장한다.
	//int x[20][50] = { 0 }; //1000개 모두 0으로 만들고 싶을 때 사용

	for (i = 0; i < 5; i++)
		printf("%d, ", x3[i]);
	printf("\n");
	


	//4. 언사이즈드 배열(배열이 선언과 동시에 초기화될 때 [] 반칸 가능)
	int x4[] = { 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	//int x5[][3] = { 1,2,3,4,5,6 };

	printf("x4 sizeof: %d \n", sizeof(x4));
	for (i = 0; i < sizeof(x4)/sizeof(x4[0]); i++)
		printf("%d, ", x4[i]);
	printf("\n");


	return 0;
}