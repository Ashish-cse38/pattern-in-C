#include<stdio.h>
int main()
{
long long int i,j,m,l;
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
for(m=1;m<=5;m++)
{
printf("\n");
for(l=1;l<=m;l++)
{
printf(" ");
}
for(l=1;l<=11-(2*m);l++)
{
printf("*");
}
}
}
