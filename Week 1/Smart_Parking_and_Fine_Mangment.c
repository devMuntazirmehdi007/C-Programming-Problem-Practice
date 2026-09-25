#include<stdio.h>

int main(){

    char vehicel_Type , Vehicel_Category , Valid_Permit ;
    float Parking_duration ,parking_dur, discount , Parking_total;
    int Penalty;
    
    printf("Enter your Vehicel Type Car Bike and Truck [C/B/T]\n");
    scanf("%c",&vehicel_Type);
    printf("Enter Vehicel Category Electric or Non electric [Y/N]\n");
    scanf(" %c",&Vehicel_Category);
    printf("Vehicel have valid permit or not [Y/N]\n");
    scanf(" %c",&Valid_Permit);
    printf("Enter parking duration\n");
    scanf("%f",&Parking_duration);


    if (vehicel_Type =='C' || vehicel_Type == 'c')
    {
        int Parking_Rates=100;
        // int Parking_Rates2=70;

        if (Parking_duration>0)
        {
            if (Parking_duration>2)
            {
                parking_dur=Parking_duration-2;
                Parking_total=(parking_dur)*70;
                Parking_total +=200;
                

            }else if(Parking_duration<0)
            {
                printf("Invalid duration");
            }else{
                Parking_total=Parking_duration*100;
            }

            if(Vehicel_Category=='y' || Vehicel_Category=='Y'){
                discount=Parking_total*15/100;
                Parking_total=Parking_total-discount;

                
            }
            

        }else{
            printf("Enter valid duration");
        }
        
       if (Vehicel_Category=='Y' || Vehicel_Category=='y')
       {
        //  discount=15/100;
       }
       else{
        discount=0;
        if(Vehicel_Category=='n' || Vehicel_Category=='n'){

        }else{
            printf("Please Enter valid category\n");
        }
       }
    

       if (Valid_Permit=='Y' || Valid_Permit=='y')
       {
         Penalty=0;
       }else{
        Penalty=1500;
       }
       
          Parking_total=Parking_total+Penalty;
          printf("%f\n",Parking_total);
          printf("%f",discount);
       
        
    }
    
    else if (vehicel_Type=='B' || vehicel_Type == 'b')
    {
     
     int Parking_Rates=50;
        // int Parking_Rates2=70;

        if (Parking_duration>0)
        {
            if (Parking_duration>2)
            {
                parking_dur=Parking_duration-2;
                Parking_total=(parking_dur)*30;
                Parking_total +=100;
                

            }else if(Parking_duration<0)
            {
                printf("Invalid duration");
            }else{
                Parking_total=Parking_duration*50;
            }

            if(Vehicel_Category=='y' || Vehicel_Category=='Y'){
                discount=Parking_total*15/100;
                Parking_total=Parking_total-discount;

                
            }
            

        }else{
            printf("Enter valid duration");
        }
        
       if (Vehicel_Category=='Y' || Vehicel_Category=='y')
       {
        //  discount=15/100;
       }
       else{
        discount=0;
        if(Vehicel_Category=='n' || Vehicel_Category=='n'){

        }else{
            printf("Please Enter valid category\n");
        }
       }
    

       if (Valid_Permit=='Y' || Valid_Permit=='y')
       {
         Penalty=0;
       }else{
        Penalty=1500;
       }
       
          Parking_total=Parking_total+Penalty;
          printf("%f\n",Parking_total);
          printf("%f",discount);
       
        


    }
    



    else if (vehicel_Type=='T' || vehicel_Type=='t')
    {
        

     int Parking_Rates=200;
        // int Parking_Rates2=70;

        if (Parking_duration>0)
        {
            if (Parking_duration>2)
            {
                parking_dur=Parking_duration-2;
                Parking_total=(parking_dur)*200;
                Parking_total +=400;
                

            }else if(Parking_duration<0)
            {
                printf("Invalid duration");
            }else{
                Parking_total=Parking_duration*150;
            }

            if(Vehicel_Category=='y' || Vehicel_Category=='Y'){
                discount=Parking_total*15/100;
                Parking_total=Parking_total-discount;

                
            }
            

        }else{
            printf("Enter valid duration");
        }
        
       if (Vehicel_Category=='Y' || Vehicel_Category=='y')
       {
        //  discount=15/100;
       }
       else{
        discount=0;
        if(Vehicel_Category=='n' || Vehicel_Category=='n'){

        }else{
            printf("Please Enter valid category\n");
        }
       }
    

       if (Valid_Permit=='Y' || Valid_Permit=='y')
       {
         Penalty=0;
       }else{
        Penalty=1500;
       }

       if(Parking_total>3000)
       {
        printf("Parking Violation — Manual Inspection Required\n");
       }else{
        printf("Parking Approved\n");
       }
          Parking_total=Parking_total+Penalty;
          printf("%f\n",Parking_total);
          printf("%f",discount);
       
        

    }
    
    else{
        printf("Please Enter a Valid vehicel type");
    }
    
   
    

    
}