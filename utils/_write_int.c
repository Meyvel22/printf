#include "../main.h"
/**
 * print_int - prints an integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
 int _write_int(va_list arg_list, char *buffer, unsigned int buffer_index)
{
     int input;
     unsigned int int_temp, int_in, counter, divide, isnegative;

     input = va_arg(arg_list, int);
     isnegative = 0;

     if (input < 0)
     {
         int_in = input * - 1;
         buffer_index = manage_buffer(buffer, '-', buffer_index);
         isnegative = 1;
     }
     else
     {
         int_in = input;
     }

     int_temp  = int_in;
    divide = 1;

     while(int_temp > 9){
         divide *= 10;
         int_temp /= 10;
     }

     for (counter = 0; divide > 0; divide /= 10, counter++){
         buffer_index = manage_buffer(buffer, ((int_in / divide) % 10) + '0', buffer_index);
     }

     return (counter + isnegative);
}
