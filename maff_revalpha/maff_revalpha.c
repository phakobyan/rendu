#include <unistd.h>

int main()
{
    char uppercase = 'z';
    char lowercase = 'Y';
    int num = 26;
    while(num != 0)
    {
        if(num % 2 == 0)
        {
            write(1, &uppercase, 1);
            uppercase -= 2;

        }
        else
        {
            write(1, &lowercase, 1);
            lowercase -= 2;
        }
        num--;
    }

    write(1, "\n", 1);

    return(0);

}
