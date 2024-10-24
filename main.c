/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalons <pabalons@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:47:51 by pabalons          #+#    #+#             */
/*   Updated: 2024/10/24 13:55:30 by pabalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	//Colors
	char *RESET = "\033[0m";
	//char *RED = "\033[31m";
	char *GREEN = "\033[32m";
	char *YELLOW = "\033[33m";
	// char *BLUE = "\033[34m";
	// char *MAGENTA = "\033[35m";
	// char *CYAN = "\033[36m";
	char *WHITE = "\033[37m";

	//Tests
	int result;
	int ft_result;

	ft_printf("%s",YELLOW);
	//Case: %%
	result = printf("%%\n");
	ft_result= ft_printf("%%\n");
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %c
	result = printf("Hell%c worl%c\n", 'o', 'd');
	ft_result = ft_printf("Hell%c worl%c\n", 'o', 'd');
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %s
	result = printf("Hello %s\n", "world");
	ft_result = ft_printf("Hello %s\n", "world");
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %s NULL
	char *test = NULL;
	result = printf("Null str %s\n", test);
	ft_result = ft_printf("Null str %s\n", test);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %d & %i
	result = printf("Number: %d\n", -42);
	ft_result = ft_printf("Number: %d\n", -42);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %x
	result = printf("Hexa: %x\n", -1256);
	ft_result = ft_printf("Hexa: %x\n", -1256);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %X
	result = printf("HEXA: %X\n", -1256);
	ft_result = ft_printf("HEXA: %X\n", -1256);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %u
	unsigned int number = 4294967295;
	result = printf("Unsigned: %u\n", number);
	ft_result = ft_printf("Unsigned: %u\n", number);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: %p
	char *ptr = "Hello";
	result = printf("Pointer: %p\n", ptr);
	ft_result = ft_printf("Pointer: %p\n", ptr);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	ptr = NULL;
	result = printf("NULL ptr: %p\n", ptr);
	ft_result = ft_printf("NULL ptr: %p\n", ptr);
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	//Case: invalid flag after %
	//result = printf("Invalid flag: %z\n", "hi");
	ft_result = ft_printf("Invalid %w flag: \n", "hi");
	ft_printf("%sprintf: %d, ft_printf: %d\n%s",WHITE, result, ft_result, YELLOW);

	printf("%sCompila bien\n%s", GREEN, RESET);

    	printf("\n---Case 00 - No rules given---\n");
	int ft_int_value_00, int_value_00;

	ft_int_value_00 = ft_printf("HOLA MUNDO");
	ft_printf(" || ");
	int_value_00 = printf("HOLA MUNDO");
	ft_printf("\n");
	if (ft_int_value_00 != int_value_00)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	else 
		printf ("\nCoinciden ft_printf y printf\n");
	
	/*-------------------------------------------------------------------*/

	printf("\n---Case 01 - %%c rule---\n");
	int ft_int_value_01, int_value_01;

	ft_int_value_01 = ft_printf("%c", 'c');
	ft_printf(" || ");
	int_value_01 = printf("%c", 'c');
	printf("\n");

	if (ft_int_value_01 != int_value_01)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_01, int_value_01);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

	/*-------------------------------------------------------------------*/

	printf("\n---Case 02 - %%s rule---\n");
	int ft_int_value_02, int_value_02;
	
	ft_int_value_02 = ft_printf("%s", "Hello world");
	ft_printf(" || ");
	int_value_02 = printf("%s", "Hello world");
	printf("\n");

	if (ft_int_value_02 != int_value_02)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_02, int_value_02);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

	/*-------------------------------------------------------------------*/

	printf("\n---Case 03 - %% %% rule---\n");
	int ft_int_value_03, int_value_03;
	
	ft_int_value_03 = ft_printf("%%");
	ft_printf(" || ");
	int_value_03 = printf("%%");
	printf("\n");

	if (ft_int_value_03 != int_value_03)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_03, int_value_03);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

	/*-------------------------------------------------------------------*/

	printf("\n---Case 04 - %%d rule---\n");
	int ft_int_value_04, int_value_04;
	
	ft_int_value_04 = ft_printf("%d", -42);
	ft_printf(" || ");
	int_value_04 = printf("%d", -42);
	printf("\n");

	if (ft_int_value_04 != int_value_04)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_04, int_value_04);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

	/*-------------------------------------------------------------------*/

	printf("\n---Case 05 - %%i rule---\n");
	int ft_int_value_05, int_value_05;
	
	ft_int_value_05 = ft_printf("%i", 42);
	ft_printf(" || ");
	int_value_05 = printf("%i", 42);
	printf("\n");

	if (ft_int_value_05 != int_value_05)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_05, int_value_05);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

	/*-------------------------------------------------------------------*/

	printf("\n---Case 06 - %%u rule---\n");
	int ft_int_value_06, int_value_06;
	
	ft_int_value_06 = ft_printf("%u", 42);
	ft_printf(" || ");
	int_value_06 = printf("%u", 42);
	printf("\n");

	if (ft_int_value_06 != int_value_06)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_06, int_value_06);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);
	
	/*-------------------------------------------------------------------*/

	printf("\n---Case 07 - %%x rule---\n");
	int ft_int_value_07, int_value_07;
	
	ft_int_value_07 = ft_printf("%x", 42);
	ft_printf(" || ");
	int_value_07 = printf("%x", 42);
	printf("\n");

	if (ft_int_value_07 != int_value_07)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_07, int_value_07);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);
	
/*-------------------------------------------------------------------*/

	printf("\n---Case 08 - %%X rule---\n");
	int ft_int_value_08, int_value_08;
	
	ft_int_value_08 = ft_printf("%X", 42);
	ft_printf(" || ");
	int_value_08 = printf("%X", 42);
	printf("\n");

	if (ft_int_value_08 != int_value_08)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_08, int_value_08);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);

/*-------------------------------------------------------------------*/

printf("\n---Case 09 - %%X rule---\n");
	int ft_int_value_09, int_value_09;
	
	 int a = 10;
	int *p = &a;
	ft_int_value_09 = ft_printf("%p", p);
	ft_printf(" || ");
	int_value_09 = printf("%p", p);
	printf("\n");

	if (ft_int_value_09 != int_value_09)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_09, int_value_09);
	else 
		printf("%sCompila bien\n%s", GREEN, RESET);
    
	return (0);
}
