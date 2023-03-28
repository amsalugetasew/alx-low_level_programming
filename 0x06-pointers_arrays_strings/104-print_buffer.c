#include<stdio.h>
#include <stdlib.h>
void print_buffer(char *b, int size)
{
printf(b);
printf("%d",size);
sprintf(b, "%d", size);
snprintf( b, 256, "%d", 132 );
printf( b, 256, "%d", 132 );
}