#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( void )
{
    int i;

    for( i = -10; i < 200; i++ ) {
        if( isascii(i) ) {
            printf( "%d => %c\n", i, i);
        } else {
            printf( "%d != %c\n", i, i);
        }
    }

    return EXIT_SUCCESS;
}
