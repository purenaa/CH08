//pointer3.c
#include <stdio.h>

int main()
{
	//�����ͺ��� : ������ �����ּ� �̰ų� �Ǵ� 1���� �迭�� �����ּҸ� �����ϴ� ������
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;

	ptr = num;

	for (i = 0; i < 5; i++)
		printf("%p: %d, %d, %d \n", 
			&num[i], num[i], *(ptr +i), *(num + i), ptr[i]); 
	printf("\n");
	//�����ͺ����� �迭�� �Ҵ��ߴٸ� �����ͺ���ó�� ��밡��


	char msg[20] = "Hello World.";		//msg�� �����ͻ��(�迭����)
	char *p2;							//*p2�� �����ͺ���
	

	p2 = msg;
	printf("%c, %c, %c, %c", msg[0], *msg, *(msg + 1), *p2);	//���� �������� �ּ� x
	printf("%p, %s, %s \m", msg, msg, p2);

	//p2�� ����Ͽ� Hello World.�� ����Ͻÿ�.
	while (*p2)	//*p2 : p2�� ����Ű�� ��
	{
		printf("%c, ", *p2);	//5000������ ����Ű�� 1byte = H, 5001�� ����Ű�� 1byte = e, �ݺ�
		p2++;
	}
	printf("\n\n");

	char *p3 = "multi campus !!!";	  //�ʱ�ȭ
	//p3 = "multi campus !!!";	//���ڿ� ��� �����͸� ��ȯ�� ��(multi campus�� ����ִ� �ּ�)�� p3�� �޴´�.
	printf("p3: %p, %s \n", p3, p3);


	return 0;
}