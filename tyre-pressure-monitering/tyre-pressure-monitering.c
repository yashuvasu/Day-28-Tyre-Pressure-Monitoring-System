#include <stdio.h>

#define MIN_PRESSURE 28.0
#define MAX_PRESSURE 32.0

void check_tyre(const char *name, float pressure)
{
    printf("%s : %.1f PSI -> ", name, pressure);

    if (pressure < MIN_PRESSURE)
    {
        printf("LOW\n");
    }
    else if (pressure > MAX_PRESSURE)
    {
        printf("HIGH\n");
    }
    else
    {
        printf("GOOD\n");
    }
}

int main()
{
    float front_left;
    float front_right;
    float rear_left;
    float rear_right;

    printf("====================================\n");
    printf("   TYRE PRESSURE MONITORING SYSTEM\n");
    printf("====================================\n\n");

    printf("Enter Front Left pressure (PSI): ");
    scanf("%f", &front_left);

    printf("Enter Front Right pressure (PSI): ");
    scanf("%f", &front_right);

    printf("Enter Rear Left pressure (PSI): ");
    scanf("%f", &rear_left);

    printf("Enter Rear Right pressure (PSI): ");
    scanf("%f", &rear_right);

    printf("\n========== TYRE STATUS ==========\n");

    check_tyre("Front Left ", front_left);
    check_tyre("Front Right", front_right);
    check_tyre("Rear Left  ", rear_left);
    check_tyre("Rear Right ", rear_right);

    printf("\n=================================\n");

    if (front_left < MIN_PRESSURE ||
        front_right < MIN_PRESSURE ||
        rear_left < MIN_PRESSURE ||
        rear_right < MIN_PRESSURE)
    {
        printf("ALERT: LOW TYRE PRESSURE DETECTED!\n");
    }
    else if (front_left > MAX_PRESSURE ||
             front_right > MAX_PRESSURE ||
             rear_left > MAX_PRESSURE ||
             rear_right > MAX_PRESSURE)
    {
        printf("ALERT: HIGH TYRE PRESSURE DETECTED!\n");
    }
    else
    {
        printf("SYSTEM STATUS: ALL TYRES WITHIN RANGE\n");
    }

    printf("Drive Safe. Check tyre pressure regularly.\n");

    return 0;
}
