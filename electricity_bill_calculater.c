#include<stdio.h>

int main(){

  char name[30];
  int unites;
  char consumer_type;
  float tax , discount;
  int bill;
  int final_bill;
  printf("Enter your name\n");
  scanf("%s",&name);
  printf("Enter Unites\n");
  scanf("%d",&unites);
  printf("Enter your costumer types Filled(F) or Non Filled(N): (F/N)\n\n");
  scanf(" %c",&consumer_type);
  
  if(unites<100 ){
      bill=20*unites;
  } else if (unites<200 )
  {
      bill=unites*25;
  } else if (unites<300)
  {
      bill=30*unites;
  } else if (unites>300)
  {
      bill=35*unites;
  }else{
    printf("Enter valid unites");
  }
  
  if(consumer_type=='N' || consumer_type=='n')
   {
      tax =(bill*10)/100;
      final_bill=bill+tax;
   }else{
    tax=0;
    final_bill=bill;
   }
 
   if(final_bill>=10000)
   {
      discount=final_bill*5/100;
      final_bill=final_bill-discount;
   } else{
    discount=0;
    final_bill=bill-discount;
   }
  
   printf("***===========Display Result==============****\n\n");
   printf("Custer name                        : %s\n",name);
   printf("Unites Consumed this Month is      : %d\n",unites);
   printf("Your Electricity Cost is           : %d\n",bill);
   printf("Tax on Your electricity bill is    : %2f\n",tax);
   printf("You get discount of                : %d\n",discount);
   printf("Your Final Bill is                 : %d\n\n",final_bill);
   printf("***===========Display Result==============***");

return 0;
}