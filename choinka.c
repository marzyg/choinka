/*
 * Program rysujący choinkę.
 */

#include <stdio.h>

int main() {
	int height, i, j;
	printf("Podaj wysokość choinki: ");
	scanf("%d", &height);
	for(i = 1; i <= height; i++) {
		for(j = 1; j <= height - i; j++) {
            		printf(" ");
        	}
		for(j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for(j = 1; j <= height - 1; j++) {
		printf(" ");
	}
	printf("*\n");
	return 0;
}

