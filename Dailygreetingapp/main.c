#include <stdio.h>
#include <time.h>

int main(int argc, char** argv)
{
    time_t today;

    time(&today);
    printf("Hello, Your are going to have a blessed and wonderful day and today is %s", ctime(&today));
}