#include "headers.h"
#include "declarations.h"

void * insertLL(void *);
void * deleteLL(void *);
void * findLengthLL(void *);
void * reverseLL(void *);
void * mainMenu(void *);
void * insertValueLL(void *);
void * createLL(void *);
void * displayLL(void *);

void * (*fptr[NOF])(void *);

int init(void);

int init(void)
{
        fptr[0] = mainMenu;
        fptr[1] = createLL;
        fptr[2] = deleteLL;
        fptr[3] = findLengthLL;
        fptr[4] = insertLL;
        fptr[5] = insertValueLL;
        fptr[6] = reverseLL;
        fptr[7] = displayLL;
	
	return 0;
}
