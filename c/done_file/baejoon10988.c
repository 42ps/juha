#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	char line[101] = {0,};
	int len = read(0, line, 101);
	int i = 0;

	while (i < len / 2) {
		if (line[i] != line[len - i -2]) {
			fputc('0', stdout);
			return 0;
		}
		i++;
	}
	fputc('1', stdout);
	return 0;
}
