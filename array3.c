//array3.c
#include <stdio.h>

int main()
{
	char ch = 'a', i;
	char str[10] = "kingdom";	//1���� ���ڹ迭�� ���ڿ��� �ϳ� �����Ѵ�.


	printf("%d, %d, %d \n", sizeof(ch), sizeof(str[0]), sizeof(str));
	printf("%c, %p, %p \n\n", str[0], &str[0], str);

	printf("str: %p, %s \n", str, str);

	printf("input string? ");
	//scanf("%s", str); 
	gets(str);	//one two 100\0 (enter�� null�� �ٲ��ش�)  //�迭�� ��踦 �˻����� �ʱ� ������ ������ ��!
	//fgets(str, 10, stdin);
	printf("str : %p, %s \n", str, str);

	printf("\n");
	for (i = 0; i < 10; i++)
		printf("%p: %c, %d \n", &str[i], str[i], str[i]);


	return 0;
}

