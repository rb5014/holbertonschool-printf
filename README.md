<						_PRINTF

NAME
	_printf

SYNOSPSIS
	#include "main.h"

	int _printf(const char *format, ...);

DESCRIPTION
	The  program  _printf produces and  writes  output  to  stdout (the sta-
	ndard  output stream) (See write(1, &buffer, count),  according  to
	a  format.
	It writes the output under the control of a format string that specifies
	how subsequent arguments (or arguments accessed via the variable-lenght
	argument facilities of stdarg(3)) are converted for output.

	<stdarg.h> declares a type va_list and defines three macros for stepping
	through a list of arguments whose number and types are not known to the
	called function. Called function must declare an object of type va_list
	which is used by the macros va_start(), va_arg(), and va_end().
	See man stdarg(3) for more details about these macros.

  Format of the format string
       The format string is a character string, beginning and ending in
       its initial shift state(A shift state refers to a state which informs
       the interpretation of some byte sequence as characters, this is encoding
       dependent.), if any.
       The format string is composed  of zero or more directives: ordinary
       characters (not %), which are copied unchanged to the output stream; and
       conversion specifications, each of which results in fetching zero or more
       subsequent arguments. Each conversion specification is introduced by the
       character %, and ends with a conversion specifier.  In between there may
       be (in this order) zero or more flags, an optional minimum field width,
       an optional precision and an optional length modifier.

       The overall syntax of a conversion specification is:
       	   %conversion_specifier

       The arguments must correspond properly (after type promotion)  with the
       conversion specifier. By default,the  arguments  are used  in  the  order
       given, where  each  conversion  specifier  asks  for  the  next argument.


Conversion specifiers
       A character that specifies the type of conversion to be applied.
       The conversion specifiers and their meanings are:

       d, i   The int argument is converted to signed decimal notation.

       o, u, x, X
              The unsigned int argument is converted to unsigned octal
              (o), unsigned decimal (u), or unsigned hexadecimal (x and
              X) notation.  The letters abcdef are used for x
              conversions; the letters ABCDEF are used for X
              conversions.

       b      The unsigned int argument is converted to binary.

       c      The int argument is converted to an unsigned char, and
	      the resulting character is  written.

       s      The const char * argument is  expected to be a pointer to
	      an array of character type (pointer to a string).  Characters
	      from the array are  written up to (but not including) a
	      terminating null byte  ('\0').

       S      Same as s, but  non  printable  characters  (0 < ASCII value < 32
	      or >= 127) are printed this way: \x, followed by the ASCII code
	      value in hexadecimal (upper case - always 2 characters).

       p      The void * pointer argument is printed in hexadecimal.

RETURN VALUE
       Upon successful return, these functions return the number of
       characters printed (excluding the null byte used to end output to
       strings).
       If an output error is encountered, a negative value is returned.

EDITION
	All files are edited using emacs or vim, they all end with a new
	line.
	All the filles are written using the Betty style.
	The maximum of functions per file is 5.

COMPILATION
	All the files are compiled on Ubuntu 20.04 LTS using gg, using the
	options -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
	The prototypes of all the functions are included in the header file
	called main.h


AUTHORS
	Romain BAYLE and Chris Monfort MURYANGO