#include <stdio.h>

int main() {
    int num, min;

	printf("entry num (0 is quit): ");
    scanf("%d", &num);
    min = num;

    while (num != 0) {
        printf("entry num (0 is quit): ");
        scanf("%d", &num);
		if (num == 0)
			break;
        if (num < min) {
            min = num;
        }
    }
	
    printf("minimum: %d\n", min);

    return 0;
}
