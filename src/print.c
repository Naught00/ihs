#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "print.h"
#include "citation.h"

void print_first_book_citation(struct citation f)
{
	printf("\\footnote{%s %s, \\emph{%s} (%s, %s) p. %s.}\n", f.forename, f.surname, f.title, f.address, f.year, f.page);
	return;
}

void print_book_citation(struct citation f)
{
	printf("\\footnote{%s, \\emph{%s}, p. %s.}", f.surname, f.title, f.page);
	return;
}
