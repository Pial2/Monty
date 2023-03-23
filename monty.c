# include  "monty.h"
#include "monty.h"
global_var var_global;
/ * *
 * principal - función de controlador para el programa monty
 * @ac: int num de argumentos
 * @av: archivo de código de operación
 * Devolución: 0
 * /
int  main ( int ac, char ** av)
/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t * pila;
	stack_t *stack;

	pila = NULL ;
	si (ac! = 2 )
	stack = NULL;
	if (ac != 2)
	{
		fprintf (stderr, " USO: archivo monty \ n " );
		salir (EXIT_FAILURE);
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file (av [ 1 ], & pila);
    / * recordar liberar memorias * /
	free_dlistint (pila);
	return ( 0 );
}
	read_file(av[1], &stack);
    /* recordar liberar memorias */
	free_dlistint(stack);
	return (0);
}
