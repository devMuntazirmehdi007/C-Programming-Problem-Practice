#include<stdio.h>

int main(){
    char veichle_Type,driver_licens;
    int speed,Fine,Total_Fine;
    int additional_Fine , Penalty=2000;

    printf("Enter veichle Type Car ,Bike , Truck  [C/B/T]\n");
    scanf("%c",&veichle_Type);
    printf("Enter speed of veichle\n");
    scanf("%d",&speed);
    printf("You have driving Liecen or Not [Y/N]\n");
    scanf(" %c",&driver_licens);

    if (veichle_Type=='C' || veichle_Type =='c')
    {

        additional_Fine=1000;

        if (speed>0 && speed<=60)
        {
          Fine=0;
        }else if (speed>60 && speed<=80)
        {
            Fine=1000;
        } else if (speed>80  && speed<=100)
        {
            Fine=2500;
        } else if (speed>100)
        {
            Fine=5000;
            additional_Fine=2*additional_Fine;
        }else{
            printf("Invalid speed");
        }

        if (driver_licens=='y' || driver_licens=='Y')
        {
            Penalty=0;
        } else if (driver_licens=='n' || driver_licens=='N')
        {
             Penalty=2000;
        }else{
            printf("Please Enter correct deriver licens\n");
        }
        
        
        
    } else if (veichle_Type=='B' || veichle_Type=='b')
    {
        additional_Fine=500;

        if (speed>0 && speed<=60)
        {
          Fine=0;
        }else if (speed>60 && speed<=80)
        {
            Fine=1000;
        } else if (speed>80  && speed<=100)
        {
            Fine=2500;
        } else if (speed>100)
        {
            Fine=5000;
            additional_Fine=additional_Fine*2;
        }

        if (driver_licens=='y' || driver_licens=='Y')
        {
            Penalty=0;
        } else if (driver_licens=='n' || driver_licens=='N')
        {
             Penalty=2000;
        }else{
            printf("Please Enter correct deriver licens\n");
        }
        

    } else if (veichle_Type=='T' || veichle_Type=='t')
    {
        additional_Fine=2000;

        if (speed>0 && speed<=60)
        {
          Fine=0;
        }else if (speed>60 && speed<=80)
        {
            Fine=1000;
        } else if (speed>80  && speed<=100)
        {
            Fine=2500;
        } else if (speed>100)
        {
            Fine=5000;
            additional_Fine=additional_Fine*2;
        }

        if (driver_licens=='y' || driver_licens=='Y')
        {
            Penalty=0;
        } else if (driver_licens=='n' || driver_licens=='N')
        {
             Penalty=2000;
        }else{
            printf("Please Enter correct deriver licens\n");
        }
        

        
    }
    
    Total_Fine=Fine + additional_Fine + Penalty;

    if (Total_Fine>5000)
    {
        printf("Veichle is Impounded\n");
    } else{
        printf("Fine is issued\n");
    }
    

    printf(" ****============Genrate Fine================****\n\n");

     printf("Your veichle Type is    : %c \n",veichle_Type);
     printf("Your veichle speed is   : %d \n",speed);
     printf("driver licen penalty is : %d \n",Penalty);
     printf("Addtional Fine is       : %d \n",additional_Fine);
     printf("Your Fine is            : %d \n",Fine);
     printf("Your Total fine is      : %d \n", Total_Fine);
    

   printf(" ****============Developed By Muntazir================****\n\n");
}