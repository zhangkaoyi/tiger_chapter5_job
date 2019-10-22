// tiger_chapter4_job.cpp : 定义控制台应用程序的入口点。
//



#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int ch43_caculate_sum()

{
	int i, eps, flag;
	double m, n;
	m = 0;
	flag = 1;
	n = 0;
	scanf("%d", &eps);
	i = 1;
	while (fabs(m) < eps) {
		m = flag * 1 / ((i - 1) * 3 + 1);
		flag = -flag;
		i++;
		n = n + m;
	}
	printf("n=%.6f\n", n);


	return 0;
}

# include<stdlib.h>
# include<time.h>
int ch46_guess_num()
{
	int count = 0, flag,n, mynumber, yournumber;
	srand(time(0));
	scanf("%d", &mynumber);
	printf("允许猜测次数：");
		scanf("%d", &n);
		flag = 0;
		while (count < n) {			/* 最多能猜7次*/
			printf("Enter your number: ");       /* 提示输入你所猜的整数 */
			scanf("%d", &yournumber);
			count++;
			if (yournumber == mynumber) {     /* 若相等，显示猜中 */
				printf("Lucky You!\n");
				flag = 1;
				break;                       /* 已猜中，终止循环 */
			}
			else
				if (yournumber>mynumber)
					printf("Too big\n");
				else
					printf("Too small\n");
		}
		if (flag == 0) 	/* 超过7次还没猜中，提示游戏结束*/
			printf("Game Over!\n");



	return 0;
}

int main()
{
	//ch43_caculate_sum();
	//ch46_guess_num();
   return 0;
}

