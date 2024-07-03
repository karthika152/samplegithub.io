#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,stu[3][3];
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
        scanf("%d",&stu[i][j]);
       }
   }

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d STUDENTS %d MARK = %d",i+1,j+1,stu[i][j]);
       }
       printf("\n");
   }

    getch();
}
