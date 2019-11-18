#ifndef PAGETABLE_H_INCLUDED
#define PAGETABLE_H_INCLUDED

typedef struct{
	int frame;
	int valid;
}TipoTable;

int searchTable(TipoTable* table,int page);




#endif