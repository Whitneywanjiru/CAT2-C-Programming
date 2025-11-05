#include <stdio.h>

int main() {
    int numbers[10];
    int i, sum = 0;
    float average;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / 10;

    printf("\n--- Simulated File Output ---\n");
    printf("Input (input.txt): ");
    for (i = 0; i < 10; i++)
        printf("%d ", numbers[i]);

    printf("\n\nOutput (output.txt):\n");
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
