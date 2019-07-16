#include "list.h"

int main (void)
{
    t_list *list;

    list = 0;

    list = add_link(list, "first\n");
    list = add_link(list, "second\n");
    list = add_link(list, "third\n");

    print_list(list);

    return (0);
}