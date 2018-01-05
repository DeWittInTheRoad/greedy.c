+/**
  *
  * greedy.c
  *
  * Brandon DeWitt
  *
  * A program that returns change in the least amount of coins.
  *
  */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    float input = 0;
    int change = 0;
    int coin_count = 0;

//Accepts only positive floats and then converts to integers (and rounds because of imprecision)
    do{
    printf("Change owed? ");
    input = get_float() * 100;
    change = (int) roundf(input);
}

while (change < 1);

coin_count += change / 25;
change = change %25;

coin_count+= change / 10;
change = change %10;

coin_count+= change / 5;
change = change %5;

coin_count += change / 1;
change = change %1;


printf("Gave back %i coins.\n", coin_count);


}
