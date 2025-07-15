#if !defined(FUNCTIONS_H)
#define FUNCTIONS_H

int	len_check(char *str);
int	values_check(char *param, int *m_len);
void	remove_spaces(char *str);
void	error_message(int error_num);
void	export_matrix(int matrix_size, char *matrix);
void	assign_spots(int matrix_size, char *matrix);
void	make_matrix(char *arr, int matrix_size);
void	write_all(int matrix_size, char *matrix, int i);
void	write_char(char *digit, int matrix_size, char *matrix, int i);
void	put_chars(char *arr, int matrix_size, char *matrix);

#endif