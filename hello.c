#include <stdio.h>

int main() {
int x = 12;
float y = 3.14;
char s[] = "Hello, world!";
int i;

printf("x is %d, y is %f\n",x,y);
printf("%s\n",s);

for (i = 0; i < 5; ++i) {
		int value = 5;
		value = value * i;
		printf("%d x 5 = %d\n", i, value);
    }
return 0;
}