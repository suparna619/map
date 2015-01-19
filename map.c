#include <stdio.h>
#include <stdlib.h>

int* map_int(int *array, int length_of_array, int (*function_ptr)(int element,int index,int *array)){
	int i, *result_array, count = 0;
	result_array = (int *)malloc(sizeof(int)*length_of_array);
	for (i = 0; i < length_of_array; ++i)
	{
		result_array[count] = function_ptr(array[i],i,array);
		count++;
	}
	return result_array;
}

float* map_float(float *array, int length_of_array, int (*function_ptr)(float element,int index,float *array)){
	int i, count = 0;
	float *result_array;
	result_array = (float *)malloc(sizeof(float)*length_of_array);
	for (i = 0; i < length_of_array; ++i)
	{
		result_array[count] = function_ptr(array[i],i,array);
		count++;
	}
	return result_array;	
}

char* map_char(char *array, int length_of_array, int (*function_ptr)(char element,int index,char *array)){
	int i, count = 0;
	char *result_array;
	result_array = (char *)malloc(sizeof(char)*length_of_array);
	for (i = 0; i < length_of_array; ++i)
	{
		result_array[count] = function_ptr(array[i],i,array);
		count++;
	}
	return result_array;		
}

char* map_string(char **array, int length_of_array, int (*function_ptr)(char *element,int index,char **array)){
	int i, count = 0;
	char *result_array;
	result_array = (char *)malloc(sizeof(char)*length_of_array);
	for (i = 0; i < length_of_array; ++i)
	{
		result_array[count] = function_ptr(array[i],i,&(*array));
		count++;
	}
	return result_array;	
}