#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *cap_string(char * str)
{
int i,len=strlen(str);
for(i = 0; i < len;i++)
{
if (*(str+i)==33 && *(str+i+1)>96)
{
*(str+i+1)-=32;
}
if(*(str+i)<97)
{
*(str+i)-=0;
}
}
return str;
}
