#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "fill_matrix.h"

#define SIZE 4

int* main_matrix[SIZE];
int column_up[SIZE];
int column_down[SIZE];
int row_left[SIZE];
int row_right[SIZE];

void init_array(void)
{
    int i = 0;
    while (i < SIZE) {
        main_matrix[i++] = (int*)malloc(SIZE * sizeof(int));
    };
}

void destroy_array(void)
{
    int i = 0;
    while (i < SIZE) {
        free(main_matrix[i++]);
    };
}

int main(int argc, char* argv[])
{
    (void) argc;
    init_array();
    parse_input_array(argv[1], column_up, column_down, row_left, row_right);
    if (check_input_data(column_up, column_down, row_left, row_right) != 0) {
        return 1;
    } 
    fill_matrix(main_matrix, column_up);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", main_matrix[j][i]);
        }
        printf("\n");
    }
    destroy_array();
    return 0;
}
