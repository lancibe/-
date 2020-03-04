#include <stdio.h>

#include <stdlib.h>


int main(int argc, char *argv[]) {
	char *p = (char *)malloc(sizeof(char) * 20);
	char *q = p;
	scanf("%s %s", p, q);
	printf("%s %s\n", p, q);
}
