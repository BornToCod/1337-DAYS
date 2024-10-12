#include <unistd.h>

int main(int ac, char **av)
{
  if(ac != 2)
  {
    write(1, "\n", 1);
    return 0;
  }
  int i = 0;
  while(av[1][i])
  {
    write(1, &av[1][i], 1);
    if(av[1][i + 1])
        write(1, " ", 1);
    i++;
  }
  return 0;
}