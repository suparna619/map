#include "../expr_assert.h"
#include "map.h"
#include <stdio.h>
#include <string.h>
#include <math.h>


int increment_by_one(int element,int index,int *array){
	return element+1;
}

int math_ceil(float element,int index,float *array){
	return ceil(element);
}

int next_character(char element,int index,char *array){
	return element+1;
}

int my_strlen(char *element ,int index, char **array){
	return strlen(element);
}

void test_increment_by_1_of_elements_of_an_int_array(){
	int (*p)(int,int,int*);
	int array[5] = {10,20,3,4,5};
	int *result_array;
	p = &increment_by_one;
	result_array = map_int(array,5,p);
	assertEqual(result_array[0] ,11);
	assertEqual(result_array[1] ,21);
	assertEqual(result_array[2] ,4);
	assertEqual(result_array[3] ,5);
	assertEqual(result_array[4] ,6);
}

void test_math_ceil_property_of_elements_of_an_float_array(){
	int (*p)(float,int,float*);
	float array[5] = {2.4,-3.4,0.0,2.7,-3.9};
	float *result_array;
	p = &math_ceil;
	result_array = map_float(array,5,p);
	assertEqual(result_array[0],3.0);
	assertEqual(result_array[1],-3.0);
	assertEqual(result_array[2],0.0);
	assertEqual(result_array[3],3.0);
	assertEqual(result_array[4],-3.0);
}

void test_find_the_next_character_of_elements_of_an_float_array(){
	int (*p)(char,int,char*);
	char array[] = "abcde";
	char *result_array;
	p = &next_character;
	result_array = map_char(array,strlen(array),p);
	assertEqual(result_array[0],'b');
	assertEqual(result_array[1],'c');
	assertEqual(result_array[2],'d');
	assertEqual(result_array[3],'e');
	assertEqual(result_array[4],'f');
}

void test_find_lenth_of_each_element_of_a_string_array(){
	int (*p)(char*,int,char**);
	char *array[] = {"suparna","abir","sujit","rakhee"};
	char *result_array;
	p = &my_strlen;
	result_array = map_string(&array, 4, p);
	assertEqual(result_array[0],7);
	assertEqual(result_array[1],4);
	assertEqual(result_array[2],5);
	assertEqual(result_array[3],6);
}