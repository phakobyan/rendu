#include <unistd.h>
#include <stdio.h>
int check(char c);
void    print_first(char *str);

int main(int argc, char **argv)
{
    //printf("argc = %d, agv = %s", argc, argv[1]);
    if(argc == 2)
    {
    print_first(argv[1]);
    }
    write(1, "\n", 1);

}

int check(char c)
{
    if(c == ' ' || c == '\t')
    {
        return (0);
    }
    return (1);
}


void    print_first(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (check(str[i]) == 0)
        {
            i++;
            continue;
        }
        else 
        {
            while (str[i] != '\0' && check(str[i]) != 0)
            {
                write(1, &str[i], 1);
                i++;
            }
            break ;
        }
    }
}
