#include "test.h"

int main(int ac, char **av)
{
    if(ac != 4)
    {
        return 0;
    }
    if(*av[2] == '*')
    {
        printf("result is %d",atoi(av[1]) * atoi(av[3]));
    }
    else if(*av[2] == '+')
    {
        printf("result is %d",atoi(av[1]) + atoi(av[3]));
    }
    else if(*av[2] == '/')
    {
        printf("result is %d",atoi(av[1]) / atoi(av[3]));
    }
    else if(*av[2] == '-')
    {
        printf("result is %d",atoi(av[1]) - atoi(av[3]));
    }

    return 0;
}
