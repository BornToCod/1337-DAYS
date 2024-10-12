#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int a = 0;
    int j = 0;
    int tab[256] = {0};


    if(ac != 3)
    {
        return 0;
    }
    while(av[1][i])
    {
        if(tab[av[1][i]] == 0)
            tab[av[1][i]] = 1;
        i++;
    }
    i = 0;
    while(av[2][i])
    {
        if(tab[av[2][i]] == 0)
            tab[av[2][i]] = 1;
        i++;
    }


   /*  while(a < 255)
    {
        printf("%d",tab[a++]);
    }*/

    while(av[1][j])
    {
       if( tab[av[1][j]] == 1)
       {
           write(1, &av[1][j], 1);
           tab[av[1][j]] = 0;
       }
       j++;
    }
    write(1, " ", 1);
    j = 0;
    while(av[2][j])
    {
       if( tab[av[2][j]] == 1)
       {
           write(1, &av[2][j], 1);
           tab[av[2][j]] = 0;
       }
       j++;
    }

    write(1, "\n", 1);
    write(1, "\n", 1);

    return 0;
}
