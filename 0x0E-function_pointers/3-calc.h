#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function called
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

#endif
