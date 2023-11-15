#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <ctype.h>
//int main()
//{
//	int score = 0;
//	printf("Please enter the score (between 0 and 100):");
//	scanf("%d", &score);
//	if (score < 0 || score>100)
//	{
//		printf("Data error : please check your information.");
//		return -1;
//	}
//	score = score / 10;
//	printf("Your grade is:");
//	switch(score)
//	{
//		case 10:
//		case 9:
//			putchar('A');
//			break;
//		case 8:
//			putchar('B');
//			break;
//		case 7:
//			putchar('C');
//			break;
//		case 6:
//			putchar('D');
//			break;
//		case 5:
//		case 4:
//		case 3:
//		case 2:
//		case 1:
//		case 0:
//			putchar('E');
//			break;
//	}
//	return 0;
//}
//代码可以解决问题，但不够人性化，输入错误直接退出，也无法判断字符

//一个输入成绩可以自动判断等级的代码，如果输入的数据不对，会提示报错并要求重新输入
//直到输入正确的数值，给出对应的等级为止




int main()
{
	float score = 0;
	int a = 0, n = 0;
	
	while (1) //无限循环
	{
		printf("Please enter the score (between 0 and 100):");
		n = scanf("%f", &score);//若输入非浮点数，n赋值为0，否则1
		if (n != 1) //判断score类型是否是浮点数
		{  
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n');//清空缓存，使scanf在下次循环可成功运行
			//break;//不可使用，循环会中断，直接跳出while（1）顺序运行
			continue;//逃过此判断，回到while（1）
		}

		if (score < 0 || score > 100) //判断
		{
			printf("Score should be between 0 and 100. Please check your input.\n");
			while (getchar() != '\n');//清空缓存，使scanf在下次循环可成功运行
			continue;//逃过此判断，回到while（1）
			//break;//不可使用，循环会中断，直接跳出while（1）顺序运行
		}
		printf("Your score is:%.2f\n", score);
		break;//不可使用，循环会中断，直接跳出while（1）顺序运行
	}
    a = (int)(score / 10);//利用强制转化类型和除法，实现对score取十位的操作
	printf("Your grade is: ");
	switch (a)//判断等级
	{
	case 10:
	case 9:
		putchar('A');
		break;
	case 8:
		putchar('B');
		break;
	case 7:
		putchar('C');
		break;
	case 6:
		putchar('D');
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
    case 0:
		putchar('E');
		break;
	}
	printf("\n");
	return 0;
}
