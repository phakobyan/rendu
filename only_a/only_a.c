#include <unistd.h>

int main()
{
    char sym = 'a';
    write(1, &sym, 1);
    return 0;
}
