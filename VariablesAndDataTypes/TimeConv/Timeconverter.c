#include <stdio.h>

int main() {
    float milliseconds = 0.0F;
    float seconds = 0.0F;
    float minutes = 0.0F;
    float hours = 0.0F;
    float days = 0.0F;

    printf("Enter time in milliseconds: ");
    scanf("%f", &milliseconds);

    // Convert milliseconds to seconds
    seconds = milliseconds / 1000.0F;
    // Convert seconds to minutes
    minutes = seconds / 60.0F;
    // Convert minutes to hours
    hours = minutes / 60.0F;
    // Convert hours to days
    days = hours / 24.0F;
    // Print the results
    printf("Time in seconds: %.2f s\n", seconds);
    printf("Time in minutes: %.2f min\n", minutes);
    printf("Time in hours: %.2f h\n", hours);
    printf("Time in days: %.2f d\n", days);
    // Print the results in a single line
    printf("Time in seconds: %.2f, Time in minutes: %.2f, Time in hours: %.2f\n", seconds, minutes, hours);
    // Print the results in a single line with different formatting
    printf("Time in seconds: %.2f | Time in minutes: %.2f | Time in hours: %.2f\n", seconds, minutes, hours);
    return 0;
}
