#ifndef NOF 
#define  NOF 8
#endif

extern void * insertLL(void *);
extern void * createLL(void *);
extern void * findLengthLL(void *);
extern void * insertValueLL(void *);
extern void * deleteLL(void *);
extern void * displayLL(void *);
extern void * reverseLL(void *);
extern void * mainMenu(void *);

extern void * (*fptr[NOF])(void *);
extern int init(void);

typedef struct NODE
{
        int data;
        struct NODE *next;
}Node;
