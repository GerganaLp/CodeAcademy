#include <stdio.h> 

int main(){
    unsigned int brKaravani, brKemperi;
    int priceKaravana = 90, priceKemper = 100, choice, sum;
    int days;
    printf("Dobre doshli v Karavan i Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d",&choice);
    if(choice==1){   
    printf("Molq vuvedete za kolko dni shte naemete.\n");
    scanf("%d", &days);
    printf("Vie izbrahte da naemete karavana za %d dni i struva obshto %d lv ",days,days*priceKaravana);
   }
   else if(choice==2){
    printf("Molq vuvedete za kolko dni shte naemete.\n");
    scanf("%d", &days);
    printf("Vie izbrahte da naemete kemper za %d dni i struva obshto %d lv ",days,days*priceKemper);
   }
   

    return 0;
}
