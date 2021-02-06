#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#include "DSP.h"
float quick_inv_sqrt(float number)
{
    /* We keep the comments for the history */

    long i;
    float x2, y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = *(long *)&y;           // evil floating point bit level hacking
    i = 0x5f3759df - (i >> 1); // what the fuck?
    y = *(float *)&i;
    y = y * (threehalfs - (x2 * y * y)); // 1st iteration
                                         //	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

    return y;
}
float* FFT(float* time_domain,int size){

 
    float* transformed = malloc(size*sizeof(float));
     
    
    return transformed;
}
float Moving_Average(float val)
{
    static float sum = 0;
    static float samples = 0;

    samples += 1;
    sum += val;
    
    float x_n = sum/samples;
    return x_n;
}
