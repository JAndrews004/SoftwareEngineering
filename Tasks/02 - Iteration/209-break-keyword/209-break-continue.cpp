#include <stdio.h>

int main()
{
    bool end_early = false;
    for (int i = 0; true; i++)   // potentially loop from 1 to 10  
    {
        char c = getchar(); //Read character
        char _ = getchar(); //Read and discard newline (nice little hack :)
        if (c == 'q'||c=='Q')
        {
            printf("\tUser stopped the loop early at %d\n", i);
            end_early = true;
            break;                  // break out of the for loop
        }
        printf("Loop counter = %d\n", i);
    }
    if (end_early == true)
    {
        printf("Loop ended early\n");
    }
    puts("Done");
}
