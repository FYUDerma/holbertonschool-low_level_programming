#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Prototype */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

/* Function Librairies */
int _putchar(char c);

#endif
