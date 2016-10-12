#ifndef LIST_H
#define LIST_H

struct ListCDT{
	struct ListCDT *sig;
	int elem;
};

typedef struct node *ListADT;

ListADT
new(void);

void
free(ListADT);

int
deleteElem(ListADT, int index);

int
insertElem(ListADT); /* Se insertan atrás */

int
getElem(ListADT, int index);

int
countElem(ListADT);

int
maxElem(ListADT);

#endif