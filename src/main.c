#include<stdio.h>
#include<readline/readline.h>
#include "citation.h"
#include "print.h"

int main(void)
{
	struct citation f;
	f = generate();
	print_first_book_citation(f);
	print_book_citation(f);
	return 0;
}



