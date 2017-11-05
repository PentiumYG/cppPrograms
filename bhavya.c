#include<stdio.h>
#include <conio.h>
void main()
{
  int a[15],i,pos,n,item,ni;
  clrscr();
  printf("enter no of elements of array");
  scanf("%d",&n);
  printf("enter elements of array\n");
  for (i=0,i<n,i++)
  scanf("%d";&a[i]);
printf ("if the elements of array are\n");
for (i=0;i<n;i++)
scanf("\t%d\n",a[i]);
//insertion
printf("do you want to enter any new no! if yes press 1");
scanf ("%d",&no);
if (no !=1)
exit();
prinf("enter position of new element\n");
scanf ("%d",&item);
for(i=n-1; i>=pos;i--)
a[i+1]=a [i];
a[pos]=item;
n=n+1;
printf("the new array is\n");
for(i=0;i<n;i++)
print("%d",a[i]);
getch();


}
