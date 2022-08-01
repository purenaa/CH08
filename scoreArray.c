//scoreArray.c
#include <stdio.h>

int main()
{
	int score[5][7] = {
	{56, 90, 40, 64}, { 66, 53, 90, 85 }, {42, 94, 40, 80 }, { 57, 70, 95, 79 }, { 92, 90, 60, 75 }
	};  //행 5개, 열 7개인데 4개뿐이므로 나머지 빈공간은 0으로 채워진다.

	int i, j;
	char stdNames[5][20] = { "홍길동","성춘향","이몽룡","까궁이","진달래" };

	//총점, 평균을 구하는 반복문을 추가하라.

	for (i = 0; i < 5; i++)  //행수
	{
		for (j = 0; j < 4; j++)   //열수
		{
			score[i][4] += score[i][j];
		}
		score[i][5] = score[i][4] / 4;
	}

	//석차를 구하라.
	for (i = 0; i < 5; i++)
	{
		score[i][6] = 1;
		for (j = 0; j < 5; j++)
		{
			if (score[i][5] < score[j][5])    //[행][열]
				score[i][6]++;
		}
	}


	heading();
	for (i = 0; i < 5; i++)  //행수
	{
		printf("%3s, ", stdNames[i]);  //성명을 출력하라.
		for (j = 0; j < 7; j++)   //열수
			printf("%3d,  ", score[i][j]);
		printf("\n");
	}


	return 0;
}

heading()
{
	printf("================================================\n");
	printf(" 성명  국어  영어  수학  과학  총점  평균  석차 \n");
	printf("================================================\n");

}







	//char name[3][20];	//2차원 배열
	//int i;
	//
	//for (i = 0; i < 3; i++)
	//{
	//	printf("input name ? ");
	//	gets(name[i]);
	//}

	//for(i=0; i<3; i++)
	//	printf("name : %s \n", name[i]);

