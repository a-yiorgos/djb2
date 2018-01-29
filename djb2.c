/* http://www.cse.yorku.ca/~oz/hash.html */

#include <stdio.h>

unsigned long
hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

int
main(int argc, char **argv)
{
    int i;
    
    for (i = 0; i < argc; i++) {
        printf("%s %lu\n", argv[i], hash(argv[i]));
    }
}
