#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,num,arr[20];
 clrscr();

 printf("Enter the decimal number= ");
  scanf("%d",&num);

 for(i=0; num>0; i++)
 {
   arr[i]=num%2;
   num/=2;
  }
 printf("Binary= ");
 for(j=i-1; j>=0; j--)
  printf("%d",arr[j]);
 getch();
}

