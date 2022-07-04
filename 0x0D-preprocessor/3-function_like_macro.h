#include <stdio.h>

/**
* main - Entry point
*
* Description: prints the name of the file it was
*              compiled from, followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
root@29cb72c3ab23:/Norbert/alx-low_level_programming/0x0D-preprocessor# ^C
root@29cb72c3ab23:/Norbert/alx-low_level_programming/0x0D-preprocessor# ^C
root@29cb72c3ab23:/Norbert/alx-low_level_programming/0x0D-preprocessor# cat 3-function_like_macro.h
#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x) (((x) >= 0) ? (x) : -(x))

#endif /* _FUNCTION_LIKE_MACRO_H */
