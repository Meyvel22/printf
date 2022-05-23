#include "main.h"

/**
 * get_len_identifiers - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */

int get_number_identifiers(const char *s, int index)
{
    form specifies[] = {
            {"c", _write_char},
            {"s", _write_str},
            {NULL, NULL},
    };

    int i = 0, j = 0, f_index;

    f_index = index;

    while(specifies[i].type_id){
        if(s[index] == specifies[i].type_id[j])
        {
            if(specifies[i].type_id[j + 1] != '\0')
                index++, j++;
            else
                break;
        }
        j = 0;
        i++;
        index = f_index;
    }

    return j;
}