#include <stdio.h>

int main()
{
	char name[1000];

	printf("이름을 입력하시오 : ");
	scanf("%999s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\'%-20s\"\n", name);

	return 0;
}