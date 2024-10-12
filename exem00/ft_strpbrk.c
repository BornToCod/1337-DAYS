#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i, j;
    i = 0;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if (s1[i] == s2[j])
                return (char *)&s1[i];
            j++;
        }
        i++;
    }
    return NULL;
}

int main()
{
    const char *s1 = "Hello, world!";
    const char *s2 = "aeiou";

    char *result = ft_strpbrk(s1, s2);
    if (result)
        printf("First matching character: %c\n", *result);
    else
        printf("No matching character found.\n");

    return 0;
}
