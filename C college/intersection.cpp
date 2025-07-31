#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a day of the week
struct Day {
    char *dayName;
    int date;
    char *activity;
};

// Function to create a new day entry
struct Day create() {
    struct Day newDay;

    // Dynamically allocate memory and check for allocation success
    newDay.dayName = (char *)malloc(20 * sizeof(char));
    if (newDay.dayName == NULL) {
        printf("Memory allocation failed for dayName.\n");
        exit(1);
    }

    newDay.activity = (char *)malloc(100 * sizeof(char));
    if (newDay.activity == NULL) {
        printf("Memory allocation failed for activity.\n");
        free(newDay.dayName);  // Clean up already allocated memory
        exit(1);
    }

    // Get user input
    printf("Enter Day Name: ");
    scanf("%19s", newDay.dayName);  // Use %19s to avoid buffer overflow

    printf("Enter Date: ");
    scanf("%d", &newDay.date);
    getchar();  // Consume leftover newline character

    printf("Enter Activity: ");
    scanf(" %99[^\n]", newDay.activity);  // Avoid overflow with %99

    return newDay;
}

// Function to read data from the keyboard and populate the calendar
void read(struct Day calendar[], int numDays) {
    for (int i = 0; i < numDays; i++) {
        printf("\nEnter details for Day %d:\n", i + 1);
        calendar[i] = create();
    }
}

// Function to display the calendar
void display(struct Day calendar[], int numDays) {
    printf("\nWeek's Activity Details Report:\n");
    for (int i = 0; i < numDays; i++) {
        printf("Day: %s, Date: %d, Activity: %s\n",
               calendar[i].dayName, calendar[i].date, calendar[i].activity);
    }
}

int main() {
    int numDays = 7;
    struct Day calendar[7];

    // Read and display the calendar
    read(calendar, numDays);
    display(calendar, numDays);

    // Free dynamically allocated memory
    for (int i = 0; i < numDays; i++) {
        free(calendar[i].dayName);
        free(calendar[i].activity);
    }

    return 0;
}
