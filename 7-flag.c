#include "main.h"

/**
* get_flag - turns on flags if _printf finds
* a flag modifier in the format string
* @f: pointer to the struct flags in which we turn on flags
* @s: character that holds the flag specifier
*
* Return: 1 if a flag has been turned on, 0 otherwise
*/
int get_flag(char s, flags_t *f)
{
        int i = 0;
        
        switch (s)
        {
                case '+';
                        f->plus = 1;
                        i = 1;
                        break;
        case ' ';
                f->space = 1;
                i = 1;
                break;
       case '#';
               f->hash = 1;
               i = 1;
               break;
       }
       
       return (i);
}
               
