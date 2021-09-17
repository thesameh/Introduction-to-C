// Sameh Shahin ew20b001

#include <stdio.h>

// prototypes
void read_input_array(int l, int arr[l][l]);
void calculate_output_matrix(int l, int arr_output[l][l], int arr1[l][l], int arr2[l][l]);
void print_result_matrix(int l, int arr_output[l][l]); 

int main()
{
    int array_length = 0;
    int input_matrix_1[50][50];
    int input_matrix_2[50][50];

    // read input Matrices length
    scanf("%d", &array_length);

    // read input Matrices
    read_input_array(array_length, input_matrix_1);
    read_input_array(array_length, input_matrix_2);

    // define and calculate output matrix
    int output_matrix[array_length][array_length];
    calculate_output_matrix(array_length, output_matrix, input_matrix_1, input_matrix_2);

    // print output matrix
    print_result_matrix(array_length, output_matrix);
    return 0;
}

//****** Procedures ******//

// loop to read every array position value based on it's size (square so row = cols = array_length);
void read_input_array(int l, int arr[l][l])
{
    // j col, r rows, l array lenght
    for (int r = 0; r < l; r++)
    {
        for (int c = 0; c < l; c++)
        {
            // read array values (space & enter will just skip to the next loop iteration! .. perfect)
            scanf("%d", &arr[r][c]);
        }
    }
}

// calculates the sum of 2 given square arrays and puts the result in a third array
void calculate_output_matrix(int l, int arr_output[l][l], int arr1[l][l], int arr2[l][l])
{
    int sum = 0;
    for (int r = 0; r < l; r++)
    { // output rows loop
        for (int c = 0; c < l; c++)
        { //output cols loop
            //reset sum
            sum = 0;

            for (int i = 0; i < l; i++)
            { // calc sum loop
                sum += arr1[r][i] * arr2[i][c];
            }

            arr_output[r][c] = sum;
        }
    }
}

// prints a given array based on it's size in a rows/cols manner
void print_result_matrix(int l, int arr_output[l][l])
{
    for (int r = 0; r < l; r++)
    { // output rows loop
        for (int c = 0; c < l; c++)
        { //output cols loop

            printf("%3d", arr_output[r][c]);
        }
        printf("\n");
    }
}

//****** end Procedures ******//
