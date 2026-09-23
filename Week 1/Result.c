#include<stdio.h>

int main(){
    int PF_Marks,Cal_Marks,Eng_Marks;
    int total_marks=300;

    printf("Enter your marks here\n  ");
    scanf("%d  %d  %d",&PF_Marks,&Cal_Marks,&Eng_Marks);

   int Obt_Marks=PF_Marks+Cal_Marks+Eng_Marks;
   float Percentage=(Obt_Marks/total_marks) *100;

    if(PF_Marks<40 || Cal_Marks<40 || Eng_Marks <40){
        printf("You are fail please try next year");
    } else if(PF_Marks>100 || Cal_Marks>100 || Eng_Marks >100){
        printf("please Enter correct marks");
    }
    else{
    
    if(Percentage>=80){
        printf("Your Grade is          : A ");
    } else if(75<=Percentage<=84){
         printf("Your Grade is          : B ");
    } else if(65<=Percentage<=74)
           {
            printf("Your Grade is          : C ");
           }
           else if(50<=Percentage<=64){
            printf("Your Grade is          : D ");
           } else{
            printf("Your Grade is          : F ");
            printf("\nTry next year you not clear the test");
           }
}
    
}