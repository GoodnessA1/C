#ifndef LIST_H
#define LIST_H

struct lkdlist
{
	char  name[100];
	int id;
	struct lkdlist *nextptr;
};

typedef struct lkdlist list_t;

void create_list(int n);
void display_list(void);

#endif
