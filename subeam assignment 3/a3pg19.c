#include <stdio.h>

int main() {
    int start, end, i, j;
    
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    
    for (i = start; i <= end; ++i) {
        printf("\n%d\n", i);
        for (j = 1; j <= 10; ++j) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
