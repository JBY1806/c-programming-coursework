#include<stdio.h>

int GetRectWidth(int x1, int x2); // 직사각형의 폭을 구하는 함수
int GetRectHeight(int y1, int y2); // 직사각형의 높이를 구하는 함수
int GetRectArea(int Width, int Heigh); // 직사각형의 면적을 구하는 함수
int GetRectPerimeter(int Width, int Heigh); // 직사각형의 둘레를 구하는 함수

int main(void)
{
	int x1, y1; //2차원 평면에서 한 좌표
	int x2, y2; //2차원 평면에서 다른 좌표
	int RectWidth; // 직사각형의 폭을 저장하는 변수
	int RectHeight; // 직사각형의 높이를 저장하는 변수
	int RectArea; // 직사각형의 면적을 저장하는 변수
	int RectPerimeter; // 직사각형의 둘레를 저장하는 변수

	printf("프로그램 종료를 원하시면 Ctrl + C 를 눌러주세요. \n");
	while (1)
	{
		printf("Input x1, y1 : ");
		scanf("%d %d", &x1, &y1); //한 좌표를 받음.
		printf("Input x2, y2 : ");
		scanf("%d %d", &x2, &y2); //다른 좌표를 받음.

		RectWidth = GetRectWidth(x1, x2); // 직사각형의 폭을 계산하여 변수에 저장
		RectHeight = GetRectHeight(y1, y2); // 직사각형의 높이를 계산하여 변수에 저장
		RectArea = GetRectArea(RectWidth, RectHeight); // 직사각형의 면적을 계산하여 변수에 저장
		RectPerimeter = GetRectPerimeter(RectWidth, RectHeight); // 직사각형의 둘레를 계산하여 변수에 저장

		printf("(%d, %d), (%d, %d) \n", x1, y1, x2, y2); // 입력한 두 좌표를 다시 한 번 출력
		printf("RectWidth : %d \n", RectWidth); // 계산된 직사각형의 폭을 출력
		printf("RectHeight : %d \n", RectHeight); // 계산된 직사각형의 높이를 출력
		printf("RectArea : %d \n", RectArea); // 계산된 직사각형의 면적을 출력
		printf("RectPerimeter : %d \n", RectPerimeter); // 계산된 직사각형의 둘레를 출력
	}
	return 0;
}

int GetRectWidth(int x1, int x2)
{
	if (x1>x2)
	{
		return x1 - x2;
	}
	else
	{
		return x2 - x1;
	}
}

int GetRectHeight(int y1, int y2)
{
	if (y1 > y2)
	{
		return y1 - y2;
	}
	else
	{
		return y2 - y1;
	}
}

int GetRectArea(int RectWidth, int RectHeight)
{
	return RectWidth * RectHeight;
}

int GetRectPerimeter(int RectWidth, int RectHeight)
{
	return 2 * (RectWidth + RectHeight);
}

/*위의 코드는 직사각형의 폭, 높이, 면적, 둘레를 구하는 코드이다.*/

/*#include<stdio.h>

int GetInt(void);
int GetRectWidth(int x1, int x2);
int GetRectHeight(int y1, int y2);
int GetRectArea(int Width, int Heigh);
int GetRectPerimeter(int Width, int Heigh);

int main(void)
{
	int x1, y1; //2차원 평면에서 한 좌표
	int x2, y2; //2차원 평면에서 다른 좌표
	int RectWidth; // 직사각형의 폭을 저장하는 변수
	int RectHeight; // 직사각형의 높이를 저장하는 변수
	int RectArea; // 직사각형의 면적을 저장하는 변수
	int RectPerimeter; // 직사각형의 둘레를 저장하는 변수

	printf("Input x1, y1 : "); //한 좌표를 받음.
	x1 = GetInt();
	y1 = GetInt();
	printf("Input x2, y2 : "); //다른 좌표를 받음.
	x2 = GetInt(); 
	y2 = GetInt();

	RectWidth = GetRectWidth(x1, x2); // 직사각형의 폭을 계산하여 변수에 저장
	RectHeight = GetRectHeight(y1, y2); // 직사각형의 높이를 계산하여 변수에 저장
	RectArea = GetRectArea(RectWidth, RectHeight); // 직사각형의 면적을 계산하여 변수에 저장
	RectPerimeter = GetRectPerimeter(RectWidth, RectHeight); // 직사각형의 둘레를 계산하여 변수에 저장

	printf("(%d, %d), (%d, %d) \n", x1, y1, x2, y2); // 입력한 두 좌표를 다시 한 번 출력
	printf("RectWidth : %d \n", RectWidth); // 계산된 직사각형의 폭을 출력
	printf("RectHeight : %d \n", RectHeight); // 계산된 직사각형의 높이를 출력
	printf("RectArea : %d \n", RectArea); // 계산된 직사각형의 면적을 출력
	printf("RectPerimeter : %d \n", RectPerimeter); // 계산된 직사각형의 둘레를 출력

	return 0;
}

int GetInt(void)
{
	int x;
	scanf("%d", &x);
	return x;
}

int GetRectWidth(int x1, int x2)
{
	if (x1 > x2)
	{
		return x1 - x2;
	}
	else
	{
		return x2 - x1;
	}
}

int GetRectHeight(int y1, int y2)
{
	if (y1 > y2)
	{
		return y1 - y2;
	}
	else
	{
		return y2 - y1;
	}
}

int GetRectArea(int RectWidth, int RectHeight)
{
	return RectWidth * RectHeight;
}

int GetRectPerimeter(int RectWidth, int RectHeight)
{
	return 2 * (RectWidth + RectHeight);
}*/