//pointer3.c
#include <stdio.h>

int main()
{
	//포인터변수 : 변수의 시작주소 이거나 또는 1차원 배열의 시작주소를 저장하는 포인터
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;

	ptr = num;

	for (i = 0; i < 5; i++)
		printf("%p: %d, %d, %d \n", 
			&num[i], num[i], *(ptr +i), *(num + i), ptr[i]); 
	printf("\n");
	//포인터변수가 배열을 할당했다면 포인터변수처럼 사용가능


	char msg[20] = "Hello World.";		//msg는 포인터상수(배열변수)
	char *p2;							//*p2는 포인터변수
	

	p2 = msg;
	printf("%c, %c, %c, %c", msg[0], *msg, *(msg + 1), *p2);	//전부 데이터임 주소 x
	printf("%p, %s, %s \m", msg, msg, p2);

	//p2를 사용하여 Hello World.를 출력하시오.
	while (*p2)	//*p2 : p2가 가리키는 값
	{
		printf("%c, ", *p2);	//5000번지가 가리키는 1byte = H, 5001가 가리키는 1byte = e, 반복
		p2++;
	}
	printf("\n\n");

	char *p3 = "multi campus !!!";	  //초기화
	//p3 = "multi campus !!!";	//문자열 상수 포인터를 반환한 값(multi campus가 들어있는 주소)을 p3가 받는다.
	printf("p3: %p, %s \n", p3, p3);


	return 0;
}