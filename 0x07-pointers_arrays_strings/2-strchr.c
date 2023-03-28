#include<string.h>
#include<stdio.h>
char *_strchr(char *s, char c)
{
/*int i, j;
int len=strlen(s);
char *ss=NULL;
for(i = 0; i < len; i++)
{

if(*(s+i)==c)
{
j = i;
while(j < len)
{
printf("%c",s[j]);
ss+=s[j];
j++;
}
break;
}
}
*/

 s = strchr(s, c);

return (s);
}
