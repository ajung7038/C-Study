#include <stdio.h>

int main() {
	char* p = "Hello";
	char m[] = "world";
	p = m;

	*(p + 1) = "o";
	//m[1] = 'o';
	printf("%s\n", p);
	//printf("%s\n", m);
	
	
	/*while (*p)
		putchar(*p++);*/
}