// Sameh Shahin ew20b001

#include <stdio.h>

int main()
{
    // variables
    double edge_length ;

    // 1- read the variable from input 
    scanf("%lf",  &edge_length);
   

    // 2-  Calculate
    double side_area =  edge_length  *  edge_length;
    double vol =  side_area * edge_length;
    double surface_area =  side_area * (double) 6;


    // 3- print output
    printf("Volume: %.2f\n", vol);
    printf("Surface Area: %.2f\n", surface_area);

    // return int to finish
    return 0;
}
