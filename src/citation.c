#include<stdio.h>
#include <stdlib.h>
#include<readline/readline.h>
#include<string.h>
#include "citation.h"

struct citation fgenerate(void)
{
	char forename[20], surname[20], title[20], address[20], year[6], page[10]; 

	printf("Enter author's forename: ");
	fgets(forename, 20, stdin);
	forename[strcspn(forename, "\n")] = 0;

	printf("Enter author's surname: ");
	fgets(surname, 20, stdin);
	surname[strcspn(surname, "\n")] = 0;

	printf("Enter title: ");
	fgets(title, 20, stdin);
	title[strcspn(title, "\n")] = 0;

	printf("Enter address: ");
	fgets(address, 20, stdin);
	address[strcspn(address, "\n")] = 0;

	printf("Enter year: ");
	fgets(year, 6, stdin);
	year[strcspn(year, "\n")] = 0;
	int y;
	y = atoi(year);

	printf("Enter page(s): ");
	fgets(page, 10, stdin);
	page[strcspn(page, "\n")] = 0;

	struct citation f = {forename, surname, title, address, year, page};
	return f;
}

struct citation generate(void) 
{
	char *forename = readline("Enter forename: ");
	char *surname = readline("Enter surname: ");
	char *title = readline("Enter title: ");
	char *address = readline("Enter address: ");
	char *year = readline("Enter year: ");
	char *page = readline("Enter page(s): ");

	struct citation f = {forename, surname, title, address, year, page};
	return f;
}
