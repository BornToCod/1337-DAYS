#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

  range = (max - min) + 1;
	if (min == max)
	{
		return (0);
	}
	if(min > max)
	{
	  range = (min - max) + 1;
	}
	i = 0;
	arr = (int *)malloc(range * sizeof(int));
	if (arr == NULL)
	{
		return (0);
	}
	if(min > max)
	{
	  while (i < range)
	  {
		  arr[i] = min - i;
		  i++;
	  }
	}
	else if(min < max)
	{
	  while (i < range)
	  {
		  arr[i] = i + min;
		  i++;
	  }
	}

	return (arr);
}

int main()
{
  //  int *range;
    int *arr;
    int i;

    i = 0;
    // Test case 1: min < max
    arr = ft_range(-5, 2);
    //printf("Test case 1: min = 5, max = 10\n");
    while(i < 8)
    {
      printf("%d ", arr[i++]);
    }
    return 0;
}
