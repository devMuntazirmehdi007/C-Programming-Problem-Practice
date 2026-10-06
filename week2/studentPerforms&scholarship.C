#include <stdio.h>
int main()
{
    int number_of_std,std_id,attendence,sum,scholarshiph_category,percentage,scholarship=0;
    float total_marks=300.0;
    
    printf("Enter the number of students\n");
    scanf("%d",&number_of_std);
    if(number_of_std<=50 && number_of_std>0)
    {
       
    }else{
        printf("students range should be between 1 to 50\n");
    }



   int marks[3];
   int i=0;
   while(i<number_of_std)
   {

     printf("Enter the std_id\n");
     scanf("%d",&std_id);
     printf("Enter the marks of PF\n");
     scanf("%d",&marks[0]);

     if(marks[0]>=40)
     {
        printf("Enter the marks of Calculus \n");
        scanf("%d",&marks[1]);

        if(marks[1]>=40)
        {
            printf("Enter the marks of AP\n");
            scanf("%d",&marks[2]);

            if(marks[2]>=40)
            {
                 sum=marks[0]+marks[1]+marks[2];
                printf("%d\n",sum);
                percentage=(sum/300.00)*100;
                printf("Enter your attendence\n");
                scanf("%d",&attendence);
                // printf("yor per %d",percentage);
                 
    
                if(attendence>=75)
                {
                    printf("Remember 1 for Need Base 2 for Merit base 3 no scholarship\n");
                    printf("Enter the scholarship Category [1/2/3]\n");
                    scanf("%d",&scholarshiph_category);

                    switch(scholarshiph_category)
                    {
                      case 1:
                        printf("Need Base scholarship Condition\n");
                         if(percentage>=75){
                            printf("You recive 20 percentage scholarship\n");
                            scholarship=20;
                         } 
                         else 
                         if(percentage>=50)
                         {
                          printf("You recive 10 percentage scholarship\n");
                          scholarship=10;
                         }else{
                            printf("You are not meet with scholarship requirment\n");
                         }
                        break;

                        case 2:
                           printf("Merit Base scholarship Condition\n");
                           if(percentage>=85){
                            printf("You recive 50 percentage scholarship\n");
                            scholarship=50;
                         } 
                         else 
                         if(percentage>=75)
                         {
                            scholarship=30;
                          printf("You recive 30 percentage scholarship\n");
                         }
                         else 
                         if(percentage>=65)
                         { 
                           printf("You recive 15 percentage scholarship\n");
                           scholarship=15;
                         }
                         else{
                            printf("You are not meet with scholarship requirment\n");
                         }
                        break;

                        case 3:
                            printf("No any scholarship for you\n");

                        break;
                        default:
                        printf("Invalid option\n");
                    }
                }
                else
                {
                  printf("Your addendence is shortage\n");
                   i=i+50;
                }
                 i++;
            } 
            else
            {
               printf("You are fail so not eligible for scholarship\n");
               i=i+50;
            }
        } 
        else
        {
            printf("You are fail so not eligible for scholarship\n");
            i=i+50;
        }

     }
     else
     {
        printf("You are fail so not eligible for scholarship\n");
         i=i+50;
     }
    
   }

   int higest,lowet;

   for(int i=0;i<3;i++){
    if(marks[i]>marks[i+1]){
        higest=i;
    } else{
        lowet=i;
    }
   }


  
  printf("***=============Display Result Here============***\n\n");

   printf("Student ID               : %d\n",std_id);
   printf("Total students           : %d\n",number_of_std);
   printf("Total Marks achived      : %d\n",sum);
   printf("Percentage is            : %d\n",percentage);
   printf("Attendence               : %d\n",attendence);
   printf("Scholarship              : %d\n",scholarship);
   printf("Higest Marks             : %d\n",higest);
   printf("Lowest Marks             : %d\n\n",lowet);



   printf("***=============Developed By Muntazir============***\n");


}