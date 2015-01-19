int* map_int(int *array, int length_of_array, int (*function_ptr)(int element,int index,int *array));

float* map_float(float *array, int length_of_array, int (*function_ptr)(float element,int index,float *array));

char* map_char(char *array, int length_of_array, int (*function_ptr)(char element,int index,char *array));

char* map_string(char *array, int length_of_array, int (*function_ptr)(char *element,int index,char **array));