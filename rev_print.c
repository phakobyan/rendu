#include <unistd.h>
char *ft_rev_print(char *str);
int ft_strlen(const char *s);

int main()
{
    char str[] = {'h', 'e', 'l'};
    ft_rev_print(str);
}


char *ft_rev_print(char *str)
{
    int len;
    len = ft_strlen(str)-1;
    while(len>=0)
    {
        write(1, &str[len], 1);
        len--;
    }
    return(str);
}

int ft_strlen(const char *s)
{
    int i;
    i = 0;
    while(s[i] != '\0')
    {
        i++;    
    }
    return(i);
}
