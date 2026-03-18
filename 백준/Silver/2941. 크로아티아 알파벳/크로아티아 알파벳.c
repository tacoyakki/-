#include <stdio.h>

int main() {
	char str[101];
	scanf("%s", str);
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {
			i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				i++;
			}
			else if (str[i + 1] == 'z' && str[i + 2] == '=') {
				i += 2;
			}
		}
		else if ((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j') {
			i++;
		}
		else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=') {
			i++;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}