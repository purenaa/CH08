//array4.c
#include <stdio.h>

int main()
{
	char s1[20] = "king", s2[20] = "";
	char name[20], tmp[100];   //임시 배열 tmp를 만들어서 처리한다.

	printf("s1: %s s2: %s \n", s1, s2);
	printf("%d, %d \n", sizeof(s1), strlen(s1));

	strcpy(s2, s1);       //문자열 처리함수이기 때문에 문자열만 가능하고 정수형 배열은 불가능하다.
	printf("s1: %s s2: %s \n", s1, s2);

	printf("input s1 ? ");  //dom
	gets(s1);

	strcat(s2, s1);
	printf("s1: %s s2: %s \n\n", s1, s2);

	printf("%d \n", strcmp(s2, s1));
	printf("%d \n", strcmp(s1, s2));
	printf("%d \n", strcmp(s2, "kingdom"));
	printf("%d \n", strcmp("apple", "Apple"));
	printf("%d \n", strcmp("Apple", "Apple"));

	//p334
	do {
		printf("input name ? ");
		gets(tmp);
	} while (strlen(tmp) >= sizeof(name));
	strcpy(name, tmp);

	printf("name: %s \n", name);
	

	return 0;
}


