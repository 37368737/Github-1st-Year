#include <stdio.h>
#include <stdlib.h>

int main()
{
   double mark, topscore, second, third;
   int counter;

   printf("C-program that receives the marks of students: \n\n");

   printf("Enter mark for student 1: ");
   scanf("%lf", &mark);

   topscore = mark;
   second=-1;
   third=-1;
   counter=2;

   while(mark>=0)
   {
   printf("Enter mark for student %d: ", counter);
   scanf("%lf", &mark);
   counter++;
   if (topscore<=mark)
    {third=second;
     second=topscore;
     topscore=mark;}
   else if(second<=mark)
    {third=second;
     second=mark;}
   else if(third<=mark)
    {third=mark;}
   }

   printf("\n\nThe top score is: \t\t%.2lf\n",topscore);
   if(second>-1){
   printf("The 2nd highest score is: \t%.2lf\n",second);
   }
   if(third>-1){
   printf("The 3rd highest score is: \t%.2lf\n",third);
   }
   return 0;
}
