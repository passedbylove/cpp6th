/* compback.c strcmp()的返回值 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("strcmp(\"A\", \"A\") is %d\n", strcmp("A","A"));
	printf("strcmp(\"A\", \"B\") is %d\n", strcmp("A","B"));
	printf("strcmp(\"B\", \"A\") is %d\n", strcmp("B","A"));

	return 0;
}
