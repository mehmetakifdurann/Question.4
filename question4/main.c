// This program checks is users 3 decimal input is an Armstrong number by functions.

// Created by Mehmet Akif Duran 3 Jan 2024.





/*
 Example output:
 This program checks that is your number an Armstrong and Perfect number.
 Please enter the number that you want to check : 371
 371 is an Armstrong number.
 371 is not a Perfect number.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkArmstrong(int number);
int checkPerfect(int number);

int main(){ // Beginnig of the main function.
    
    // Variable Decleration(s).
    int number;
    
    // Executable Statement(s).
    printf("This program checks that is your number an Armstrong  number. \n");
        printf("Please enter the 3 decimal number that you want to check : \n");
            scanf("%d", &number);
    
    
        checkArmstrong(number);
        
    
    
    return 0;
} // End of the main funciton.

int checkArmstrong(int number){
    
    // Variable Decleration(s) for the function.
    int firstDecimal, secondDecimal, thirdDecimal;
    int newNumber;
    
    //Executable Statement(s).
    
    firstDecimal = number % 10;
    secondDecimal = (number/10) % 10;
    thirdDecimal = (number/100) % 10;

    
    newNumber = pow(firstDecimal,3) + pow(secondDecimal, 3) + pow(thirdDecimal, 3) ;
        
    if(newNumber == number)
        printf("%d is an Armstrong number. \n", number);
    else
        printf("%d is NOT an Armstrong number. \n",number);
    
    return number;
}





