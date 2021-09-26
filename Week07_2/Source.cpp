#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int);
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int j = 2; j < x; j++) {
		if (isPrime(j) == 1) {
			printf("%d ", j);
		}
	}
	return 0;
}

int isPrime(int a)
{
	int i = 2;
	while (a % i != 0) {
		i++;
	}
	if (i == a)
		return 1;
}