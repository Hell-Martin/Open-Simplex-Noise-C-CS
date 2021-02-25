#include <stdio.h>
#include <stdlib.h>
#include "open-simplex-noise.h"

int main()
{
    struct osn_context *ctx;
    
    open_simplex_noise(0,&ctx); //seed set at 0

    for (size_t i = 0; i < 100; i++)
    {
        
        double terrain_height = open_simplex_noise2(ctx,i,0);    
        
        printf("value for x = %ld : %f\n",i,terrain_height);
    }

    open_simplex_noise_free(ctx);
    
}