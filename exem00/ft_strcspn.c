#include <stdio.h>
#include <string.h>

int ft_strcspn(char *s, char *charset)
{
    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(charset[j])
        {
            if(s[i] == charset[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}

int main()
{

    int size;

    // initializing strings
    char str1[] = "geeksforgeeks";
    char str2[] = "kff";

    // using strcspn() to calculate initial chars
    // before 1st matching chars.
    // returns 3
    size = ft_strcspn(str1, str2);

    printf("The unmatched characters before first matched character :  %d\n", size);
}
