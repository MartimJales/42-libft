#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main( void )
{
    int i;

    for( i = 0; i < 128; i++ ) {
        if( isprint(i) ) {
            printf( "%d => %c\n", i, i);
        } else {
            printf( "%d != %c\n", i, i);
        }
    }

    return EXIT_SUCCESS;
}
