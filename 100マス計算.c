#include<stdio.h>

int main(void) {
	int i, j;
	int culc;

	printf("100マス計算を表示\n");
	printf("足し算(1) or 掛け算(2)：");
	scanf_s("%d", &culc);
	printf("\n");

	if (culc != 1 && culc != 2) { // 1と2以外が入力された場合
		printf("\"1\"か\"2\"を入力してください。\n");
	}
	else {
		printf("   |");
		for (i = 1; i <= 9; i++)
			printf("%3d", i);
		printf("\n---+---------------------------\n");

		// 足し算
		if (culc == 1) {
			for (i = 1; i <= 9; i++) {
				printf("%2d |", i);
				for (j = 1; j <= 9; j++)
					printf("%3d", i + j);
				putchar('\n');
			}
		}

		// 掛け算（九九）
		if (culc == 2) {
			for (i = 1; i <= 9; i++) {
				printf("%2d |", i);
				for (j = 1; j <= 9; j++)
					printf("%3d", i * j);
				putchar('\n');
			}
		}	
	}
	
	return 0;
}