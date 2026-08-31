/*
	수업 : 공학전산응용 화1234
	담당 교수님 : 오기욱 교수님
	제출자 : _전자공학과_정보윤
	제출날짜 : 2019-05-13
*/

#include<stdio.h>

int isspace(char ch); // 입력한 문자열의 공백 문자의 개수를 세는 함수

int main(void)
{
	char str[100]; // 입력할 문자열 변수
	char* p = str; // 문자열을 가르키는 포인터 변수
	int SpaceCount = 0; // 공백개수를 세는 변수

	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]s", str); //공백문자가 포함된 문자열 입력 서식문자는 %[^\n]s임을 주의

	for (int i = 0; str[i] != 0; i++)
	{
		if (isspace(*(p + i)) == 0) // 문자열의 각 원소가 공백 문자인가 
			SpaceCount++;
	}

	printf("공백 문자의 개수 : %d \n", SpaceCount);

	return 0;
}

int isspace(char ch)
{
	if (ch == ' ')
		return 0;
	else if (ch == '\t')
		return 0;
	else if (ch == '\v')
		return 0;
	else if (ch == '\n')
		return 0;
	else if (ch == '\f')
		return 0;
	else if (ch == '\r')
		return 0;
	else
		return 1;
}