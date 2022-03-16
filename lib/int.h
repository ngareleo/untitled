//
// Created by user on 3/17/2022.
//

#include <stdlib.h>
#include <stdio.h>

struct int__ {
    int *struct_ptr;
    int *value_ptr;
};

struct int__* Integer(int *value_ptr){
    struct int__ *temp_ptr = (struct int__*) malloc(sizeof (struct int__));
    temp_ptr->struct_ptr = malloc(sizeof (int));
    temp_ptr->value_ptr = value_ptr;
    return temp_ptr;
}

typedef struct int__ Int;
