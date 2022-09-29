#include <unistd.h>

int main()
{
    char uppercase = 'B';
    char lowercase = 'a';
    int num = 1;
    while(num != 27)
    {
        if(num % 2 == 0)
        {
            write(1, &uppercase, 1);
            uppercase += 2;

        }
        else
        {
            write(1, &lowercase, 1);
            lowercase += 2;
        }
        num++;
    }

    write(1, "\n", 1);

    return(0);

}


