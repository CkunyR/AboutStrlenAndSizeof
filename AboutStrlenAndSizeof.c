#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };

	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));///随机值---strlen要寻找一个\n但未知\n在什么位置，所以为随机值

	return 0;
}
