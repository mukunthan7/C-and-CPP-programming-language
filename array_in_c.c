//array program to c
#include<stdio.h>
void main()
{
  int a[5],i;
  for(i=0;i<5;i++)
  {
    printf("enter the elements of array %d\n",i);
    scanf("%d",&a[i]);
  }
  printf("the elements of array are\n");
  for(i=0;i<5;i++)
  {
    printf("%d\n",a[i]);
  }
}
