#include<string.h>
char *_strpbrk(char *s, char *accept)
{
char *match;
match = strpbrk(s, accept);
return (match);
}
