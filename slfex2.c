#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Current date: %04d-%02d-%02d\n",
           tm_info->tm_year + 1900,
           tm_info->tm_mon + 1,
           tm_info->tm_mday);

    printf("Current time: %02d:%02d:%02d\n",
           tm_info->tm_hour,
           tm_info->tm_min,
           tm_info->tm_sec);

    return 0;
}

