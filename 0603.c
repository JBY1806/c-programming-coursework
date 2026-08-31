#include<stdio.h>
#include<string.h>

typedef struct product {
	char name[20];
	int math;
	int eng;
}PRODUCT;

int main(void)
{
	PRODUCT student1, student2, student3, student4, student5, student6;
	PRODUCT *prd[10] = { &student1, &student2, &student3, &student4, &student5, &student6 };
	int i, cnt, t_cnt = 0;
	int SumMath = 0, SumEng = 0;
	double AvgMath = 0, AvgEng = 0;
	char end[10] = "end";
	cnt = sizeof(prd) / sizeof(prd[0]);
	//printf("%d \n", cnt);
	for (i = 0; i < cnt; i++)
	{
		printf("Input Name: ");
		scanf("%s", &prd[i]->name);
		if (strcmp(prd[i]->name, end) == 0) break;
		t_cnt++;
		printf("Input math, eng : ");
		scanf("%d %d", &prd[i]->math, &prd[i]->eng);
	}

	printf("\n학생 수 = %d \n\n", t_cnt);

	for (i = 0; i < t_cnt; i++)
	{
		SumMath += prd[i]->math;
	}
	AvgMath = (double)SumMath / t_cnt;

	for (i = 0; i < t_cnt; i++)
	{
		SumEng += prd[i]->eng;
	}
	AvgEng = (double)SumEng / t_cnt;

	printf("전체 수학 평균 : %.2lf, 전체 영어 평균 : %.2lf \n\n", AvgMath, AvgEng);

	for (i = 0; i < t_cnt ; i++)
	{
		printf("%8s -> 수학 : %5d  영어 : %5d  평균 :  %.2lf\n", prd[i]->name, prd[i]->math, prd[i]->eng, (prd[i]->math + prd[i]->eng)/(double)2);
	}
}