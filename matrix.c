#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,sum=0;
printf("input elements in the matrix :\n ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("element- [%d],[%d] : \n");
scanf("%d",&a[i],[j]);
}
}
printf(" \n the matrix is :\n");
for(r=0;r<3;r++)
{
printf("\n");
for(c=0;c<3;c++)
printf("%d"\t,a[r][c]);
}
printf("\n\n");
{
for(r=0;r<i;r++)
{
sum=sum+a[r][r];
}
printf("sum of the diagonal elements : %d  ",sum);
}
}   
