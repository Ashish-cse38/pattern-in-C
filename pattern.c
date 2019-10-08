#include<stdio.h>
int main()
{
long long int i,j,k,l;
for(i=1;i<=5;i++)
{
printf("\n");
for(j=1;j<=6-i;j++)
{
printf(" ");
}
for(j=1;j<=2*i-1;j++)
{
printf("*");
}
}
for(k=1;k<=5;k++)
{
printf("\n");
for(l=1;l<=k;l++)
{
printf(" ");
}
for(l=1;l<=11-(2*k);l++)
{
printf("*");
}
}
}
