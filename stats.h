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
#ifndef __STATS_H__
#define __STATS_H__


/**
unsigned char find_maximum ( unsigned char *arr, unsigned int size ) ;

 * @brief find the max element of array
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return unsigned char : Max element in the array
 */

unsigned char find_maximum ( unsigned char *arr, unsigned int size ) ;

/**
unsigned char find_minimum ( unsigned char *arr, unsigned int size ) ;

* @brief find the min element of array
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return unsigned char : Min element in the array
 */
unsigned char find_minimum ( unsigned char *arr, unsigned int size ) ;

/**
void print_statistics( unsigned char min, unsigned char max, unsigned char median, unsigned char mean ) ;
 * @brief print the statistics of the array
 *
 * @param unsigned char min     min element of the array
 * @param unsigned char max     max element of the array
 * @param unsigned int  mean    mean of the array
 * @param unsigned int  median  median of the array
 *
 * @return void : no need for return value
 */
void print_statistics( unsigned char min, unsigned char max, unsigned int mean, unsigned int median ) ;

/**
unsigned char find_mean (unsigned char *arr, unsigned int size);
 * @brief find the mean of array
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return unsigned int : mean value
 */
unsigned int find_mean (unsigned char *arr, unsigned int size);

/**
unsigned char find_median (unsigned char *arr, unsigned int size);
 * @brief find the median of array
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return unsigned int : median value
 */
unsigned int find_median (unsigned char *arr, unsigned int size);

/**
unsigned char* sort_array (unsigned char *arr, unsigned int size);
 * @brief sot the elements of array descendingly
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return unsigned char * : sorted array descendingly
 */
unsigned char* sort_array (unsigned char *arr, unsigned int size);

/**
void print_array (unsigned char *arr, unsigned char size) ;
 * @brief print the elements of array
 *
 * @param unsigned char *arr  pointer to the array
 * @param unsigned int  size  size of the array
 *
 * @return void : no need for return value
 */
void print_array (unsigned char *arr, unsigned char size) ;

#endif /* __STATS_H__ */
