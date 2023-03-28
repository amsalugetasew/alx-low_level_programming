#include<string.h>
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i; 
for(i = 0; i < n; i++) 
{
s = &b;
s = memset(s + 13, '.', 8*sizeof(char));
}
return (s);
}
