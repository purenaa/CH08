//pointer1.c
#include <stdio.h>

//Pointer: 현재 실행중인 프로세스

int main()
{
	double d;	//변수(값을 저장)  //직접참조
	double *dp;	//포인터 변수(메모리주소를 저장)  //간접참조 하기 위해 포인터변수(*)가 필요함
	char *ptr;

	d = 1.5;
	printf("%lf, %p \n", d, &d);	//%p는 시작주소

	dp = &d;
	                  //포인터연산자(단항)
	printf("%lf, %p \n", *dp, dp);

	ptr = &d;
	printf("%p \n", ptr);
	printf("%lf \n", &ptr);

	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));

	return 0;
}


