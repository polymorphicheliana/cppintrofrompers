#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int x = rand() % 10;
    int y;
    scanf("%d", &y);
    if (x == y)
    {
        printf("success\n");
    }
    else 
    {
        printf("the nump you chose was %d it was incorrect\n", y);
        printf("the correct nump was %d\n", x);
    }
    return 0;
}
