#ifndef CITATION_H
#define CITATION_H

struct citation {
	char *forename;
	char *surname;
	char *title;
	char *address;
	char *year;
	char *page;
	char *journal;
	char *publisher;
};

struct citation generate(void);

#endif
