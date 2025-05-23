#include <stdio.h>
#include <string.h>

int main() {
	int q;
	int wow_cnt[101] = {0};
	char str[1005];
	int len;

	scanf("%d", &q);
	for (int i = 0; i < q; i++){
		scanf("%s", str);
		len = strlen(str);
		for (int j = 0; j < len; j++) {
			if (!strncmp(str + j, "WOW", 3)) {
				wow_cnt[i]++;	
			}
		}
		printf("%d\n", wow_cnt[i]);
	}
	return 0;
}
