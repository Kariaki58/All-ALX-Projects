#include <unistd.h>
#include <string.h>

int main(void)
{
    char *name;

    name  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, name, strlen(name));
    return (0);
}

