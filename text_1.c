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
//������Խ�����⣬���������Ի����������ֱ���˳���Ҳ�޷��ж��ַ�

//һ������ɼ������Զ��жϵȼ��Ĵ��룬�����������ݲ��ԣ�����ʾ����Ҫ����������
//ֱ��������ȷ����ֵ��������Ӧ�ĵȼ�Ϊֹ




int main()
{
	float score = 0;
	int a = 0, n = 0;
	
	while (1) //����ѭ��
	{
		printf("Please enter the score (between 0 and 100):");
		n = scanf("%f", &score);//������Ǹ�������n��ֵΪ0������1
		if (n != 1) //�ж�score�����Ƿ��Ǹ�����
		{  
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n');//��ջ��棬ʹscanf���´�ѭ���ɳɹ�����
			//break;//����ʹ�ã�ѭ�����жϣ�ֱ������while��1��˳������
			continue;//�ӹ����жϣ��ص�while��1��
		}

		if (score < 0 || score > 100) //�ж�
		{
			printf("Score should be between 0 and 100. Please check your input.\n");
			while (getchar() != '\n');//��ջ��棬ʹscanf���´�ѭ���ɳɹ�����
			continue;//�ӹ����жϣ��ص�while��1��
			//break;//����ʹ�ã�ѭ�����жϣ�ֱ������while��1��˳������
		}
		printf("Your score is:%.2f\n", score);
		break;//����ʹ�ã�ѭ�����жϣ�ֱ������while��1��˳������
	}
    a = (int)(score / 10);//����ǿ��ת�����ͺͳ�����ʵ�ֶ�scoreȡʮλ�Ĳ���
	printf("Your grade is: ");
	switch (a)//�жϵȼ�
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
