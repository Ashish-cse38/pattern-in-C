#include<stdio.h>

//code starts here
//new added line
int main()
{
long long int u,j,m,l;
for(u=1;u<=5;u++)
{
printf("\n");
for(j=1;j<=6-u;j++)
{
printf(" ");
}
for(j=1;j<=2*u-1;j++)
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
