#include <stdio.h>
/*
5
1234*
123***
12*****
1*******
*********
 *******
  *****
   ***
    *



3
12*
1***
*****
 ***
  *
*/
int main() {
	int n;
	int star = 1;
	int space ; 
	int max;
	int multiple  = 1;
	
	scanf("%d", &n);
	max = n * 2 - 1;
	space = n -1;

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < space; j++) {
			fputc(' ', stdout);
		}
		for (int j = 0; j < star; j++) {
			fputc('*', stdout);
		}
		fputc('\n', stdout);
		star += 2 * multiple;
		space += -1 * multiple;
		if (space == 0) {
			multiple *= -1;
		}
	}

	return 0;
}
