#ifndef FILL_MATRIX
#define FILL_MATRIX

#define SIZE 4  


void	parse_input_array(char *data, int *column_up, int *column_down, int *row_left, int *row_right);
void	init_side_arrays(int *data, int *column_up, int *column_down, int *row_left, int *row_right);
void	init_column_up(int *data, int *column_up);
void	init_column_down(int *data, int *column_down);
void	init_row_left(int *data, int *row_left);
void	init_row_right(int *data, int *row_right);
void	fill_matrix(int	**main_matrix, int	*column_up);
void	fill_for_one(int	*data);
void	fill_for_two(int	*data);
void	fill_for_three(int	*data);
void	fill_for_four(int	*data);
int	check_input_data(int	*column_up, int	*column_down, int	*row_left, int	*row_right);
int	check_columns_data(int	*column_up, int	*column_down);
int	check_rows_data(int	*row_left, int	*row_right);
int	check_opposite_number(int arg1, int arg2);

#endif
