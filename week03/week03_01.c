#include <stdio.h>

int main() {
	int n1, n2, n3;
	char c;
	printf("Input number : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("Input operator : ");
	scanf_s("%c", &c);
	if (c == '+')
		printf("n1 + n2 + n3 = %d", n1 + n2 + n3);
	else if (c == '*')
		printf("n1 * n2 * n3 * %d", n1 * n2 * n3);
	else if (c == '-')
		printf("n1 - n2 - n3 = %d", n1 - n2 - n3);
	else if (c == '/')
		printf("n1 / n2 / n3 = %d", n1 / n2 / n3);
	else
		printf("individual");
}