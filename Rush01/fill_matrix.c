#include "fill_matrix.h"
#include <unistd.h>

void	parse_input_array(char *data, int *column_up, int *column_down, int *row_left, int *row_right)
{
	int	temp [SIZE * 4];
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (data[i])
	{
		if (data[i] != ' ')
			temp[j++] = data[i] - 48;
		i++;
	}
	init_side_arrays(temp, column_up, column_down, row_left, row_right);
}

void	init_side_arrays(int *data, int *column_up, int *column_down, int *row_left, int *row_right)
{
	init_column_up(data, column_up);
	init_column_down(&data[8], column_down);
	init_row_left(&data[12], row_left);
	init_row_right(&data[4], row_right);
}

void	init_column_up (int *data, int *column_up)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		column_up[i] = data[i];
		i++;
	}
}
void	init_column_down(int *data, int *column_down)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
	column_down[i] = data[SIZE - (i + 1)];
	i++;
	}
}
void	init_row_left(int *data, int *row_left)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
	row_left[i] = data[SIZE - (i + 1)];
	i++;
	}
}
void	init_row_right(int *data, int *row_right)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
	row_right[i] = data[i];
	i++;
	}
}

void	fill_matrix(int **main_matrix, int *column_up)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (column_up[i] == 1)
			fill_for_one(main_matrix[i]);
		else if (column_up[i] == 2)
			fill_for_two(main_matrix[i]);
		else if (column_up[i] == 3)
			fill_for_three(main_matrix[i]);
		else if (column_up[i] == 4)
			fill_for_four(main_matrix[i]);
		i++;
	}
}

void   fill_for_one(int *data)
{   
	data[0] = 4;
	data[1] = 1;
	data[2] = 2;
	data[3] = 3;
}

void	fill_for_two(int *data)
{
	data[0] = 3;
	data[1] = 4;
	data[2] = 1;
	data[3] = 2;
}

void	fill_for_three(int *data)
{
    data[0] = 2;
    data[1] = 3;
    data[2] = 4;
    data[3] = 1;
}

void    fill_for_four(int *data)
{
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;
    data[3] = 4;
}

int check_input_data(int *column_up, int *column_down, int *row_left, int *row_right)
{
    if (check_columns_data(column_up, column_down) != 0)
    {
        write(1, "Error\n", sizeof("Error\n"));
        return (1);
    }
    else if (check_rows_data(row_left, row_right) != 0)
    {
        write(1, "Error\n", sizeof("Error\n"));
        return (1);
    }
    return (0);
}

int check_columns_data(int *column_up, int *column_down)
{
    int response;
    int i;

    response = 0;
    i = 0;
    while (i < SIZE)
    {
        response += check_opposite_number(column_up[i], column_down[i]);
        i++;
    }
    return (response);
}

int check_rows_data(int *row_left, int *row_right)
{
    int response;
    int i;

    response = 0;
    i = 0;
    while (i < SIZE)
    {
        response += check_opposite_number(row_left[i], row_right[i]);
        i++;
    }
    return (response);
}

int check_opposite_number(int arg1, int arg2)
{
    if (arg1 == 1)
    {
        if (arg2 == 2 || arg2 == 3 || arg2 == 4)
            return (0);
    }
    else if (arg1 == 2)
    {
        if (arg2 == 1 || arg2 == 2 || arg2 == 3)
            return (0);
    }
    else if (arg1 == 3)
    {
        if (arg2 == 1 || arg2 == 2)
            return (0);
    }
    else if (arg1 == 4) 
    {
        if (arg2 == 1)
            return (0);
    }
    return (1);
}
