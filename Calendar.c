#include<stdio.h>
int main(){
    int i,j;
    char *months[] ={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysInMonth[] ={31,28,31,30,31,30,31,31,30,31,30,31},days;

    int year,weekday=0;;
    printf("Enter the Year ");
    scanf("%d",&year);
    if(((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)){
            daysInMonth[1]=29;
        }

    for(i=0;i<12;i++){


        printf("\n---------------- %s ----------------\n",months[i]);
        printf("\n\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n\n");
        for(int spaceCounter=1;spaceCounter<=weekday;spaceCounter++){
          printf("     ");
        }
        days=daysInMonth[i];

        for(j=1;j<=days;j++){
            printf("%5d",j);
             weekday++;
            if(weekday>6){

                weekday=0;

                printf("\n\n\n");
            }
        }

    }
}
