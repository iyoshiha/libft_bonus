#include "libft_bonus.h"

int main()
{
	t_list a;
	t_list *ls;
	t_list *ls1;

	a.next = (void *)111;
	a.content= (void *)111;
/*
	printf("content: %p\na: %p\nb: %p\nnext: %p\n",&ls.content, &ls.a, &ls.b, &ls.next);
	printf("size: %ld\n", sizeof(t_list));

*/

	puts("well ls = NULL");
	ls = NULL;
	ls1 = &a;
	puts("well ls->next");
	printf("ls1: %p\n", ls1->next);
	printf("ls : %p\n", ls->next);
	puts("last");
	return 0;
}
