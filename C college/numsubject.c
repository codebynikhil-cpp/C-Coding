#include <stdio.h>

#define NUM_STUDENTS 60
#define NUM_SUBJECTS 5

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    int sum[NUM_STUDENTS];
    float average[NUM_STUDENTS];
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d in 5 subjects:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
        sum[i] = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            sum[i] += marks[i][j];
        }
        average[i] = (float)sum[i] / NUM_SUBJECTS;
    }
    printf("\nResults:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d - Sum: %d, Average: %.2f\n", i + 1, sum[i], average[i]);
    }
    return 0;
}