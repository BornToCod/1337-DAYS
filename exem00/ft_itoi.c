#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



char	*ft_itoa(int nbr)
{
  int i = 0;
  long n = nbr;
  char temp;
  int j = 0;

  char *arr;
  arr = malloc(34);
  if(!arr)
    return 0;
  if (n == 0)
    {
        arr[0] = '0';
        arr[1] = '\0';
        return arr;
    }
  if(n < 0)
  {
    arr[i] = '-';
    n = -n;
    i++;
    j++;
  }
  while(n > 9)
  {
    arr[i] = n % 10 + '0';
    n = n / 10;
    i++;
  }
  arr[i] = n % 10 + '0';
  i++;
  arr[i] = '\0';
  int len = i - 1;

  while(j < i / 2)
  {
    temp = arr[j];
    arr[j] = arr[len];
    arr[len] = temp;
    j++;
    len--;
  }
  return arr;
}

int main()
{
   char *str = ft_itoa(123456);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }

    str = ft_itoa(-123456);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }

    str = ft_itoa(0);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }

    str = ft_itoa(-2147483648);
    if (str)
    {
        printf("%s\n", str);
        free(str);
    }
}

