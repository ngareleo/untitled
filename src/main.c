#include <stdio.h>
#include "../lib/int.h"


int main()
{
    int u = 21;
    Int *temp = Integer((int*)&u);
    printf("%d", *(temp->struct_ptr));
    return 0;
}
