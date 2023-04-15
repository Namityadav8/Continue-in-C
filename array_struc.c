#include<stdio.h>
struct car{
    char name;
    int seats;
    float price;

};
int main(){
        int i;
        struct car mycar[100];
        for(i=0;i<100;i++){
            printf("\n Enter data of car[%d]:\n",i);
            scanf("%s %d %f",&mycar[i].price,&mycar[i].seats,&mycar[i].price);
        }
        for(i=0;i<100;i++){
            printf("\n Data about your car [%d] is: %s %d %f ",i,mycar[i].name,mycar[i].seats);

    return 0;
}