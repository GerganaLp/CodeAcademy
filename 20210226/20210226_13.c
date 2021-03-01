
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} tagTMyTime;

void checkTime(tagTMyTime *time)
{
    if (time->seconds > 59)
    {
        time->minutes = time->seconds / 60 + time->minutes;
        time->seconds = time->seconds % 60;
    }
    if (time->minutes > 59)
    {
        time->hours = time->minutes / 60 + time->hours;
        time->minutes = time->minutes % 60;
    }
    if (time->hours > 23)
    {
        if (time->hours == 24)
        {
            time->hours = 0;
        }
        else
        {

            time->hours = abs(time->hours - 24);
        }
    }
};
void addSeconds(tagTMyTime *time, int seconds)
{
    time->seconds += seconds;
    checkTime(time);
};
void addMinutes(tagTMyTime *time, int minutes)
{
    time->minutes += minutes;
    checkTime(time);
};

void addHours(tagTMyTime *time, int hours)
{
    time->hours += hours;
    checkTime(time);
};
void printTime(tagTMyTime *time)
{
    printf("%02d:%02d:%02d\n", time->hours, time->minutes, time->seconds);
}
tagTMyTime add(tagTMyTime *time, tagTMyTime *time1, tagTMyTime *time2)
{

    time2->seconds = time->seconds + time1->seconds;
    time2->minutes = time->minutes + time1->minutes;
    time2->hours = time->hours + time1->hours;
    checkTime(time2);
}

int main()
{

    tagTMyTime *clock = NULL;
    clock = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    tagTMyTime *clock1 = NULL;
    clock1 = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    clock->hours = 11;
    clock->minutes = 11;
    clock->seconds = 11;
    addSeconds(clock, 11);
    printTime(clock);
    addMinutes(clock, 17);
    printTime(clock);
    addHours(clock, 2);
    printTime(clock);

    free(clock);
    free(clock1);
}