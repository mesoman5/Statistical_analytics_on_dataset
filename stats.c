/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char min_value, max_value;
  unsigned int  median_value, mean_value;
  unsigned char* new_arr;
  min_value = find_minimum (test, SIZE);
  max_value = find_maximum (test, SIZE);
  mean_value = find_mean (test, SIZE);
  new_arr = sort_array(test, SIZE);
  median_value = find_median(new_arr, SIZE);
  print_statistics (min_value , max_value, mean_value, median_value);
  print_array (new_arr , SIZE); 
}

unsigned char find_maximum (unsigned char *arr, unsigned int size) {
	unsigned char max = arr[0];
	for ( int i = 1 ; i < size ; i++ ) {
		if ( max < arr[i] ) {
			max = arr [i];
		}
		else {
			/* the value is the needed one */
		}
	}
	return max;
}
unsigned char find_minimum (unsigned char *arr, unsigned int size) {
        unsigned char min = arr[0];
        for ( int i = 1 ; i < size ; i++ ) {
                if ( min > arr[i] ) {
                        min = arr [i];
                }
                else {
                        /* the value is the needed one */
                }
        }
        return min;
}

unsigned int find_mean (unsigned char *arr, unsigned int size) {
	unsigned int mean = 0 ;	
	for ( int i = 0 ; i < size ; i++ ) {
		mean += arr [i];
	}
	mean /= size ;
        return mean;
}


unsigned int find_median (unsigned char *arr, unsigned int size) {
	unsigned int median = 0 ;
	if (size%2 == 0) {
		median = ( arr[size/2] + arr[(size/2)+1] ) / 2;
	}
	else {
		median = arr[(size+1)/2];
	}
        return median;
}

unsigned char* sort_array (unsigned char *arr, unsigned int size) {
	static unsigned char sorted_arr [SIZE];
	unsigned char temp;
	for(int k = 0 ; k < size ; k++ ) {
		sorted_arr[k] = arr[k];	
	}
	for ( int i = 0 ; i < size ; i++ ) {
		for (int j = 0 ; j<size, j!=i ; j++ ) {
			if(sorted_arr[i]>sorted_arr[j]) {
				temp = sorted_arr[i];
				sorted_arr[i]=sorted_arr[j];
				sorted_arr[j]=temp;
			}
		}
	}
	return sorted_arr;
}

void print_statistics(unsigned char min, unsigned char max, unsigned int mean, unsigned int median ) {
        printf("the minimum value of the data set is %d\n", min);
	printf("the maximum value of the data set is %d\n", max);
        printf("the mean value of the data set is %d\n", mean);
        printf("the median value of the data set is %d\n", median);
}

void print_array (unsigned char *arr, unsigned char size) {
	printf("the array is : \n");
	for ( int i = 0 ; i < size ; i++ ) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}







