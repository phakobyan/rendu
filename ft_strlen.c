#include <stdio.h>
#include <unistd.h>


void ft_putstr(const char* s);

int ft_strlen(const char* s);

int main()
{
   //printf("%d\n", ft_strlen("Peto"));
   ft_putstr("Peto + Grig");
}

int ft_strlen(const char* s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return (i);
}

void ft_putstr(const char* s)
{   
    write(1, s, ft_strlen(s));
}


