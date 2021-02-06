#ifndef DSP_H
#define DSP_H

typedef struct _complex_num
{
    float re;
    float im;

}complex_num;

float quick_inv_sqrt(float number);
float* FFT(float* time_domain,int size);
float Moving_Average(float val);
#endif
