#include<string.h>
char *_strstr(char *haystack, char *needle)
{
char *compare;
compare = strstr(haystack, needle);
return (compare);
}
