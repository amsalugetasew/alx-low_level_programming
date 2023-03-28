#include<string.h>
#include<stdio.h>
char *leet(char * str)
{
int i,len=strlen(str);
for(i = 0; i < len;i++)
{
    
    if(*(str+i)==65 || *(str+i)==97){
        *(str+i)=108;
    }
    else{   
    *(str+i)-=0;
    }
    
    }
return (str);
}
