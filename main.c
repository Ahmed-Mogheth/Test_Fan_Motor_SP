#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int Temp = 0;

unsigned int Motor_Speed = 0;
/*
    Motor_Speed > 20 -> print Hello_1
    Motor_Speed > 40 -> print Hello_2
    Motor_Speed > 50 -> print Hello_3
    Motor_Speed > 60 -> print Hello_4
*/

int main()
{
    printf("Enter NumberOne Value : ");
    scanf("%i", &NumberOne);

    if((55 == NumberOne) && (NumberOne >= 6)){
        printf("Yes \n"); // NumberOne = 55
    }

    if(66 == NumberOne){
        printf("No  \n"); // NumberOne = 66
    }


    printf("Enter Temp Value : ");
    scanf("%i", &Temp);

    if(Temp > 25){
        printf("Fan is on \n");
    }

    if(Temp < 25){
        printf("Fan is off \n");
    }


   if(Temp > 25){
        printf("Fan is on \n");
   }
   else{
        printf("Fan is off \n");
   }

    /*
        Motor_Speed > 20 -> print Hello_1
        Motor_Speed > 40 -> print Hello_2
        Motor_Speed > 50 -> print Hello_3
        Motor_Speed > 60 -> print Hello_4

        Motor_Speed = 21

    */
    if(Motor_Speed > 20){
        printf("Hello_1 \n");
    }
    else if(Motor_Speed > 40){
        printf("Hello_2 \n");
    }
    else if(Motor_Speed > 50){
        printf("Hello_3 \n");
    }
    else if(Motor_Speed > 60){
        printf("Hello_4 \n");
    }
    else{
        printf("Invalid Speed !! \n");
    }



    return 0;
}
