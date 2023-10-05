#include <stdio.h>

int main()
{
    //Counter variable
    


    //For loop (pre-C99 standard)
    for (int j = 0; j < 5; j++)
    {
        //Perform code tasks
        printf("i=%d\n", j);
    }

    // TASK A - count from 10 down to 0 in steps of -1
    printf("TASK A:\n");
    for (int i = 10; i >= 0; i--)
    {
        printf("i=%d\n", i);
    }
    // TASK B - count from 10 down to -10 in steps of -2
    printf("TASK B:\n");
    for (int i = 10; i >= -10; i -=2)
    {
    printf("i=%d\n", i);
    }

    // TASK C - count from 10 to 200 in steps of 10
    printf("TASK C:\n");
    for (int i = 10; i <=200; i+=10)
    {
    printf("i=%d\n", i);
    }
    // TASK D - count from -10 down to 20 in steps of 5
    printf("TASK D:\n");
    for (int i = -10; i <=20; i+=5)
    {
    printf("i=%d\n", i);
    }
    // TASK E - can you predict the largest value of i that is displayed?
    for (int i = 0; i < 12; i += 3)
    {
        //Perform code tasks
        printf("i=%d\n", i);
    }
}