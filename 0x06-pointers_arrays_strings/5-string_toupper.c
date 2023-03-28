#include<stdio.h>
#include<string.h>
char *string_toupper(char * str)
{
int i,len=strlen(str);
for(i = 0; i < len;i++)
{
    
    if(*(str+i)<97){
        *(str+i)-=0;
    }
    else{   
    *(str+i)-=32;
    }
    
    }
return (str);
}

