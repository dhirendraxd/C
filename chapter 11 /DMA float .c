#include<stdio.h>

int main(){
     float *float_ptr;
    printf("Size of a float: %d bytes\n", sizeof(float));
    float_ptr = (float *)malloc(6 * sizeof(float));

    float_ptr[0] = 3.14;
    float_ptr[1] = 2.718;
    float_ptr[2] = 1.618;
    float_ptr[3] = 0.577;
    float_ptr[4] = 1.732;
    float_ptr[5] = 0.707;

    printf("Values stored in the float array:\n");
    for (int i = 0; i < 6; i++) {
        printf("%f\n", float_ptr[i]);
    }

    free(float_ptr);

// calloc

  float *float_ptr;
    float_ptr = (float *)calloc(6, sizeof(float));

    float_ptr[0] = 3.14;
    float_ptr[1] = 2.718;
    float_ptr[2] = 1.618;
    float_ptr[3] = 0.577;
    float_ptr[4] = 1.732;
    float_ptr[5] = 0.707;

    printf("Values stored in the float array:\n");
    for (int i = 0; i < 6; i++) {
        printf("%f\n", float_ptr[i]);
    }

    free(float_ptr);
return 0;
}