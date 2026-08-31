/*
	수업 : 공학전산응용 화1234
	담당 교수님 : 오기욱 교수님
	제출자 : _전자공학과_정보윤
*/

#include<stdio.h>

int get_int(void); // 사용자로부터 정수 N값을 입력받아 N값을 출력하는 함수
int sum(int n); // 정수 n까지의 합을 출력하는 함수
int odd_sum(int n); // 정수 n까지의 홀수들의 합을 출력하는 함수
int even_sum(int n); // 정수 n까지의 짝수들의 합을 출력하는 함수


int main(void)
{
	int num = 0; // 정수 N을 저장할 변수
	int result = 0; // 1부터 정수 N까지의 합, 홀수합, 짝수합을 차례로 저장할 변수 
	
	printf("종료를 원하시면 Ctrl + C 키를 누르시오. \n");
	
	while(1)
	{
		num = get_int(); //사용자로부터 정수 N값을 입력받아 num에 저장

	    //result = sum(num); // 1부터 정수 N까지의 합을 저장
	    //printf("1부터 %d까지의 합 = %d \n", num, result); // 1부터 정수 N까지의 합을 출력
		printf("1부터 %d까지의 합 = %d \n", num, sum(num)); // 1부터 정수 N까지의 합을 출력

	    //result = odd_sum(num); // 1부터 정수 N까지의 홀수합을 저장
	    //printf("1부터 %d까지의 홀수들의 합 = %d \n", num, result); // 1부터 정수 N까지의 홀수합을 출력
		printf("1부터 %d까지의 홀수들의 합 = %d \n", num, odd_sum(num)); // 1부터 정수 N까지의 홀수합을 출력

		//result = even_sum(num); // 1부터 정수 N까지의 짝수합을 저장
		//printf("1부터 %d까지의 짝수들의 합 = %d \n", num, result); // 1부터 정수 N까지의 짝수합을 출력
		printf("1부터 %d까지의 짝수들의 합 = %d \n", num, even_sum(num)); // 1부터 정수 N까지의 짝수합을 출력

	}
	return 0;
}

/*위의 코드에서 주석을 달아놓은 각 두 줄의 코드들은 한 줄로도 될 걸 두줄로 늘려놓은 코드이다.
주석의 코드들은 result라는 결과 변수를 따로 추가한 코드이다.
한편, 주석이 안 달린 코드는 그냥 곧바로 함수의 출력된 값을 바로 printf문으로 출력한 코드이다.
이렇게 어떤 수들의 합을 구할 때 짝수라든지 홀수라든지 뭔가 사용자가 원하는 숫자들만 콕 집어서
더하고 싶다면 선택의 길을 제공해주는 if문을 이용을 하면 편리할 것이다.
*/

int get_int(void)
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf("%d", &n);
	return n;
}

int sum(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int odd_sum(int n)
{
	int i = 1;
	int odd_sum = 0;
	while (i <= n)
	{
		if (i % 2 == 1)
			odd_sum = odd_sum + i; //홀수들만 '선택'해서 합한다.
		i++;
	}
	return odd_sum;
}

int even_sum(int n)
{
	int i = 1;
	int even_sum = 0;
	do
	{
		if (i % 2 == 0)
			even_sum = even_sum + i; //짝수들만 '선택'해서 합한다.
		i++;
	} while (i <= n);
	return even_sum;
}