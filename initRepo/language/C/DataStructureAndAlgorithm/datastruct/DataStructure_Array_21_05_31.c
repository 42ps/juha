#include <stdio.h>

void main() {
	char student[2][3][20];
	for (int i = 0; i < 2; i++) {
		printf("�л� %d�� �̸� :", i + 1);
		gets(student[i][0]);

		printf("�л� %d�� �а� :", i + 1);
		gets(student[i][1]);

		printf("�л� %d�� �й� :", i + 1);
		gets(student[i][2]);
	}

	for (int i = 0; i < 2; i++) {
		printf("\n\n�л� %d", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("\n\t");
			for (int k = 0; k < student[i][j][k] != '\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}
	}
}