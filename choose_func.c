#include "main.h"

/**
 * *choose_func - returns pointer to the function
 * @c: character
 *
 * Return: pointer to function or NULL
 */

int (*choose_func(const char *s, int index)) (va_list, char*, unsigned int)
{
	form specifics[] = {
            {'c', _write_char},
            {'s', _write_str},
            {" %",_print_p},
            {NULL, NULL},
	};

	int i = 0 , j = 0 , f_index;
    f_index = index;

    while(specifics[i].type_id)
    {
        if(s[index] == specifics->type_id[j])
        {
            if(specifics[index].type_id[j + i] != '\0')
                index++, j++;
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = f_index;
        }
    }

	return specifics[i].func;
}
