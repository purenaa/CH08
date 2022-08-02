//pointer4.c
#include <stdio.h>

int *swap(int* x, int* y);

int main()
{
	int x = 100, y = 200;	//x, y는 지역변수
	int* sal;

	printf("before x: %d, y: %d \n", x, y);
	//swap(x, y); //call by value : 부모의 실인수 값이 자식에게 보내지는 것을 말함
	            	//(자식함수는 부모의 메모리함수(실인수)에 영향을 줄 수 없다.
	sal = swap(&x, &y); //call by reference
	printf("after x: %d, y: %d \n", x, y);

	printf("salary : %d \n", *sal);

	return 0;
}

//swap(int x, int y)
int *swap(int* x, int* y)
{
	int tmp;
	static int salary = 3700000;	//정적변수

	tmp = *x;
	*x = *y;
	*y = tmp;		//x, y 서로 교환되는 함수

	return &salary;
}



