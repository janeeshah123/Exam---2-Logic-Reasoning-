#include <stdio.h>
int main() {
    char letter;
    int i, j;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < i; j++) {
        }
         printf("  ");
        for(letter = 'A'; letter < 'A' + (5 - i); letter++) {
            printf("%c ", letter);
        }
        printf("\n");
	}
    return 0;
}
