#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;


    if(ac != 3)
    {
        return 0;
    }

    while(av[1][i] && av[2][j])
    {
        if(av[1][i] == av[2][j])
            i++;
        j++;
    }
    if(av[1][i] == '\0')
    {
        ft_putstr(av[1]);
    }


    write(1, "\n", 1);
    write(1, "\n", 1);

    return 0;
}
