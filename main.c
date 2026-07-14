#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
	unsigned long long f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main() {
	char word[15];
	scanf("%s", word);
	
	int len = strlen(word);
	int count[256] = {0};
	
	for (int i = 0; i < len; i++)
		count[(unsigned char)word[i]]++;
	
	unsigned long long result = factorial(len);
	
	for (int i = 0; i < 256; i++) {
		if (count[i] > 1)
			result /= factorial(count[i]);
	}
	
	printf("%llu\n", result);
	
	return 0;
}
