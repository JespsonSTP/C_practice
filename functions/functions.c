#include <stdio.h>

void myfunc(void)
{
    printf("my func gets called/\n");
}
int the_sum(int a, int b){
    return (a + b);
}

int main(int argc, char** argv)
{

    printf("hello world");
    myfunc();
    int my_age = the_sum(10, 5);
    printf("I am %i years old\n", my_age);
    return 0;
}