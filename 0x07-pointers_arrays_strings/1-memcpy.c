#include <string.h>
#include<stdio.h>
char *_memcpy(char *dest, char *src, unsigned int n)
{
strncpy(dest,src,n);
return (dest);
}
