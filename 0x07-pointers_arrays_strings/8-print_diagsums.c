#include<stdio.h>
void print_diagsums(int *a, int size)
{
int i,j,diagonal, *p;
for(i = 0;i < size; i++)
{
diagonal = 0;
for(j = 0;j < size; j++)
{
if(i == j)
{
p = &a[i];
/*printf("%d", *(p+i));
printf(" %d ", i);*/
diagonal = diagonal + *(p + j);
printf("%d", diagonal);
}
}
printf("\n");
}




}
