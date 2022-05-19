//
// Created by Muhyideen Elias on 19/05/2022.
//
#include "../main.h"

int _write_char(char c)
{
    return (write(1, &c, 1));
}