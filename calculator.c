/*
	수업 : 공학전산응용 화1234
	담당 교수님 : 오기욱 교수님
	제출자 : _전자공학과_정보윤
*/
#include<stdio.h>

double get_double(void); //실수 하나를 입력받는 함수
char get_char(void); // 문자 하나를 입력받는 함수
double calculator(double x, double y, char ch); //두 실수와 한 문자(연산자)를 받아와 사칙연산을 하는 함수
void output(double x, double y, double result, char op);// 사칙연산 결과를 출력하는 함수

int main(void)
{
	double num1, num2; // 사칙연산의 피연산자 변수
	double result = 0; // 사칙연산 결과 저장 변수
	int val; // 값이 1이면 프로그램 반복 수행, 0이면 반복 종료 
	char op = 0; // 연산자 변수
	do
	{
		num1 = get_double(); // num1 입력받음
		num2 = get_double(); // num2 입력받음
		op = get_char(); //연산자 입력받음
																//	printf("%c", op);
		result = calculator(num1, num2, op); //사칙연산 결과 저장
		output(num1, num2, result, op); //사칙연산 결과를 출력
		printf("프로그램을 다시 하시겠습니까? (다시 : 1, 종료 : 0) : ");
		scanf("%d", &val);
	} while (val == 1);
	return 0; //main함수 종료
}

double get_double(void)
{
	double x = 0;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x); //실수 입력

	return x; //반환
}

char get_char(void)
{
	//double num1, num2;
	int result; //다시할 지 그만둘 지에 대한 값의 변수
	
	char x = 0;

	printf("연산자를 입력하시오 : ");
	scanf(" %c", &x); //문자 입력
	if (x != '+' && x != '-' && x != '*' && x != '/')
	{
		printf("지원하지 않는 연산자입니다. (연산자 다시 입력 : 1, 종료 : 0)");
		scanf(" %d", &result);
		if (result == 1)
		{

			//num1 = get_double(); // num1 다시 입력받음
			//num2 = get_double(); // num2 다시 입력받음
			
			return get_char();

		}
		else
		{
			return 0;
		}
	}
	return x; //반환
}

double calculator(double x, double y, char ch)
{
	switch (ch)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0;
		break;
	}
}

void output(double x, double y, double result, char op)
{
	printf("%lf %c %lf = %.2lf \n", x, op, y, result); //사칙연산 결과 출력
}


/*위의 코드는 사칙연산을 한 번에 그치지 않고 사용자가 원한다면 얼마든지 다시 연산을 할 수 있는 코드이다. 아래의 코드는 한 번만 실행할 수 있는 코드이다.*/


/*#include<stdio.h>

double get_double(void); //실수 하나를 입력받는 함수
char get_char(void); // 문자 하나를 입력받는 함수
double calculator(double x, double y, char ch); //두 실수와 한 문자(연산자)를 받아와 사칙연산을 하는 함수
void output(double x, double y, double result, char op);// 사칙연산 결과를 출력하는 함수


int main(void)
{
	double num1 = 0, num2 = 0, result = 0; // num1, num2는 입력받을 실수 변수, result는 두 실수의 사칙연산 결과 저장 변수
	char op = 0; // 연산자 변수

	num1 = get_double(); // num1 입력받음
	num2 = get_double(); // num2 입력받음
	op = get_char(); //연산자 입력받음
//	printf("%c", op);
	result = calculator(num1, num2, op); //사칙연산 결과 저장
	output(num1, num2, result, op); //사칙연산 결과를 출력

	return 0; //main함수 종료
}

double get_double(void)
{
	double x = 0;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &x); //실수 입력

	return x; //반환
}

char get_char(void)
{
	//double num1, num2;
	int result;

	char x = 0;

	printf("연산자를 입력하시오 : ");
	scanf(" %c", &x); //문자 입력
	if (x != '+' && x != '-' && x != '*' && x != '/')
	{
		printf("지원하지 않는 연산자입니다. (다시 : 1, 종료 : 0)");
		scanf(" %d", &result);
		if (result == 1)
		{

			//num1 = get_double(); // num1 입력받음
			//num2 = get_double(); // num2 입력받음
			return get_char();

		}
		else
		{
			return 0;
		}
	}
	return x; //반환
}

double calculator(double x, double y, char ch)
{
	switch (ch)
	{
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0;
		break;
	}
}

void output(double x, double y, double result, char op)
{
	printf("%lf %c %lf = %.2lf \n", x, op, y, result); //사칙연산 결과 출력
}*/

/*위의 코드는 연산자를 잘못입력하였을 경우 연산자만 다시 입력받을 수 있는 선택을 할 수 있는 코드이다.*/
