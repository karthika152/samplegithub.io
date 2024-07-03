#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,stu[3][3],tot=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
        printf("Student %d Mark :",i);
        scanf("%d",&stu[i][j]);
       }
   }

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("\n MARK = %d",stu[i][j]);
           tot = tot+stu[i][j];

       }
       printf("Student %d Total %d :\n",i,tot);
   }

    getch();
}
