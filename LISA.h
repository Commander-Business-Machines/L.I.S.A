#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int SEARCH_ARRAY(unsigned int ARRAY[255], unsigned int ARRAY_LENGTH, unsigned int TARGET) {
        unsigned int INDEX = 0;
        unsigned int FLAG = 0;
        //printf("index:%d\n", INDEX);


        while (INDEX < ARRAY_LENGTH) {
                //printf("ooooo\n");
                if (ARRAY[INDEX] == TARGET) {

                        return INDEX;
                }
                INDEX++;
        }
        //printf("index:%d\n", INDEX);
        return INDEX;

}

void BINARY_SEARCH(unsigned int NUMBERS[50000], unsigned int AMOUNT_OF_NUMBERS, unsigned int TARGET) {
        /*Were is the middle of the Array?*/
        unsigned int PIVOT_INDEX = AMOUNT_OF_NUMBERS/2;
        /*What is the index of the target?*/
        unsigned int TARGET_INDEX = SEARCH_ARRAY(NUMBERS, AMOUNT_OF_NUMBERS, TARGET);

        /*Iterate until there is only 2 numbers left in the array*/
        while (AMOUNT_OF_NUMBERS >= 2) {
                /*What side of the Array is the target on? (Side 1 or 0)*/
                if (TARGET_INDEX > PIVOT_INDEX) {
                        /*Set Array values to the side that the target is on*/
                        unsigned int *NEW_ARRAY = malloc(PIVOT_INDEX * sizeof(int));
                        memcpy(NEW_ARRAY, NUMBERS + PIVOT_INDEX, PIVOT_INDEX * sizeof(int));
                        NUMBERS = NEW_ARRAY;

                        printf("1");
                } else if (TARGET_INDEX < PIVOT_INDEX) {
                        printf("0");
                } else {
                        if (TARGET_INDEX == PIVOT_INDEX) {
                                /*Set Array values to the side that the target is on*/
                                unsigned int *NEW_ARRAY = malloc(PIVOT_INDEX * sizeof(int));
                                memcpy(NEW_ARRAY, NUMBERS + PIVOT_INDEX, PIVOT_INDEX * sizeof(int));
                                NUMBERS = NEW_ARRAY;

                                printf("1");
                        }
                }








                /*There are now half as many numbers in the array*/
                AMOUNT_OF_NUMBERS = AMOUNT_OF_NUMBERS/2;

                TARGET_INDEX = SEARCH_ARRAY(NUMBERS, AMOUNT_OF_NUMBERS, TARGET);

                PIVOT_INDEX = AMOUNT_OF_NUMBERS/2;

                int i = 0;
        }
}
