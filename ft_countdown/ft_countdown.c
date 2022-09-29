#include <unistd.h>

int main()
{
    char num = '9';
    while(num != '0')
    {
        write(1, &num, 1);
        num--;
    }
    write (1, "0\n", 2);
    return (0);
}
