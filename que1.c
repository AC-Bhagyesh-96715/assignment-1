#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void initDate(struct date *ptrDate)
{
    ptrDate->day = 12;
    ptrDate->month = 2;
    ptrDate->year = 2026;

    printf("Default dates \n");
     printf("day %d \n",ptrDate->day);
     printf("month %d \n", ptrDate->month);
     printf("year %d \n", ptrDate->year);
    
}

void printDateOnConsole(struct date *ptrDate)
{

    printf("%d \n", ptrDate->day);
    printf("%d \n", ptrDate->month);
    printf("%d \n", ptrDate->year);
}

void acceptDateFromConsole(struct date *ptrDate)

{

    printf("Accpet Date---->\n");

    printf("Enter the day");
    scanf("%d", &ptrDate->day);

    printf("Enter the month");
    scanf("%d ", &ptrDate->month);

    printf("Enter the year");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct date d1;
    initDate(&d1);
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);

    return 0;
}