#include<stdio.h>

int main(void) {
	int i, j;
	int culc;

	printf("100�}�X�v�Z��\��\n");
	printf("�����Z(1) or �|���Z(2)�F");
	scanf_s("%d", &culc);
	printf("\n");

	if (culc != 1 && culc != 2) { // 1��2�ȊO�����͂��ꂽ�ꍇ
		printf("\"1\"��\"2\"����͂��Ă��������B\n");
	}
	else {
		printf("   |");
		for (i = 1; i <= 9; i++)
			printf("%3d", i);
		printf("\n---+---------------------------\n");

		// �����Z
		if (culc == 1) {
			for (i = 1; i <= 9; i++) {
				printf("%2d |", i);
				for (j = 1; j <= 9; j++)
					printf("%3d", i + j);
				putchar('\n');
			}
		}

		// �|���Z�i���j
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