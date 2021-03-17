# 1 "C:\\Users\\bakalski\\AppData\\Local\\Temp\\buildf372ce70a2333d7def23a95e9bef4828.tmp\\sketch\\Irdroid-HTPC.ino.cpp"
# 1 "C:\\Program Files (x86)\\Arduino//"
# 1 "<command-line>"
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Temp\\buildf372ce70a2333d7def23a95e9bef4828.tmp\\sketch\\Irdroid-HTPC.ino.cpp"
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Arduino.h" 1



# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 1



# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 47 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 48 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 2 3






extern "C" {


/** \file */

/** \defgroup avr_stdlib <stdlib.h>: General utilities
    \code #include <stdlib.h> \endcode

    This file declares some basic C macros and functions as
    defined by the ISO standard, plus some AVR-specific extensions.
*/

/*@{*/
/** Result type for function div(). */
typedef struct {
 int quot; /**< The Quotient. */
 int rem; /**< The Remainder. */
} div_t;

/** Result type for function ldiv(). */
typedef struct {
 long quot; /**< The Quotient. */
 long rem; /**< The Remainder. */
} ldiv_t;

/** Comparision function type for qsort(), just for convenience. */
typedef int (*__compar_fn_t)(const void *, const void *);
# 110 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 3
/** The abort() function causes abnormal program termination to occur.
    This realization disables interrupts and jumps to _exit() function
    with argument equal to 1. In the limited AVR environment, execution is
    effectively halted by entering an infinite loop. */
extern void abort(void) __attribute__((__noreturn__));

/** The abs() function computes the absolute value of the integer \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern int abs(int __i) __attribute__((__const__));




/** The labs() function computes the absolute value of the long integer
    \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern long labs(long __i) __attribute__((__const__));




/**
     The bsearch() function searches an array of \c nmemb objects, the
     initial member of which is pointed to by \c base, for a member
     that matches the object pointed to by \c key.  The size of each
     member of the array is specified by \c size.

     The contents of the array should be in ascending sorted order
     according to the comparison function referenced by \c compar.
     The \c compar routine is expected to have two arguments which
     point to the key object and to an array member, in that order,
     and should return an integer less than, equal to, or greater than
     zero if the key object is found, respectively, to be less than,
     to match, or be greater than the array member.

     The bsearch() function returns a pointer to a matching member of
     the array, or a null pointer if no match is found.  If two
     members compare as equal, which member is matched is unspecified.
*/
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
       size_t __size, int (*__compar)(const void *, const void *));

/* __divmodhi4 and __divmodsi4 from libgcc.a */
/**
     The div() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c div_t that
     contains two int members named \c quot and \c rem.
*/
extern div_t div(int __num, int __denom) __asm__("__divmodhi4") __attribute__((__const__));
/**
     The ldiv() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c ldiv_t that
     contains two long integer members named \c quot and \c rem.
*/
extern ldiv_t ldiv(long __num, long __denom) __asm__("__divmodsi4") __attribute__((__const__));

/**
     The qsort() function is a modified partition-exchange sort, or
     quicksort.

     The qsort() function sorts an array of \c nmemb objects, the
     initial member of which is pointed to by \c base.  The size of
     each object is specified by \c size.  The contents of the array
     base are sorted in ascending order according to a comparison
     function pointed to by \c compar, which requires two arguments
     pointing to the objects being compared.

     The comparison function must return an integer less than, equal
     to, or greater than zero if the first argument is considered to
     be respectively less than, equal to, or greater than the second.
*/
extern void qsort(void *__base, size_t __nmemb, size_t __size,
    __compar_fn_t __compar);

/**
    The strtol() function converts the string in \c nptr to a long
    value.  The conversion is done according to the given base, which
    must be between 2 and 36 inclusive, or be the special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to a long value in the
    obvious manner, stopping at the first character which is not a
    valid digit in the given base.  (In bases above 10, the letter \c 'A'
    in either upper or lower case represents 10, \c 'B' represents 11,
    and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtol() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtol() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtol() function returns the result of the conversion, unless
    the value would underflow or overflow.  If no conversion could be
    performed, 0 is returned.  If an overflow or underflow occurs, \c
    errno is set to \ref avr_errno "ERANGE" and the function return value
    is clamped to \c LONG_MIN or \c LONG_MAX, respectively.
*/
extern long strtol(const char *__nptr, char **__endptr, int __base);

/**
    The strtoul() function converts the string in \c nptr to an
    unsigned long value.  The conversion is done according to the
    given base, which must be between 2 and 36 inclusive, or be the
    special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to an unsigned long value
    in the obvious manner, stopping at the first character which is
    not a valid digit in the given base.  (In bases above 10, the
    letter \c 'A' in either upper or lower case represents 10, \c 'B'
    represents 11, and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtoul() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtoul() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtoul() function return either the result of the conversion
    or, if there was a leading minus sign, the negation of the result
    of the conversion, unless the original (non-negated) value would
    overflow; in the latter case, strtoul() returns ULONG_MAX, and \c
    errno is set to \ref avr_errno "ERANGE".  If no conversion could 
    be performed, 0 is returned.
*/
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);

/**
    The atol() function converts the initial portion of the string
    pointed to by \p s to long integer representation. In contrast to

        \code strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern long atol(const char *__s) __attribute__((__pure__));

/**
    The atoi() function converts the initial portion of the string
    pointed to by \p s to integer representation. In contrast to

        \code (int)strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern int atoi(const char *__s) __attribute__((__pure__));

/**
   The exit() function terminates the application.  Since there is no
   environment to return to, \c status is ignored, and code execution
   will eventually reach an infinite loop, thereby effectively halting
   all code processing.  Before entering the infinite loop, interrupts
   are globally disabled.

   In a C++ context, global destructors will be called before halting
   execution.
*/
extern void exit(int __status) __attribute__((__noreturn__));

/**
   The malloc() function allocates \c size bytes of memory.
   If malloc() fails, a NULL pointer is returned.

   Note that malloc() does \e not initialize the returned memory to
   zero bytes.

   See the chapter about \ref malloc "malloc() usage" for implementation
   details.
*/
extern void *malloc(size_t __size) __attribute__((__malloc__));

/**
   The free() function causes the allocated memory referenced by \c
   ptr to be made available for future allocations.  If \c ptr is
   NULL, no action occurs.
*/
extern void free(void *__ptr);

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern size_t __malloc_margin;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_start;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_end;

/**
   Allocate \c nele elements of \c size each.  Identical to calling
   \c malloc() using <tt>nele * size</tt> as argument, except the
   allocated memory will be cleared to zero.
*/
extern void *calloc(size_t __nele, size_t __size) __attribute__((__malloc__));

/**
   The realloc() function tries to change the size of the region
   allocated at \c ptr to the new \c size value.  It returns a
   pointer to the new region.  The returned pointer might be the
   same as the old pointer, or a pointer to a completely different
   region.

   The contents of the returned region up to either the old or the new
   size value (whatever is less) will be identical to the contents of
   the old region, even in case a new region had to be allocated.

   It is acceptable to pass \c ptr as NULL, in which case realloc()
   will behave identical to malloc().

   If the new memory cannot be allocated, realloc() returns NULL, and
   the region at \c ptr will not be changed.
*/
extern void *realloc(void *__ptr, size_t __size) __attribute__((__malloc__));

extern double strtod(const char *__nptr, char **__endptr);

extern double atof(const char *__nptr);

/** Highest number that can be generated by rand(). */


/**
     The rand() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RAND_MAX (as defined by the header file <stdlib.h>).

     The srand() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srand() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.

     In compliance with the C standard, these functions operate on
     \c int arguments.  Since the underlying algorithm already uses
     32-bit calculations, this causes a loss of precision.  See
     \c random() for an alternate set of functions that retains full
     32-bit precision.
*/
extern int rand(void);
/**
   Pseudo-random number generator seeding; see rand().
*/
extern void srand(unsigned int __seed);

/**
   Variant of rand() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern int rand_r(unsigned long *__ctx);
/*@}*/

/*@{*/
/** \name Non-standard (i.e. non-ISO C) functions.
 \ingroup avr_stdlib
*/
/**
   \brief Convert an integer to a string.

   The function itoa() converts the integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.
    
    If radix is 10 and val is negative, a minus sign will be prepended.

   The itoa() function returns the pointer passed as \c s.
*/



extern __inline__
char *itoa (int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__itoa (int, char *, int);
 return __itoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__itoa_ncheck (int, char *, unsigned char);
 return __itoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
 
   \brief Convert a long integer to a string.

   The function ltoa() converts the long integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (long int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   If radix is 10 and val is negative, a minus sign will be prepended.

   The ltoa() function returns the pointer passed as \c s.
*/



extern __inline__
char *ltoa (long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ltoa (long, char *, int);
 return __ltoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ltoa_ncheck (long, char *, unsigned char);
 return __ltoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib

   \brief Convert an unsigned integer to a string.

   The function utoa() converts the unsigned integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The utoa() function returns the pointer passed as \c s.
*/



extern __inline__
char *utoa (unsigned int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__utoa (unsigned int, char *, int);
 return __utoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__utoa_ncheck (unsigned int, char *, unsigned char);
 return __utoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
   \brief Convert an unsigned long integer to a string.

   The function ultoa() converts the unsigned long integer value from
   \c val into an ASCII representation that will be stored under \c s.
   The caller is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned long int) + 1 characters,
   i.e. one character for each bit plus one for the string terminator. Using a
   larger radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The ultoa() function returns the pointer passed as \c s.
*/



extern __inline__
char *ultoa (unsigned long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ultoa (unsigned long, char *, int);
 return __ultoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ultoa_ncheck (unsigned long, char *, unsigned char);
 return __ultoa_ncheck (__val, __s, __radix);
    }
}


/**  \ingroup avr_stdlib
Highest number that can be generated by random(). */


/**
 \ingroup avr_stdlib
     The random() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RANDOM_MAX (as defined by the header file <stdlib.h>).

     The srandom() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srandom() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.
*/
extern long random(void);
/**
 \ingroup avr_stdlib
   Pseudo-random number generator seeding; see random().
*/
extern void srandom(unsigned long __seed);

/**
 \ingroup avr_stdlib
   Variant of random() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern long random_r(unsigned long *__ctx);

/*@}*/

/*@{*/
/** \name Conversion functions for double arguments.
 \ingroup avr_stdlib
 Note that these functions are not located in the default library,
 <tt>libc.a</tt>, but in the mathematical library, <tt>libm.a</tt>.
 So when linking the application, the \c -lm option needs to be
 specified.
*/
/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */




/**
   \ingroup avr_stdlib
   The dtostre() function converts the double value passed in \c val into
   an ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddde±dd" where there is
   one digit before the decimal-point character and the number of
   digits after it is equal to the precision \c prec; if the precision
   is zero, no decimal-point character appears.  If \c flags has the
   DTOSTRE_UPPERCASE bit set, the letter \c 'E' (rather than \c 'e' ) will be
   used to introduce the exponent.  The exponent always contains two
   digits; if the value is zero, the exponent is \c "00".

   If \c flags has the DTOSTRE_ALWAYS_SIGN bit set, a space character
   will be placed into the leading position for positive numbers.

   If \c flags has the DTOSTRE_PLUS_SIGN bit set, a plus sign will be
   used instead of a space character in this case.

   The dtostre() function returns the pointer to the converted string \c s.
*/
extern char *dtostre(double __val, char *__s, unsigned char __prec,
       unsigned char __flags);

/**
   \ingroup avr_stdlib
   The dtostrf() function converts the double value passed in \c val into
   an ASCII representationthat will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddd".  The minimum field
   width of the output string (including the \c '.' and the possible
   sign for negative values) is given in \c width, and \c prec determines
   the number of digits after the decimal sign. \c width is signed value,
   negative for left adjustment.

   The dtostrf() function returns the pointer to the converted string \c s.
*/
extern char *dtostrf(double __val, signed char __width,
                     unsigned char __prec, char *__s);

/**
   \ingroup avr_stdlib
    Successful termination for exit(); evaluates to 0.
*/


/**
   \ingroup avr_stdlib
    Unsuccessful termination for exit(); evaluates to a non-zero value.
*/


/*@}*/






}
# 5 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */






# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 2 3
# 56 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 3
extern "C" {


/** \file */
/** \defgroup avr_string <string.h>: Strings
    \code #include <string.h> \endcode

    The string functions perform string operations on NULL terminated
    strings. 

    \note If the strings you are working on resident in program space (flash),
    you will need to use the string functions described in \ref avr_pgmspace. */


/** \ingroup avr_string

    This macro finds the first (least significant) bit set in the
    input value.

    This macro is very similar to the function ffs() except that
    it evaluates its argument at compile-time, so it should only
    be applied to compile-time constant expressions where it will
    reduce to a constant itself.
    Application of this macro to expressions that are not constant
    at compile-time is not recommended, and might result in a huge
    amount of code generated.

    \returns The _FFS() macro returns the position of the first
    (least significant) bit set in the word val, or 0 if no bits are set.
    The least significant bit is position 1.  Only 16 bits of argument
    are evaluted.
*/
# 111 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 3
extern int ffs (int __val) __attribute__((__const__));
extern int ffsl (long __val) __attribute__((__const__));
extern int ffsll (long long __val) __attribute__((__const__));
extern void *memccpy(void *, const void *, int, size_t);
extern void *memchr(const void *, int, size_t) __attribute__((__pure__));
extern int memcmp(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memcpy(void *, const void *, size_t);
extern void *memmem(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern void *memmove(void *, const void *, size_t);
extern void *memrchr(const void *, int, size_t) __attribute__((__pure__));
extern void *memset(void *, int, size_t);
extern char *strcat(char *, const char *);
extern char *strchr(const char *, int) __attribute__((__pure__));
extern char *strchrnul(const char *, int) __attribute__((__pure__));
extern int strcmp(const char *, const char *) __attribute__((__pure__));
extern char *strcpy(char *, const char *);
extern int strcasecmp(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn(const char *__s, const char *__reject) __attribute__((__pure__));
extern char *strdup(const char *s1);
extern size_t strlcat(char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);
extern size_t strlen(const char *) __attribute__((__pure__));
extern char *strlwr(char *);
extern char *strncat(char *, const char *, size_t);
extern int strncmp(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncpy(char *, const char *, size_t);
extern int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));
extern size_t strnlen(const char *, size_t) __attribute__((__pure__));
extern char *strpbrk(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strrchr(const char *, int) __attribute__((__pure__));
extern char *strrev(char *);
extern char *strsep(char **, const char *);
extern size_t strspn(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strstr(const char *, const char *) __attribute__((__pure__));
extern char *strtok(char *, const char *);
extern char *strtok_r(char *, const char *, char **);
extern char *strupr(char *);


}
# 6 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */




/** \file */
/** \defgroup avr_math <math.h>: Mathematics
    \code #include <math.h> \endcode

    This header file declares basic mathematics constants and
    functions.

    \par Notes:
    - In order to access the functions declared herein, it is usually
      also required to additionally link against the library \c libm.a.
      See also the related \ref faq_libm "FAQ entry".
    - Math functions do not raise exceptions and do not change the
      \c errno variable. Therefore the majority of them are declared
      with const attribute, for better optimization by GCC.	*/


/** \ingroup avr_math	*/
/*@{*/

/** The constant \a e.	*/


/** The logarithm of the \a e to base 2. */


/** The logarithm of the \a e to base 10. */


/** The natural logarithm of the 2.	*/


/** The natural logarithm of the 10.	*/


/** The constant \a pi.	*/


/** The constant \a pi/2.	*/


/** The constant \a pi/4.	*/


/** The constant \a 1/pi.	*/


/** The constant \a 2/pi.	*/


/** The constant \a 2/sqrt(pi).	*/


/** The square root of 2.	*/


/** The constant \a 1/sqrt(2).	*/


/** NAN constant.	*/


/** INFINITY constant.	*/
# 121 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 3
extern "C" {


/**
    The cos() function returns the cosine of \a __x, measured in radians.
 */
extern double cos(double __x) __attribute__((__const__));


/**
    The sin() function returns the sine of \a __x, measured in radians.
 */
extern double sin(double __x) __attribute__((__const__));


/**
    The tan() function returns the tangent of \a __x, measured in radians.
 */
extern double tan(double __x) __attribute__((__const__));


/**
    The fabs() function computes the absolute value of a floating-point
    number \a __x.
 */
extern double fabs(double __x) __attribute__((__const__));


/**
    The function fmod() returns the floating-point remainder of <em>__x /
    __y</em>.
 */
extern double fmod(double __x, double __y) __attribute__((__const__));


/**
    The modf() function breaks the argument \a __x into integral and
    fractional parts, each of which has the same sign as the argument. 
    It stores the integral part as a double in the object pointed to by
    \a __iptr.

    The modf() function returns the signed fractional part of \a __x.

    \note This implementation skips writing by zero pointer.  However,
    the GCC 4.3 can replace this function with inline code that does not
    permit to use NULL address for the avoiding of storing.
 */
extern double modf(double __x, double *__iptr);

/** The alias for modf().
 */
extern float modff (float __x, float *__iptr);

/**
    The sqrt() function returns the non-negative square root of \a __x.
 */
extern double sqrt(double __x) __attribute__((__const__));


/**
    The cbrt() function returns the cube root of \a __x.
 */
extern double cbrt(double __x) __attribute__((__const__));


/**
    The hypot() function returns <em>sqrt(__x*__x + __y*__y)</em>. This
    is the length of the hypotenuse of a right triangle with sides of
    length \a __x and \a __y, or the  distance of the point (\a __x, \a
    __y) from the origin. Using this function  instead of the direct
    formula is wise, since the error is much smaller. No underflow with
    small \a __x and \a __y. No overflow if result is in range.
 */
extern double hypot (double __x, double __y) __attribute__((__const__));


/**
    The function square() returns <em>__x * __x</em>.

    \note This function does not belong to the C standard definition.
 */
extern double square(double __x) __attribute__((__const__));


/**
    The floor() function returns the largest integral value less than or
    equal to \a __x, expressed as a floating-point number.
 */
extern double floor(double __x) __attribute__((__const__));


/**
    The ceil() function returns the smallest integral value greater than
    or equal to \a __x, expressed as a floating-point number.
 */
extern double ceil(double __x) __attribute__((__const__));


/**
    The frexp() function breaks a floating-point number into a normalized
    fraction and an integral power of 2.  It stores the integer in the \c
    int object pointed to by \a __pexp.

    If \a __x is a normal float point number, the frexp() function
    returns the value \c v, such that \c v has a magnitude in the
    interval [1/2, 1) or zero, and \a __x equals \c v times 2 raised to
    the power \a __pexp. If \a __x is zero, both parts of the result are
    zero. If \a __x is not a finite number, the frexp() returns \a __x as
    is and stores 0 by \a __pexp.

    \note  This implementation permits a zero pointer as a directive to
    skip a storing the exponent.
 */
extern double frexp(double __x, int *__pexp);


/**
    The ldexp() function multiplies a floating-point number by an integral
    power of 2. It returns the value of \a __x times 2 raised to the power
    \a __exp.
 */
extern double ldexp(double __x, int __exp) __attribute__((__const__));


/**
    The exp() function returns the exponential value of \a __x.
 */
extern double exp(double __x) __attribute__((__const__));


/**
    The cosh() function returns the hyperbolic cosine of \a __x.
 */
extern double cosh(double __x) __attribute__((__const__));


/**
    The sinh() function returns the hyperbolic sine of \a __x.
 */
extern double sinh(double __x) __attribute__((__const__));


/**
    The tanh() function returns the hyperbolic tangent of \a __x.
 */
extern double tanh(double __x) __attribute__((__const__));


/**
    The acos() function computes the principal value of the arc cosine of
    \a __x.  The returned value is in the range [0, pi] radians. A domain
    error occurs for arguments not in the range [-1, +1].
 */
extern double acos(double __x) __attribute__((__const__));


/**
    The asin() function computes the principal value of the arc sine of
    \a __x.  The returned value is in the range [-pi/2, pi/2] radians. A
    domain error occurs for arguments not in the range [-1, +1].
 */
extern double asin(double __x) __attribute__((__const__));


/**
    The atan() function computes the principal value of the arc tangent
    of \a __x.  The returned value is in the range [-pi/2, pi/2] radians.
 */
extern double atan(double __x) __attribute__((__const__));


/**
    The atan2() function computes the principal value of the arc tangent
    of <em>__y / __x</em>, using the signs of both arguments to determine
    the quadrant of the return value.  The returned value is in the range
    [-pi, +pi] radians.
 */
extern double atan2(double __y, double __x) __attribute__((__const__));


/**
    The log() function returns the natural logarithm of argument \a __x.
 */
extern double log(double __x) __attribute__((__const__));


/**
    The log10() function returns the logarithm of argument \a __x to base 10.
 */
extern double log10(double __x) __attribute__((__const__));


/**
    The function pow() returns the value of \a __x to the exponent \a __y.
 */
extern double pow(double __x, double __y) __attribute__((__const__));


/**
    The function isnan() returns 1 if the argument \a __x represents a
    "not-a-number" (NaN) object, otherwise 0.
 */
extern int isnan(double __x) __attribute__((__const__));


/**
    The function isinf() returns 1 if the argument \a __x is positive
    infinity, -1 if \a __x is negative infinity, and 0 otherwise.

    \note The GCC 4.3 can replace this function with inline code that
    returns the 1 value for both infinities (gcc bug #35509).
 */
extern int isinf(double __x) __attribute__((__const__));


/**
    The isfinite() function returns a nonzero value if \a __x is finite:
    not plus or minus infinity, and not NaN.
 */
__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}


/**
    The copysign() function returns \a __x but with the sign of \a __y.
    They work even if \a __x or \a __y are NaN or zero.
*/
__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}


/**
    The signbit() function returns a nonzero value if the value of \a __x
    has its sign bit set.  This is not the same as `\a __x < 0.0',
    because IEEE 754 floating point allows zero to be signed. The
    comparison `-0.0 < 0.0' is false, but `signbit (-0.0)' will return a
    nonzero value.
 */
extern int signbit (double __x) __attribute__((__const__));


/**
    The fdim() function returns <em>max(__x - __y, 0)</em>. If \a __x or
    \a __y or both are NaN, NaN is returned.
 */
extern double fdim (double __x, double __y) __attribute__((__const__));


/**
    The fma() function performs floating-point multiply-add. This is the
    operation <em>(__x * __y) + __z</em>, but the intermediate result is
    not rounded to the destination type.  This can sometimes improve the
    precision of a calculation.
 */
extern double fma (double __x, double __y, double __z) __attribute__((__const__));


/**
    The fmax() function returns the greater of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmax (double __x, double __y) __attribute__((__const__));


/**
    The fmin() function returns the lesser of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmin (double __x, double __y) __attribute__((__const__));


/**
    The trunc() function rounds \a __x to the nearest integer not larger
    in absolute value.
 */
extern double trunc (double __x) __attribute__((__const__));


/**
    The round() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    Overflow is impossible.

    \return The rounded value. If \a __x is an integral or infinite, \a
    __x itself is returned. If \a __x is \c NaN, then \c NaN is returned.
 */
extern double round (double __x) __attribute__((__const__));


/**
    The lround() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    This function is similar to round() function, but it differs in type of
    return value and in that an overflow is possible.

    \return The rounded long integer value. If \a __x is not a finite number
    or an overflow was, this realization returns the \c LONG_MIN value
    (0x80000000).
 */
extern long lround (double __x) __attribute__((__const__));


/**
    The lrint() function rounds \a __x to the nearest integer, rounding the
    halfway cases to the even integer direction. (That is both 1.5 and 2.5
    values are rounded to 2). This function is similar to rint() function,
    but it differs in type of return value and in that an overflow is
    possible.

    \return The rounded long integer value. If \a __x is not a finite
    number or an overflow was, this realization returns the \c LONG_MIN
    value (0x80000000).
 */
extern long lrint (double __x) __attribute__((__const__));



}


/*@}*/
# 7 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */




/** \defgroup avr_sfr_notes Additional notes from <avr/sfr_defs.h>
    \ingroup avr_sfr

   The \c <avr/sfr_defs.h> file is included by all of the \c <avr/ioXXXX.h>
   files, which use macros defined here to make the special function register
   definitions look like C variables or simple constants, depending on the
   <tt>_SFR_ASM_COMPAT</tt> define.  Some examples from \c <avr/iocanxx.h> to
   show how to define such macros:

\code
#define PORTA   _SFR_IO8(0x02)
#define EEAR    _SFR_IO16(0x21)
#define UDR0    _SFR_MEM8(0xC6)
#define TCNT3   _SFR_MEM16(0x94)
#define CANIDT  _SFR_MEM32(0xF0)
\endcode

   If \c _SFR_ASM_COMPAT is not defined, C programs can use names like
   <tt>PORTA</tt> directly in C expressions (also on the left side of
   assignment operators) and GCC will do the right thing (use short I/O
   instructions if possible).  The \c __SFR_OFFSET definition is not used in
   any way in this case.

   Define \c _SFR_ASM_COMPAT as 1 to make these names work as simple constants
   (addresses of the I/O registers).  This is necessary when included in
   preprocessed assembler (*.S) source files, so it is done automatically if
   \c __ASSEMBLER__ is defined.  By default, all addresses are defined as if
   they were memory addresses (used in \c lds/sts instructions).  To use these
   addresses in \c in/out instructions, you must subtract 0x20 from them.

   For more backwards compatibility, insert the following at the start of your
   old assembler source file:

\code
#define __SFR_OFFSET 0
\endcode

   This automatically subtracts 0x20 from I/O space addresses, but it's a
   hack, so it is recommended to change your source: wrap such addresses in
   macros defined here, as shown below.  After this is done, the
   <tt>__SFR_OFFSET</tt> definition is no longer necessary and can be removed.

   Real example - this code could be used in a boot loader that is portable
   between devices with \c SPMCR at different addresses.

\verbatim
<avr/iom163.h>: #define SPMCR _SFR_IO8(0x37)
<avr/iom128.h>: #define SPMCR _SFR_MEM8(0x68)
\endverbatim

\code
#if _SFR_IO_REG_P(SPMCR)
	out	_SFR_IO_ADDR(SPMCR), r24
#else
	sts	_SFR_MEM_ADDR(SPMCR), r24
#endif
\endcode

   You can use the \c in/out/cbi/sbi/sbic/sbis instructions, without the
   <tt>_SFR_IO_REG_P</tt> test, if you know that the register is in the I/O
   space (as with \c SREG, for example).  If it isn't, the assembler will
   complain (I/O address out of range 0...0x3f), so this should be fairly
   safe.

   If you do not define \c __SFR_OFFSET (so it will be 0x20 by default), all
   special register addresses are defined as memory addresses (so \c SREG is
   0x5f), and (if code size and speed are not important, and you don't like
   the ugly \#if above) you can always use lds/sts to access them.  But, this
   will not work if <tt>__SFR_OFFSET</tt> != 0x20, so use a different macro
   (defined only if <tt>__SFR_OFFSET</tt> == 0x20) for safety:

\code
	sts	_SFR_ADDR(SPMCR), r24
\endcode

   In C programs, all 3 combinations of \c _SFR_ASM_COMPAT and
   <tt>__SFR_OFFSET</tt> are supported - the \c _SFR_ADDR(SPMCR) macro can be
   used to get the address of the \c SPMCR register (0x57 or 0x68 depending on
   device). */
# 125 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/* These only work in C programs.  */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 1 3 4
# 9 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 3 4
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 1 3 4
/* Copyright (c) 2002,2004,2005 Marek Michalkiewicz
   Copyright (c) 2005, Carlos Lamas
   Copyright (c) 2005,2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
 * ISO/IEC 9899:1999  7.18 Integer types <stdint.h>
 */




/** \file */
/** \defgroup avr_stdint <stdint.h>: Standard Integer Types
    \code #include <stdint.h> \endcode

    Use [u]intN_t if you need exactly N bits.

    Since these typedefs are mandated by the C99 standard, they are preferred
    over rolling your own typedefs.  */

/*
 * __USING_MINT8 is defined to 1 if the -mint8 option is in effect.
 */






/* Integer types */
# 119 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdint.h" 3 4
/* actual implementation goes here */

typedef signed int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef signed int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef signed int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef signed int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));




/** \name Integer types capable of holding object pointers
    These allow you to declare variables of the same size as a pointer. */

/*@{*/

/** \ingroup avr_stdint
    Signed pointer compatible type. */

typedef int16_t intptr_t;

/** \ingroup avr_stdint
    Unsigned pointer compatible type. */

typedef uint16_t uintptr_t;

/*@}*/

/** \name Minimum-width integer types
   Integer types having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    signed int with at least 8 bits. */

typedef int8_t int_least8_t;

/** \ingroup avr_stdint
    unsigned int with at least 8 bits. */

typedef uint8_t uint_least8_t;

/** \ingroup avr_stdint
    signed int with at least 16 bits. */

typedef int16_t int_least16_t;

/** \ingroup avr_stdint
    unsigned int with at least 16 bits. */

typedef uint16_t uint_least16_t;

/** \ingroup avr_stdint
    signed int with at least 32 bits. */

typedef int32_t int_least32_t;

/** \ingroup avr_stdint
    unsigned int with at least 32 bits. */

typedef uint32_t uint_least32_t;


/** \ingroup avr_stdint
    signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_least64_t;

/** \ingroup avr_stdint
    unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_least64_t;


/*@}*/


/** \name Fastest minimum-width integer types
   Integer types being usually fastest having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    fastest signed int with at least 8 bits. */

typedef int8_t int_fast8_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 8 bits. */

typedef uint8_t uint_fast8_t;

/** \ingroup avr_stdint
    fastest signed int with at least 16 bits. */

typedef int16_t int_fast16_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 16 bits. */

typedef uint16_t uint_fast16_t;

/** \ingroup avr_stdint
    fastest signed int with at least 32 bits. */

typedef int32_t int_fast32_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 32 bits. */

typedef uint32_t uint_fast32_t;


/** \ingroup avr_stdint
    fastest signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_fast64_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_fast64_t;


/*@}*/


/** \name Greatest-width integer types
   Types designating integer data capable of representing any value of
   any integer type in the corresponding signed or unsigned category */

/*@{*/






/** \ingroup avr_stdint
    largest signed int available. */

typedef int64_t intmax_t;

/** \ingroup avr_stdint
    largest unsigned int available. */

typedef uint64_t uintmax_t;


/*@}*/

/* Helping macro */
# 10 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdint.h" 2 3 4
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 2 3

/** \file */
/** \defgroup avr_inttypes <inttypes.h>: Integer Type conversions
    \code #include <inttypes.h> \endcode

    This header file includes the exact-width integer definitions from
    <tt><stdint.h></tt>, and extends them with additional facilities
    provided by the implementation.

    Currently, the extensions include two additional integer types
    that could hold a "far" pointer (i.e. a code pointer that can
    address more than 64 KB), as well as standard names for all printf
    and scanf formatting options that are supported by the \ref avr_stdio.
    As the library does not support the full range of conversion
    specifiers from ISO 9899:1999, only those conversions that are
    actually implemented will be listed here.

    The idea behind these conversion macros is that, for each of the
    types defined by <stdint.h>, a macro will be supplied that portably
    allows formatting an object of that type in printf() or scanf()
    operations.  Example:

    \code
    #include <inttypes.h>

    uint8_t smallval;
    int32_t longval;
    ...
    printf("The hexadecimal value of smallval is %" PRIx8
           ", the decimal value of longval is %" PRId32 ".\n",
	   smallval, longval);
    \endcode
*/

/** \name Far pointers for memory access >64K */

/*@{*/
/** \ingroup avr_inttypes
    signed integer type that can hold a pointer > 64 KB */
typedef int32_t int_farptr_t;

/** \ingroup avr_inttypes
    unsigned integer type that can hold a pointer > 64 KB */
typedef uint32_t uint_farptr_t;
/*@}*/
# 127 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 2 3
# 194 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/** \name Bit manipulation */

/*@{*/
/** \def _BV
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Converts a bit number into a byte value.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV(). */



/*@}*/
# 219 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 3
/** \name IO register bit manipulation */

/*@{*/



/** \def bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is set. 
    This will return a 0 if the bit is clear, and non-zero
    if the bit is set. */



/** \def bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is clear. 
    This will return non-zero if the bit is clear, and a 0
    if the bit is set. */



/** \def loop_until_bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is set. */



/** \def loop_until_bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is clear. */



/*@}*/
# 100 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 428 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 1 3
/* Copyright (c) 2005, Joerg Wunsch

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. */
# 31 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 3
/* $Id: iotn85.h 2115 2010-04-05 23:19:53Z arcanum $ */

/* avr/iotn85.h - definitions for ATtiny85 */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 1 3
/* Copyright (c) 2005,2007 Anatoly Sokolov

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. */
# 31 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* $Id: iotnx5.h 2269 2011-12-29 08:07:25Z joerg_wunsch $ */

/* avr/iotnx5.h - definitions for ATtiny25, ATtiny45 and ATtiny85 */




/* This file should only be included from <avr/io.h>, never directly. */
# 50 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* I/O registers */

/* Reserved [0x00..0x02] */
# 98 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* Reserved [0x09..0x0C] */
# 167 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* Reserved [0x19..0x1B] */

/* EEPROM Control Register EECR */
# 178 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* EEPROM Data Register */


/* EEPROM Address Register */
# 309 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* Reserved [0x36] */
# 343 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotnx5.h" 3
/* Reserved [0x3C] */

/* 0x3D..0x3E SP  [defined in <avr/io.h>] */
/* 0x3F SREG      [defined in <avr/io.h>] */

///---

/* Interrupt vectors */
/* Interrupt vector 0 is the reset vector. */
/* External Interrupt 0 */




/* Pin change Interrupt Request 0 */




/* Timer/Counter1 Compare Match 1A */






/* Timer/Counter1 Overflow */






/* Timer/Counter0 Overflow */






/* EEPROM Ready */




/* Analog comparator */




/* ADC Conversion ready */




/* Timer/Counter1 Compare Match B */






/* Timer/Counter0 Compare Match A */






/* Timer/Counter0 Compare Match B */






/* Watchdog Time-out */




/* USI START */




/* USI Overflow */
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 2 3

/* Constants */
# 50 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 3
/* Fuses */


/* Low Fuse Byte */
# 64 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 3
/* High Fuse Byte */
# 75 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\iotn85.h" 3
/* Extended Fuse Byte */




/* Lock Bits */



/* Signature */
# 429 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 616 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 1 3
/* Copyright (c) 2003  Theodore A. Roth
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




/* This file should only be included from <avr/io.h>, never directly. */





/* Define Generic PORTn, DDn, and PINn values. */

/* Port Data Register (generic) */
# 54 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Port Data Direction Register (generic) */
# 64 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Port Input Pins (generic) */
# 74 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* Define PORTxn an Pxn values for all possible port pins if not defined already by io.h. */

/* PORT A */
# 119 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT B */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT C */
# 205 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT D */
# 248 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT E */
# 291 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT F */
# 334 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT G */
# 377 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT H */
# 420 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT J */
# 463 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT K */
# 506 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\portpins.h" 3
/* PORT L */
# 617 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 1 3
/* Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 2 3

/* 
This purpose of this header is to define registers that have not been 
previously defined in the individual device IO header files, and to define 
other symbols that are common across AVR device families.

This file is designed to be included in <avr/io.h> after the individual
device IO header files, and after <avr/sfr_defs.h>

*/

/*------------ Registers Not Previously Defined ------------*/

/* 
These are registers that are not previously defined in the individual
IO header files, OR they are defined here because they are used in parts of
avr-libc even if a device is not selected but a general architecture has
been selected.
*/


/*
Stack pointer register.

AVR architecture 1 has no RAM, thus no stack pointer. 

All other architectures do have a stack pointer.  Some devices have only
less than 256 bytes of possible RAM locations (128 Bytes of SRAM
and no option for external RAM), thus SPH is officially "reserved"
for them.
*/
# 98 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 108 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* SREG bit definitions */
# 206 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/*------------ Common Symbols ------------*/

/* 
Generic definitions for registers that are common across multiple AVR devices
and families.
*/

/* Pointer registers definitions */
# 224 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Status Register */
# 234 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer (combined) Register */
# 244 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer High Register */
# 255 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Stack Pointer Low Register */
# 265 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPD Register */
# 275 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPX Register */
# 285 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPY Register */
# 295 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* RAMPZ Register */
# 305 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/* Extended Indirect Register */
# 315 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\common.h" 3
/*------------ Workaround to old compilers (4.1.2 and earlier)  ------------*/
# 619 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\version.h" 1 3
/* Copyright (c) 2005, Joerg Wunsch                               -*- c -*-
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \defgroup avr_version <avr/version.h>: avr-libc version macros
    \code #include <avr/version.h> \endcode

    This header file defines macros that contain version numbers and
    strings describing the current version of avr-libc.

    The version number itself basically consists of three pieces that
    are separated by a dot: the major number, the minor number, and
    the revision number.  For development versions (which use an odd
    minor number), the string representation additionally gets the
    date code (YYYYMMDD) appended.

    This file will also be included by \c <avr/io.h>.  That way,
    portable tests can be implemented using \c <avr/io.h> that can be
    used in code that wants to remain backwards-compatible to library
    versions prior to the date when the library version API had been
    added, as referenced but undefined C preprocessor macros
    automatically evaluate to 0.
*/




/** \ingroup avr_version
    String literal representation of the current library version. */


/** \ingroup avr_version
    Numerical representation of the current library version.

    In the numerical representation, the major number is multiplied by
    10000, the minor number by 100, and all three parts are then
    added.  It is intented to provide a monotonically increasing
    numerical value that can easily be used in numerical checks.
 */


/** \ingroup avr_version
    String literal representation of the release date. */


/** \ingroup avr_version
    Numerical representation of the release date. */


/** \ingroup avr_version
    Library major version number. */


/** \ingroup avr_version
    Library minor version number. */


/** \ingroup avr_version
    Library revision number. */
# 621 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3





/* Include fuse.h after individual IO header files. */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\fuse.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/fuse.h - Fuse API */




/* This file must be explicitly included by <avr/io.h>. */





/** \file */
/** \defgroup avr_fuse <avr/fuse.h>: Fuse Support

    \par Introduction

    The Fuse API allows a user to specify the fuse settings for the specific
    AVR device they are compiling for. These fuse settings will be placed
    in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the fuse information embedded in
    the ELF file, by extracting this information and determining if the fuses
    need to be programmed before programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Fuse API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/fuse.h>
    file. These other two files provides everything necessary to set the AVR
    fuses.
    
    \par Fuse API
    
    Each I/O header file must define the FUSE_MEMORY_SIZE macro which is
    defined to the number of fuse bytes that exist in the AVR device.
    
    A new type, __fuse_t, is defined as a structure. The number of fields in 
    this structure are determined by the number of fuse bytes in the 
    FUSE_MEMORY_SIZE macro.
    
    If FUSE_MEMORY_SIZE == 1, there is only a single field: byte, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 2, there are two fields: low, and high, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 3, there are three fields: low, high, and extended,
    of type unsigned char.
    
    If FUSE_MEMORY_SIZE > 3, there is a single field: byte, which is an array
    of unsigned char with the size of the array being FUSE_MEMORY_SIZE.
    
    A convenience macro, FUSEMEM, is defined as a GCC attribute for a 
    custom-named section of ".fuse".
    
    A convenience macro, FUSES, is defined that declares a variable, __fuse, of
    type __fuse_t with the attribute defined by FUSEMEM. This variable
    allows the end user to easily set the fuse data.

    \note If a device-specific I/O header file has previously defined FUSEMEM,
    then FUSEMEM is not redefined. If a device-specific I/O header file has
    previously defined FUSES, then FUSES is not redefined.

    Each AVR device I/O header file has a set of defined macros which specify the
    actual fuse bits available on that device. The AVR fuses have inverted
    values, logical 1 for an unprogrammed (disabled) bit and logical 0 for a
    programmed (enabled) bit. The defined macros for each individual fuse
    bit represent this in their definition by a bit-wise inversion of a mask.
    For example, the FUSE_EESAVE fuse in the ATmega128 is defined as:
    \code
    #define FUSE_EESAVE      ~_BV(3)
    \endcode
    \note The _BV macro creates a bit mask from a bit number. It is then 
    inverted to represent logical values for a fuse memory byte.
    
    To combine the fuse bits macros together to represent a whole fuse byte,
    use the bitwise AND operator, like so:
    \code
    (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN)
    \endcode
    
    Each device I/O header file also defines macros that provide default values
    for each fuse byte that is available. LFUSE_DEFAULT is defined for a Low
    Fuse byte. HFUSE_DEFAULT is defined for a High Fuse byte. EFUSE_DEFAULT
    is defined for an Extended Fuse byte.
    
    If FUSE_MEMORY_SIZE > 3, then the I/O header file defines macros that
    provide default values for each fuse byte like so:
    FUSE0_DEFAULT
    FUSE1_DEFAULT
    FUSE2_DEFAULT
    FUSE3_DEFAULT
    FUSE4_DEFAULT
    ....
    
    \par API Usage Example
    
    Putting all of this together is easy. Using C99's designated initializers:
    
    \code
    #include <avr/io.h>

    FUSES = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or, using the variable directly instead of the FUSES macro,
    
    \code
    #include <avr/io.h>

    __fuse_t __fuse __attribute__((section (".fuse"))) = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    If you are compiling in C++, you cannot use the designated intializers so
    you must do:

    \code
    #include <avr/io.h>

    FUSES = 
    {
        LFUSE_DEFAULT, // .low
        (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN), // .high
        EFUSE_DEFAULT, // .extended
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The FUSES macro defines a global variable to store the fuse data. This 
    variable is assigned to its own linker section. Assign the desired fuse 
    values immediately in the variable initialization.
    
    The .fuse section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .fuse section.
    
    The global variable is declared in the FUSES macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize ALL fields in the __fuse_t structure. This is because
    the fuse bits in all bytes default to a logical 1, meaning unprogrammed. 
    Normal uninitialized data defaults to all locgial zeros. So it is vital that
    all fuse bytes are initialized, even with default data. If they are not,
    then the fuse bits may not programmed to the desired settings.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .fuse section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .fuse <ELF file>
    \endcode
    The section contents shows the address on the left, then the data going from
    lower address to a higher address, left to right.

*/
# 239 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\fuse.h" 3
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;
# 628 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3

/* Include lock.h after individual IO header files. */
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\lock.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/lock.h - Lock Bits API */





/** \file */
/** \defgroup avr_lock <avr/lock.h>: Lockbit Support

    \par Introduction

    The Lockbit API allows a user to specify the lockbit settings for the 
    specific AVR device they are compiling for. These lockbit settings will be 
    placed in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the lockbit information embedded in
    the ELF file, by extracting this information and determining if the lockbits
    need to be programmed after programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Lockbit API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/lock.h>
    file. These other two files provides everything necessary to set the AVR
    lockbits.
    
    \par Lockbit API
    
    Each I/O header file may define up to 3 macros that controls what kinds
    of lockbits are available to the user.
    
    If __LOCK_BITS_EXIST is defined, then two lock bits are available to the
    user and 3 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_0_EXIST is defined, then the two BLB0 lock bits are
    available to the user and 4 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_1_EXIST is defined, then the two BLB1 lock bits are
    available to the user and 4 mode settings are defined for these two bits.

    If __BOOT_LOCK_APPLICATION_TABLE_BITS_EXIST is defined then two lock bits
    are available to set the locking mode for the Application Table Section 
    (which is used in the XMEGA family).
    
    If __BOOT_LOCK_APPLICATION_BITS_EXIST is defined then two lock bits are
    available to set the locking mode for the Application Section (which is used
    in the XMEGA family).
    
    If __BOOT_LOCK_BOOT_BITS_EXIST is defined then two lock bits are available
    to set the locking mode for the Boot Loader Section (which is used in the
    XMEGA family).

    The AVR lockbit modes have inverted values, logical 1 for an unprogrammed 
    (disabled) bit and logical 0 for a programmed (enabled) bit. The defined 
    macros for each individual lock bit represent this in their definition by a 
    bit-wise inversion of a mask. For example, the LB_MODE_3 macro is defined 
    as:
    \code
    #define LB_MODE_3  (0xFC)
`   \endcode
    
    To combine the lockbit mode macros together to represent a whole byte,
    use the bitwise AND operator, like so:
    \code
    (LB_MODE_3 & BLB0_MODE_2)
    \endcode
    
    <avr/lock.h> also defines a macro that provides a default lockbit value:
    LOCKBITS_DEFAULT which is defined to be 0xFF.

    See the AVR device specific datasheet for more details about these
    lock bits and the available mode settings.
    
    A convenience macro, LOCKMEM, is defined as a GCC attribute for a 
    custom-named section of ".lock".
    
    A convenience macro, LOCKBITS, is defined that declares a variable, __lock, 
    of type unsigned char with the attribute defined by LOCKMEM. This variable
    allows the end user to easily set the lockbit data.

    \note If a device-specific I/O header file has previously defined LOCKMEM,
    then LOCKMEM is not redefined. If a device-specific I/O header file has
    previously defined LOCKBITS, then LOCKBITS is not redefined. LOCKBITS is
    currently known to be defined in the I/O header files for the XMEGA devices.

    \par API Usage Example
    
    Putting all of this together is easy:
    
    \code
    #include <avr/io.h>

    LOCKBITS = (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or:
    
    \code
    #include <avr/io.h>

    unsigned char __lock __attribute__((section (".lock"))) = 
        (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The LOCKBITS macro defines a global variable to store the lockbit data. This 
    variable is assigned to its own linker section. Assign the desired lockbit 
    values immediately in the variable initialization.
    
    The .lock section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .lock section.
    
    The global variable is declared in the LOCKBITS macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize the lockbit variable to some meaningful value, even
    if it is the default value. This is because the lockbits default to a 
    logical 1, meaning unprogrammed. Normal uninitialized data defaults to all 
    locgial zeros. So it is vital that all lockbits are initialized, even with 
    default data. If they are not, then the lockbits may not programmed to the 
    desired settings and can possibly put your device into an unrecoverable 
    state.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .lock section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .lock <ELF file>
    \endcode

*/
# 200 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\lock.h" 3
/* Lock Bit Modes */
# 631 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 2 3
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 2 3


/* Auxiliary macro for ISR_ALIAS(). */



/** 
\file 
\@{ 
*/


/** \name Global manipulation of the interrupt flag

    The global interrupt flag is maintained in the I bit of the status
    register (SREG).

    Handling interrupts frequently requires attention regarding atomic
    access to objects that could be altered by code running within an
    interrupt context, see <util/atomic.h>.

    Frequently, interrupts are being disabled for periods of time in
    order to perform certain operations without being disturbed; see
    \ref optim_code_reorder for things to be taken into account with
    respect to compiler optimizations.
*/
# 103 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/** \name Macros for writing interrupt handler functions */
# 283 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/** \name ISR attributes */
# 342 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\interrupt.h" 3
/* \@} */
# 9 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2

# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/





/*=============================================================================
  Low power / smaller code options
=============================================================================*/





/*=============================================================================
  Build options for the ATtinyX313 processor
=============================================================================*/
# 67 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h"
/*=============================================================================
  Build options for the ATtiny84 processor
=============================================================================*/
# 98 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h"
/*=============================================================================
  Build options for the ATtiny85 processor
=============================================================================*/







/*
  For various reasons, Timer 1 is a better choice for the millis timer on the
  '85 processor.
*/


/*
  If the following is true (non-zero) there will be two phase-correct PWM 
  pins and one fast PWM pin.  If false there will be one phase-correct PWM 
  pin and two fast PWM pins.
*/


/*
  Tone goes on whichever timer was not used for millis.
*/
# 137 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h"
/*=============================================================================
  There doesn't seem to be many people using a bootloader so we'll assume 
  there isn't one.  If the following is true (non-zero), the timers are 
  reinitialized to their power-up state in init just in case the bootloader 
  left them in a bad way.
=============================================================================*/




/*=============================================================================
  Allow the ADC to be optional for low-power applications
=============================================================================*/
# 165 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h"
/*=============================================================================
  Allow the "secondary timers" to be optional for low-power applications
=============================================================================*/
# 11 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_pins.h" 1
/*==============================================================================

  core_pins.h - Pin definitions.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/




# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/
# 28 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_pins.h" 2


/*=============================================================================
  Pin definitions for the ATtinyX313
=============================================================================*/
# 91 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_pins.h"
/*=============================================================================
  Pin definitions for the ATtiny84
=============================================================================*/
# 147 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_pins.h"
/*=============================================================================
  Pin definitions for the ATtiny85
=============================================================================*/
# 176 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_pins.h"
/* Note: By default, CORE_OC1A_PIN is not used for PWM.  It overlaps with 
CORE_OC0B_PIN.  CORE_OC0B_PIN was used because it supports phase-correct PWM.
There is a build option in "core_build_options.h" to determine which channel 
to use */
# 12 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h" 1
/*
  wiring.h - Partial implementation of the Wiring API for the ATmega8.
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2005-2006 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 1073 2010-08-17 21:50:41Z dmellis $

  Modified 28-08-2009 for attiny84 R.Wiersma
  Modified 14-108-2009 for attiny45 Saposoft
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 32 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 33 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h" 2

# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/binary.h" 1
# 35 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/
# 36 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h" 2


extern "C"{
# 67 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h"
/* rmv or fix
#if defined(__AVR_ATmega1280__)
#define INTERNAL1V1 2
#define INTERNAL2V56 3
#else
#define INTERNAL 3
#endif
#define DEFAULT 1
#define EXTERNAL 0
*/

/* rmv
analogReference constants for ATmega168.  These are NOT correct for the ATtiny84 nor for the ATtiny85.  The correct values are below.

// Internal 1.1V Voltage Reference with external capacitor at AREF pin 
#define INTERNAL 3  

// AVCC with external capacitor at AREF pin 
#define DEFAULT 1   

// AREF, Internal Vref turned off 
#define EXTERNAL 0  
*/
# 109 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h"
// X 0 0 VCC used as Voltage Reference, disconnected from PB0 (AREF).


// X 0 1 External Voltage Reference at PB0 (AREF) pin, Internal Voltage Reference turned off.


// 0 1 0 Internal 1.1V Voltage Reference.



// 1 1 1 Internal 2.56V Voltage Reference with external bypass capacitor at PB0 (AREF) pin(1).


// An alternative for INTERNAL2V56 is (6) ...
// 1 1 0 Internal 2.56V Voltage Reference without external bypass capacitor, disconnected from PB0 (AREF)(1).




// undefine stdlib's abs if encountered
# 159 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/wiring.h"
typedef unsigned int word;



typedef uint8_t boolean;
typedef uint8_t byte;

void initToneTimer(void);
void init(void);

void pinMode(uint8_t, uint8_t);
void digitalWrite(uint8_t, uint8_t);
int digitalRead(uint8_t);
int analogRead(uint8_t);
void analogReference(uint8_t mode);
void analogWrite(uint8_t, int);

unsigned long millis(void);
unsigned long micros(void);
void delay(unsigned long);
void delayMicroseconds(unsigned int us);
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val);
uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder);

void attachInterrupt(uint8_t, void (*)(void), int mode);
void detachInterrupt(uint8_t);

void setup(void);
void loop(void);


} // extern "C"
# 13 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/pins_arduino.h" 1
/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $

  Modified 28-08-2009 for attiny84 R.Wiersma
  Modified 14-10-2009 for attiny45 Saposoft
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 87 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 88 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 89 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 2 3
# 102 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/**
   \ingroup avr_pgmspace
   \def PROGMEM

   Attribute to use in order to declare an object being located in
   flash ROM.
 */



extern "C" {
# 382 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/* Although in C, we can get away with just using __c, it does not work in
   C++. We need to use &__c[0] to avoid the compiler puking. Dave Hylands
   explaned it thusly,

     Let's suppose that we use PSTR("Test"). In this case, the type returned
     by __c is a prog_char[5] and not a prog_char *. While these are
     compatible, they aren't the same thing (especially in C++). The type
     returned by &__c[0] is a prog_char *, which explains why it works
     fine. */
# 403 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/* The real thing. */
# 611 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/*
Macro to read data from program memory for avr tiny parts(tiny 4/5/9/10/20/40).
why:
- LPM instruction is not available in AVR_TINY instruction set.
- Programs are executed starting from address 0x0000 in program memory.
But it must be addressed starting from 0x4000 when accessed via data memory.
Reference: TINY device (ATTiny 4,5,9,10,20 and 40) datasheets
Bug: avrtc-536
*/
# 632 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte_near(address_short)
    Read a byte from the program space with a 16-bit (near) address. 
    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word_near(address_short)
    Read a word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword_near(address_short)
    Read a double word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_float_near(address_short)
    Read a float from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_ptr_near(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */
# 1039 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte(address_short)
    Read a byte from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word(address_short)
    Read a word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword(address_short)
    Read a double word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_float(address_short)
    Read a float from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_ptr(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/* pgm_get_far_address() macro

   This macro facilitates the obtention of a 32 bit "far" pointer (only 24 bits
   used) to data even passed the 64KB limit for the 16 bit ordinary pointer. It
   is similar to the '&' operator, with some limitations.

   Comments:

   - The overhead is minimal and it's mainly due to the 32 bit size operation.

   - 24 bit sizes guarantees the code compatibility for use in future devices.

   - hh8() is an undocumented feature but seems to give the third significant byte
     of a 32 bit data and accepts symbols, complementing the functionality of hi8()
     and lo8(). There is not an equivalent assembler function to get the high
     significant byte.

   - 'var' has to be resolved at linking time as an existing symbol, i.e, a simple
     type variable name, an array name (not an indexed element of the array, if the
     index is a constant the compiler does not complain but fails to get the address
     if optimization is enabled), a struct name or a struct field name, a function
     identifier, a linker defined identifier,...

   - The returned value is the identifier's VMA (virtual memory address) determined
     by the linker and falls in the corresponding memory region. The AVR Harvard
     architecture requires non overlapping VMA areas for the multiple address spaces
     in the processor: Flash ROM, RAM, and EEPROM. Typical offset for this are
     0x00000000, 0x00800xx0, and 0x00810000 respectively, derived from the linker
	 script used and linker options. The value returned can be seen then as a
     universal pointer.

*/
# 1137 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 3
extern const void * memchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern int memcmp_P(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memccpy_P(void *, const void *, int __val, size_t);
extern void *memcpy_P(void *, const void *, size_t);
extern void *memmem_P(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern const void * memrchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern char *strcat_P(char *, const char *);
extern const char * strchr_P(const char *, int __val) __attribute__((__const__));
extern const char * strchrnul_P(const char *, int __val) __attribute__((__const__));
extern int strcmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcpy_P(char *, const char *);
extern int strcasecmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr_P(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn_P(const char *__s, const char * __reject) __attribute__((__pure__));
extern size_t strlcat_P (char *, const char *, size_t );
extern size_t strlcpy_P (char *, const char *, size_t );
extern size_t __strlen_P(const char *) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_P(const char *, size_t) __attribute__((__const__)); /* program memory can't change */
extern int strncmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern int strncasecmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncat_P(char *, const char *, size_t);
extern char *strncpy_P(char *, const char *, size_t);
extern char *strpbrk_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern const char * strrchr_P(const char *, int __val) __attribute__((__const__));
extern char *strsep_P(char **__sp, const char * __delim);
extern size_t strspn_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern char *strstr_P(const char *, const char *) __attribute__((__pure__));
extern char *strtok_P(char *__s, const char * __delim);
extern char *strtok_rP(char *__s, const char * __delim, char **__last);

extern size_t strlen_PF (uint_farptr_t src) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_PF (uint_farptr_t src, size_t len) __attribute__((__const__)); /* program memory can't change */
extern void *memcpy_PF (void *dest, uint_farptr_t src, size_t len);
extern char *strcpy_PF (char *dest, uint_farptr_t src);
extern char *strncpy_PF (char *dest, uint_farptr_t src, size_t len);
extern char *strcat_PF (char *dest, uint_farptr_t src);
extern size_t strlcat_PF (char *dst, uint_farptr_t src, size_t siz);
extern char *strncat_PF (char *dest, uint_farptr_t src, size_t len);
extern int strcmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern int strcasecmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncasecmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern char *strstr_PF (const char *s1, uint_farptr_t s2);
extern size_t strlcpy_PF (char *dst, uint_farptr_t src, size_t siz);
extern int memcmp_PF(const void *, uint_farptr_t, size_t) __attribute__((__pure__));


__attribute__((__always_inline__)) static inline size_t strlen_P(const char * s);
static inline size_t strlen_P(const char *s) {
  return __builtin_constant_p(__builtin_strlen(s))
     ? __builtin_strlen(s) : __strlen_P(s);
}




}
# 32 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/pins_arduino.h" 2

# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/
# 34 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/pins_arduino.h" 2
# 59 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/pins_arduino.h"
//changed it to uint16_t to uint8_t
extern const uint8_t __attribute__((__progmem__)) port_to_mode_PGM[];
extern const uint8_t __attribute__((__progmem__)) port_to_input_PGM[];
extern const uint8_t __attribute__((__progmem__)) port_to_output_PGM[];
extern const uint8_t __attribute__((__progmem__)) port_to_pcmask_PGM[];

extern const uint8_t __attribute__((__progmem__)) digital_pin_to_port_PGM[];
// extern const uint8_t PROGMEM digital_pin_to_bit_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_bit_mask_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_timer_PGM[];

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.
// 
// These perform slightly better as macros compared to inline functions
//




// in the following lines modified pgm_read_word in pgm_read_byte, word doesn't work on attiny45
# 14 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2


# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 48 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 3
extern "C" {


/** \file */
/** \defgroup ctype <ctype.h>: Character Operations
    These functions perform various operations on characters.

    \code #include <ctype.h>\endcode 

*/

/** \name Character classification routines

    These functions perform character classification. They return true or
    false status depending whether the character passed to the function falls
    into the function's classification (i.e. isdigit() returns true if its
    argument is any value '0' though '9', inclusive). If the input is not
    an unsigned char value, all of this function return false.	*/

 /* @{ */

/** \ingroup ctype

    Checks for an alphanumeric character. It is equivalent to <tt>(isalpha(c)
    || isdigit(c))</tt>. */

extern int isalnum(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an alphabetic character. It is equivalent to <tt>(isupper(c) ||
    islower(c))</tt>. */

extern int isalpha(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks whether \c c is a 7-bit unsigned char value that fits into the
    ASCII character set. */

extern int isascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a blank character, that is, a space or a tab. */

extern int isblank(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a control character. */

extern int iscntrl(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a digit (0 through 9). */

extern int isdigit(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character except space. */

extern int isgraph(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a lower-case character. */

extern int islower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character including space. */

extern int isprint(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character which is not a space or an alphanumeric
    character. */

extern int ispunct(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for white-space characters.  For the avr-libc library, these are:
    space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
    horizontal tab ('\\t'), and vertical tab ('\\v'). */

extern int isspace(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an uppercase letter. */

extern int isupper(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 8 9 a b c d e
    f A B C D E F. */

extern int isxdigit(int __c) __attribute__((__const__));

/* @} */

/** \name Character convertion routines 

    This realization permits all possible values of integer argument.
    The toascii() function clears all highest bits. The tolower() and
    toupper() functions return an input argument as is, if it is not an
    unsigned char value.	*/

/* @{ */

/** \ingroup ctype

    Converts \c c to a 7-bit unsigned char value that fits into the ASCII
    character set, by clearing the high-order bits.

    \warning Many people will be unhappy if you use this function. This
    function will convert accented letters into random characters. */

extern int toascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to lower case, if possible. */

extern int tolower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to upper case, if possible. */

extern int toupper(int __c) __attribute__((__const__));

/* @} */


}
# 24 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WCharacter.h" 2

// WCharacter.h prototypes
inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));


// Checks for an alphanumeric character. 
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? 0x0 : 0x1);
}


// Checks for an alphabetic character. 
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? 0x0 : 0x1);
}


// Checks whether c is a 7-bit unsigned char value 
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
  return ( isascii (c) == 0 ? 0x0 : 0x1);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? 0x0 : 0x1);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? 0x0 : 0x1);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? 0x0 : 0x1);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? 0x0 : 0x1);
}


// Checks for any printable character which is not a space 
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? 0x0 : 0x1);
}


// Checks for white-space characters. For the avr-libc library, 
// these are: space, formfeed ('\f'), newline ('\n'), carriage 
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? 0x0 : 0x1);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? 0x0 : 0x1);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? 0x0 : 0x1);
}


// Converts c to a 7-bit unsigned char value that fits into the 
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
  return toascii (c);
}


// Warning:
// Many people will be unhappy if you use this function. 
// This function will convert accented letters into random 
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}
# 17 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




//#include "WProgram.h"
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 25 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WString.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 26 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WString.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 27 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WString.h" 2

class String
{
  public:
    // constructors
    String( const char *value = "" );
    String( const String &value );
    String( const char );
    String( const unsigned char );
    String( const int, const int base=10);
    String( const unsigned int, const int base=10 );
    String( const long, const int base=10 );
    String( const unsigned long, const int base=10 );
    ~String() { free(_buffer); _length = _capacity = 0;} //added _length = _capacity = 0;

    // operators
    const String & operator = ( const String &rhs );
    const String & operator +=( const String &rhs );
    //const String & operator +=( const char );
    int operator ==( const String &rhs ) const;
    int operator !=( const String &rhs ) const;
    int operator < ( const String &rhs ) const;
    int operator > ( const String &rhs ) const;
    int operator <=( const String &rhs ) const;
    int operator >=( const String &rhs ) const;
    char operator []( unsigned int index ) const;
    char& operator []( unsigned int index );
    //operator const char *() const { return _buffer; }

    // general methods
    char charAt( unsigned int index ) const;
    int compareTo( const String &anotherString ) const;
    unsigned char endsWith( const String &suffix ) const;
    unsigned char equals( const String &anObject ) const;
    unsigned char equalsIgnoreCase( const String &anotherString ) const;
    int indexOf( char ch ) const;
    int indexOf( char ch, unsigned int fromIndex ) const;
    int indexOf( const String &str ) const;
    int indexOf( const String &str, unsigned int fromIndex ) const;
    int lastIndexOf( char ch ) const;
    int lastIndexOf( char ch, unsigned int fromIndex ) const;
    int lastIndexOf( const String &str ) const;
    int lastIndexOf( const String &str, unsigned int fromIndex ) const;
    const unsigned int length( ) const { return _length; }
    void setCharAt(unsigned int index, const char ch);
    unsigned char startsWith( const String &prefix ) const;
    unsigned char startsWith( const String &prefix, unsigned int toffset ) const;
    String substring( unsigned int beginIndex ) const;
    String substring( unsigned int beginIndex, unsigned int endIndex ) const;
    String toLowerCase( ) const;
    String toUpperCase( ) const;
    String trim( ) const;
    void getBytes(unsigned char *buf, unsigned int bufsize);
    void toCharArray(char *buf, unsigned int bufsize);
    long toInt( );
    const String& concat( const String &str );
    String replace( char oldChar, char newChar );
    String replace( const String& match, const String& replace );
    friend String operator + ( String lhs, const String &rhs );

  protected:
    char *_buffer; // the actual char array
    unsigned int _capacity; // the array length minus one (for the '\0')
    unsigned int _length; // the String length (not counting the '\0')

    void getBuffer(unsigned int maxStrLen);

  private:

};

// allocate buffer space
inline void String::getBuffer(unsigned int maxStrLen)
{
  _capacity = maxStrLen;
  _buffer = (char *) malloc(_capacity + 1);
  if (_buffer == __null) _length = _capacity = 0;
}

inline String operator+( String lhs, const String &rhs )
{
  return lhs += rhs;
}
# 18 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h" 1
/*==============================================================================

  TinyDebugSerial.h - Tiny write-only software serial.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 28 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h" 2


# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/
# 31 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Stream.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 20-11-2010 by B.Cook ...

    http://arduiniana.org/libraries/flash/
    Printable support thanks to Mikal Hart
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 29 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 1 3
/* Copyright (c) 2002, 2005, 2007 Joerg Wunsch
   All rights reserved.

   Portions of documentation Copyright (c) 1990, 1991, 1993
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/






# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 45 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 55 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 85 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3



# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 50 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 2 3

/** \file */
/** \defgroup avr_stdio <stdio.h>: Standard IO facilities
    \code #include <stdio.h> \endcode

    <h3>Introduction to the Standard IO facilities</h3>

    This file declares the standard IO facilities that are implemented
    in \c avr-libc.  Due to the nature of the underlying hardware,
    only a limited subset of standard IO is implemented.  There is no
    actual file implementation available, so only device IO can be
    performed.  Since there's no operating system, the application
    needs to provide enough details about their devices in order to
    make them usable by the standard IO facilities.

    Due to space constraints, some functionality has not been
    implemented at all (like some of the \c printf conversions that
    have been left out).  Nevertheless, potential users of this
    implementation should be warned: the \c printf and \c scanf families of functions, although
    usually associated with presumably simple things like the
    famous "Hello, world!" program, are actually fairly complex
    which causes their inclusion to eat up a fair amount of code space.
    Also, they are not fast due to the nature of interpreting the
    format string at run-time.  Whenever possible, resorting to the
    (sometimes non-standard) predetermined conversion facilities that are
    offered by avr-libc will usually cost much less in terms of speed
    and code size.

    <h3>Tunable options for code size vs. feature set</h3>

    In order to allow programmers a code size vs. functionality tradeoff,
    the function vfprintf() which is the heart of the printf family can be
    selected in different flavours using linker options.  See the
    documentation of vfprintf() for a detailed description.  The same
    applies to vfscanf() and the \c scanf family of functions.

    <h3>Outline of the chosen API</h3>

    The standard streams \c stdin, \c stdout, and \c stderr are
    provided, but contrary to the C standard, since avr-libc has no
    knowledge about applicable devices, these streams are not already
    pre-initialized at application startup.  Also, since there is no
    notion of "file" whatsoever to avr-libc, there is no function
    \c fopen() that could be used to associate a stream to some device.
    (See \ref stdio_note1 "note 1".)  Instead, the function \c fdevopen()
    is provided to associate a stream to a device, where the device
    needs to provide a function to send a character, to receive a
    character, or both.  There is no differentiation between "text" and
    "binary" streams inside avr-libc.  Character \c \\n is sent
    literally down to the device's \c put() function.  If the device
    requires a carriage return (\c \\r) character to be sent before
    the linefeed, its \c put() routine must implement this (see
    \ref stdio_note2 "note 2").

    As an alternative method to fdevopen(), the macro
    fdev_setup_stream() might be used to setup a user-supplied FILE
    structure.

    It should be noted that the automatic conversion of a newline
    character into a carriage return - newline sequence breaks binary
    transfers.  If binary transfers are desired, no automatic
    conversion should be performed, but instead any string that aims
    to issue a CR-LF sequence must use <tt>"\r\n"</tt> explicitly.

    For convenience, the first call to \c fdevopen() that opens a
    stream for reading will cause the resulting stream to be aliased
    to \c stdin.  Likewise, the first call to \c fdevopen() that opens
    a stream for writing will cause the resulting stream to be aliased
    to both, \c stdout, and \c stderr.  Thus, if the open was done
    with both, read and write intent, all three standard streams will
    be identical.  Note that these aliases are indistinguishable from
    each other, thus calling \c fclose() on such a stream will also
    effectively close all of its aliases (\ref stdio_note3 "note 3").

    It is possible to tie additional user data to a stream, using
    fdev_set_udata().  The backend put and get functions can then
    extract this user data using fdev_get_udata(), and act
    appropriately.  For example, a single put function could be used
    to talk to two different UARTs that way, or the put and get
    functions could keep internal state between calls there.

    <h3>Format strings in flash ROM</h3>

    All the \c printf and \c scanf family functions come in two flavours: the
    standard name, where the format string is expected to be in
    SRAM, as well as a version with the suffix "_P" where the format
    string is expected to reside in the flash ROM.  The macro
    \c PSTR (explained in \ref avr_pgmspace) becomes very handy
    for declaring these format strings.

    \anchor stdio_without_malloc
    <h3>Running stdio without malloc()</h3>

    By default, fdevopen() requires malloc().  As this is often
    not desired in the limited environment of a microcontroller, an
    alternative option is provided to run completely without malloc().

    The macro fdev_setup_stream() is provided to prepare a
    user-supplied FILE buffer for operation with stdio.

    <h4>Example</h4>

    \code
    #include <stdio.h>

    static int uart_putchar(char c, FILE *stream);

    static FILE mystdout = FDEV_SETUP_STREAM(uart_putchar, NULL,
                                             _FDEV_SETUP_WRITE);

    static int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r', stream);
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }

    int
    main(void)
    {
      init_uart();
      stdout = &mystdout;
      printf("Hello, world!\n");

      return 0;
    }
    \endcode

    This example uses the initializer form FDEV_SETUP_STREAM() rather
    than the function-like fdev_setup_stream(), so all data
    initialization happens during C start-up.

    If streams initialized that way are no longer needed, they can be
    destroyed by first calling the macro fdev_close(), and then
    destroying the object itself.  No call to fclose() should be
    issued for these streams.  While calling fclose() itself is
    harmless, it will cause an undefined reference to free() and thus
    cause the linker to link the malloc module into the application.

    <h3>Notes</h3>

    \anchor stdio_note1 \par Note 1:
    It might have been possible to implement a device abstraction that
    is compatible with \c fopen() but since this would have required
    to parse a string, and to take all the information needed either
    out of this string, or out of an additional table that would need to be
    provided by the application, this approach was not taken.

    \anchor stdio_note2 \par Note 2:
    This basically follows the Unix approach: if a device such as a
    terminal needs special handling, it is in the domain of the
    terminal device driver to provide this functionality.  Thus, a
    simple function suitable as \c put() for \c fdevopen() that talks
    to a UART interface might look like this:

    \code
    int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r');
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }
    \endcode

    \anchor stdio_note3 \par Note 3:
    This implementation has been chosen because the cost of maintaining
    an alias is considerably smaller than the cost of maintaining full
    copies of each stream.  Yet, providing an implementation that offers
    the complete set of standard streams was deemed to be useful.  Not
    only that writing \c printf() instead of <tt>fprintf(mystream, ...)</tt>
    saves typing work, but since avr-gcc needs to resort to pass all
    arguments of variadic functions on the stack (as opposed to passing
    them in registers for functions that take a fixed number of
    parameters), the ability to pass one parameter less by implying
    \c stdin or stdout will also save some execution time.
*/



/*
 * This is an internal structure of the library that is subject to be
 * changed without warnings at any time.  Please do *never* reference
 * elements of it beyond by using the official interfaces provided.
 */
struct __file {
 char *buf; /* buffer pointer */
 unsigned char unget; /* ungetc() buffer */
 uint8_t flags; /* flags, see below */
# 261 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
 int size; /* size of buffer */
 int len; /* characters read or written so far */
 int (*put)(char, struct __file *); /* function to write one char to device */
 int (*get)(struct __file *); /* function to read one char from device */
 void *udata; /* User defined and accessible data. */
};



/*@{*/
/**
   \c FILE is the opaque structure that is passed around between the
   various standard IO functions.
*/


/**
   Stream that will be used as an input stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with read intent using \c fdevopen()
   will be assigned to \c stdin.
*/


/**
   Stream that will be used as an output stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with write intent using \c fdevopen()
   will be assigned to both, \c stdin, and \c stderr.
*/


/**
   Stream destined for error output.  Unless specifically assigned,
   identical to \c stdout.

   If \c stderr should point to another stream, the result of
   another \c fdevopen() must be explicitly assigned to it without
   closing the previous \c stderr (since this would also close
   \c stdout).
*/


/**
   \c EOF declares the value that is returned by various standard IO
   functions in case of an error.  Since the AVR platform (currently)
   doesn't contain an abstraction for actual files, its origin as
   "end of file" is somewhat meaningless here.
*/


/** This macro inserts a pointer to user defined data into a FILE
    stream object.

    The user data can be useful for tracking state in the put and get
    functions supplied to the fdevopen() function. */


/** This macro retrieves a pointer to user defined data from a FILE
    stream object. */
# 361 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
/**
 * Return code for an error condition during device read.
 *
 * To be used in the get function of fdevopen().
 */


/**
 * Return code for an end-of-file condition during device read.
 *
 * To be used in the get function of fdevopen().
 */
# 397 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
extern "C" {



/*
 * Doxygen documentation can be found in fdevopen.c.
 */

extern struct __file *__iob[];
# 416 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
/* New prototype for avr-libc 1.4 and above. */
extern struct __file *fdevopen(int (*__put)(char, struct __file*), int (*__get)(struct __file*));




/**
   This function closes \c stream, and disallows and further
   IO to and from it.

   When using fdevopen() to setup the stream, a call to fclose() is
   needed in order to free the internal resources allocated.

   If the stream has been set up using fdev_setup_stream() or
   FDEV_SETUP_STREAM(), use fdev_close() instead.

   It currently always returns 0 (for success).
*/
extern int fclose(struct __file *__stream);

/**
   This macro frees up any library resources that might be associated
   with \c stream.  It should be called if \c stream is no longer
   needed, right before the application is going to destroy the
   \c stream object itself.

   (Currently, this macro evaluates to nothing, but this might change
   in future versions of the library.)
*/






/**
   \c vfprintf is the central facility of the \c printf family of
   functions.  It outputs values to \c stream under control of a
   format string passed in \c fmt.  The actual values to print are
   passed as a variable argument list \c ap.

   \c vfprintf returns the number of characters written to \c stream,
   or \c EOF in case of an error.  Currently, this will only happen
   if \c stream has not been opened with write intent.

   The format string is composed of zero or more directives: ordinary
   characters (not \c %), which are copied unchanged to the output
   stream; and conversion specifications, each of which results in
   fetching zero or more subsequent arguments.  Each conversion
   specification is introduced by the \c % character.  The arguments must
   properly correspond (after type promotion) with the conversion
   specifier.  After the \c %, the following appear in sequence:

   - Zero or more of the following flags:
      <ul>
      <li> \c # The value should be converted to an "alternate form".  For
            c, d, i, s, and u conversions, this option has no effect.
            For o conversions, the precision of the number is
            increased to force the first character of the output
            string to a zero (except if a zero value is printed with
            an explicit precision of zero).  For x and X conversions,
            a non-zero result has the string `0x' (or `0X' for X
            conversions) prepended to it.</li>
      <li> \c 0 (zero) Zero padding.  For all conversions, the converted
            value is padded on the left with zeros rather than blanks.
            If a precision is given with a numeric conversion (d, i,
            o, u, i, x, and X), the 0 flag is ignored.</li>
      <li> \c - A negative field width flag; the converted value is to be
            left adjusted on the field boundary.  The converted value
            is padded on the right with blanks, rather than on the
            left with blanks or zeros.  A - overrides a 0 if both are
            given.</li>
      <li> ' ' (space) A blank should be left before a positive number
            produced by a signed conversion (d, or i).</li>
      <li> \c + A sign must always be placed before a number produced by a
            signed conversion.  A + overrides a space if both are
            used.</li>
      </ul>
      
   -   An optional decimal digit string specifying a minimum field width.
       If the converted value has fewer characters than the field width, it
       will be padded with spaces on the left (or right, if the left-adjustment
       flag has been given) to fill out the field width.
   -   An optional precision, in the form of a period . followed by an
       optional digit string.  If the digit string is omitted, the
       precision is taken as zero.  This gives the minimum number of
       digits to appear for d, i, o, u, x, and X conversions, or the
       maximum number of characters to be printed from a string for \c s
       conversions.
   -   An optional \c l or \c h length modifier, that specifies that the
       argument for the d, i, o, u, x, or X conversion is a \c "long int"
       rather than \c int. The \c h is ignored, as \c "short int" is
       equivalent to \c int.
   -   A character that specifies the type of conversion to be applied.

   The conversion specifiers and their meanings are:

   - \c diouxX The int (or appropriate variant) argument is converted
           to signed decimal (d and i), unsigned octal (o), unsigned
           decimal (u), or unsigned hexadecimal (x and X) notation.
           The letters "abcdef" are used for x conversions; the
           letters "ABCDEF" are used for X conversions.  The
           precision, if any, gives the minimum number of digits that
           must appear; if the converted value requires fewer digits,
           it is padded on the left with zeros.
   - \c p  The <tt>void *</tt> argument is taken as an unsigned integer,
           and converted similarly as a <tt>%\#x</tt> command would do.
   - \c c  The \c int argument is converted to an \c "unsigned char", and the
           resulting character is written.
   - \c s  The \c "char *" argument is expected to be a pointer to an array
           of character type (pointer to a string).  Characters from
           the array are written up to (but not including) a
           terminating NUL character; if a precision is specified, no
           more than the number specified are written.  If a precision
           is given, no null character need be present; if the
           precision is not specified, or is greater than the size of
           the array, the array must contain a terminating NUL
           character.
   - \c %  A \c % is written.  No argument is converted.  The complete
           conversion specification is "%%".
   - \c eE The double argument is rounded and converted in the format
           \c "[-]d.ddde±dd" where there is one digit before the
           decimal-point character and the number of digits after it
           is equal to the precision; if the precision is missing, it
           is taken as 6; if the precision is zero, no decimal-point
           character appears.  An \e E conversion uses the letter \c 'E'
           (rather than \c 'e') to introduce the exponent.  The exponent
           always contains two digits; if the value is zero,
           the exponent is 00.
   - \c fF The double argument is rounded and converted to decimal notation
           in the format \c "[-]ddd.ddd", where the number of digits after the
           decimal-point character is equal to the precision specification.
           If the precision is missing, it is taken as 6; if the precision
           is explicitly zero, no decimal-point character appears.  If a
           decimal point appears, at least one digit appears before it.
   - \c gG The double argument is converted in style \c f or \c e (or
           \c F or \c E for \c G conversions).  The precision
           specifies the number of significant digits.  If the
           precision is missing, 6 digits are given; if the precision
           is zero, it is treated as 1.  Style \c e is used if the
           exponent from its conversion is less than -4 or greater
           than or equal to the precision.  Trailing zeros are removed
           from the fractional part of the result; a decimal point
           appears only if it is followed by at least one digit.
   - \c S  Similar to the \c s format, except the pointer is expected to
           point to a program-memory (ROM) string instead of a RAM string.

   In no case does a non-existent or small field width cause truncation of a
   numeric field; if the result of a conversion is wider than the field
   width, the field is expanded to contain the conversion result.

   Since the full implementation of all the mentioned features becomes
   fairly large, three different flavours of vfprintf() can be
   selected using linker options.  The default vfprintf() implements
   all the mentioned functionality except floating point conversions.
   A minimized version of vfprintf() is available that only implements
   the very basic integer and string conversion facilities, but only
   the \c # additional option can be specified using conversion
   flags (these flags are parsed correctly from the format
   specification, but then simply ignored).  This version can be
   requested using the following \ref gcc_minusW "compiler options":

   \code
   -Wl,-u,vfprintf -lprintf_min
   \endcode

   If the full functionality including the floating point conversions
   is required, the following options should be used:

   \code
   -Wl,-u,vfprintf -lprintf_flt -lm
   \endcode

   \par Limitations:
   - The specified width and precision can be at most 255.

   \par Notes:
   - For floating-point conversions, if you link default or minimized
     version of vfprintf(), the symbol \c ? will be output and double
     argument will be skiped. So you output below will not be crashed.
     For default version the width field and the "pad to left" ( symbol
     minus ) option will work in this case.
   - The \c hh length modifier is ignored (\c char argument is
     promouted to \c int). More exactly, this realization does not check
     the number of \c h symbols.
   - But the \c ll length modifier will to abort the output, as this
     realization does not operate \c long \c long arguments.
   - The variable width or precision field (an asterisk \c * symbol)
     is not realized and will to abort the output.

 */

extern int vfprintf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of \c vfprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vfprintf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fputc sends the character \c c (though given as type
   \c int) to \c stream.  It returns the character, or \c EOF in case
   an error occurred.
*/
extern int fputc(int __c, struct __file *__stream);



/* putc() function implementation, required by standard */
extern int putc(int __c, struct __file *__stream);

/* putchar() function implementation, required by standard */
extern int putchar(int __c);



/**
   The macro \c putc used to be a "fast" macro implementation with a
   functionality identical to fputc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fputc.
*/


/**
   The macro \c putchar sends character \c c to \c stdout.
*/


/**
   The function \c printf performs formatted output to stream
   \c stdout.  See \c vfprintf() for details.
*/
extern int printf(const char *__fmt, ...);

/**
   Variant of \c printf() that uses a \c fmt string that resides
   in program memory.
*/
extern int printf_P(const char *__fmt, ...);

/**
   The function \c vprintf performs formatted output to stream
   \c stdout, taking a variable argument list as in vfprintf().

   See vfprintf() for details.
*/
extern int vprintf(const char *__fmt, va_list __ap);

/**
   Variant of \c printf() that sends the formatted characters
   to string \c s.
*/
extern int sprintf(char *__s, const char *__fmt, ...);

/**
   Variant of \c sprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int sprintf_P(char *__s, const char *__fmt, ...);

/**
   Like \c sprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);

/**
   Variant of \c snprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int snprintf_P(char *__s, size_t __n, const char *__fmt, ...);

/**
   Like \c sprintf() but takes a variable argument list for the
   arguments.
*/
extern int vsprintf(char *__s, const char *__fmt, va_list ap);

/**
   Variant of \c vsprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsprintf_P(char *__s, const char *__fmt, va_list ap);

/**
   Like \c vsprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int vsnprintf(char *__s, size_t __n, const char *__fmt, va_list ap);

/**
   Variant of \c vsnprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsnprintf_P(char *__s, size_t __n, const char *__fmt, va_list ap);
/**
   The function \c fprintf performs formatted output to \c stream.
   See \c vfprintf() for details.
*/
extern int fprintf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of \c fprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int fprintf_P(struct __file *__stream, const char *__fmt, ...);

/**
   Write the string pointed to by \c str to stream \c stream.

   Returns 0 on success and EOF on error.
*/
extern int fputs(const char *__str, struct __file *__stream);

/**
   Variant of fputs() where \c str resides in program memory.
*/
extern int fputs_P(const char *__str, struct __file *__stream);

/**
   Write the string pointed to by \c str, and a trailing newline
   character, to \c stdout.
*/
extern int puts(const char *__str);

/**
   Variant of puts() where \c str resides in program memory.
*/
extern int puts_P(const char *__str);

/**
   Write \c nmemb objects, \c size bytes each, to \c stream.
   The first byte of the first object is referenced by \c ptr.

   Returns the number of objects successfully written, i. e.
   \c nmemb unless an output error occured.
 */
extern size_t fwrite(const void *__ptr, size_t __size, size_t __nmemb,
         struct __file *__stream);

/**
   The function \c fgetc reads a character from \c stream.  It returns
   the character, or \c EOF in case end-of-file was encountered or an
   error occurred.  The routines feof() or ferror() must be used to
   distinguish between both situations.
*/
extern int fgetc(struct __file *__stream);



/* getc() function implementation, required by standard */
extern int getc(struct __file *__stream);

/* getchar() function implementation, required by standard */
extern int getchar(void);



/**
   The macro \c getc used to be a "fast" macro implementation with a
   functionality identical to fgetc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fgetc.
*/


/**
   The macro \c getchar reads a character from \c stdin.  Return
   values and error handling is identical to fgetc().
*/


/**
   The ungetc() function pushes the character \c c (converted to an
   unsigned char) back onto the input stream pointed to by \c stream.
   The pushed-back character will be returned by a subsequent read on
   the stream.

   Currently, only a single character can be pushed back onto the
   stream.
   
   The ungetc() function returns the character pushed back after the
   conversion, or \c EOF if the operation fails.  If the value of the
   argument \c c character equals \c EOF, the operation will fail and
   the stream will remain unchanged.
*/
extern int ungetc(int __c, struct __file *__stream);

/**
   Read at most <tt>size - 1</tt> bytes from \c stream, until a
   newline character was encountered, and store the characters in the
   buffer pointed to by \c str.  Unless an error was encountered while
   reading, the string will then be terminated with a \c NUL
   character.

   If an error was encountered, the function returns NULL and sets the
   error flag of \c stream, which can be tested using ferror().
   Otherwise, a pointer to the string will be returned.  */
extern char *fgets(char *__str, int __size, struct __file *__stream);

/**
   Similar to fgets() except that it will operate on stream \c stdin,
   and the trailing newline (if any) will not be stored in the string.
   It is the caller's responsibility to provide enough storage to hold
   the characters read.  */
extern char *gets(char *__str);

/**
   Read \c nmemb objects, \c size bytes each, from \c stream,
   to the buffer pointed to by \c ptr.

   Returns the number of objects successfully read, i. e.
   \c nmemb unless an input error occured or end-of-file was
   encountered.  feof() and ferror() must be used to distinguish
   between these two conditions.
 */
extern size_t fread(void *__ptr, size_t __size, size_t __nmemb,
        struct __file *__stream);

/**
   Clear the error and end-of-file flags of \c stream.
 */
extern void clearerr(struct __file *__stream);


/* fast inlined version of clearerr() */



/**
   Test the end-of-file flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int feof(struct __file *__stream);


/* fast inlined version of feof() */



/**
   Test the error flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int ferror(struct __file *__stream);


/* fast inlined version of ferror() */



extern int vfscanf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of vfscanf() using a \c fmt string in program memory.
 */
extern int vfscanf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fscanf performs formatted input, reading the
   input data from \c stream.

   See vfscanf() for details.
 */
extern int fscanf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of fscanf() using a \c fmt string in program memory.
 */
extern int fscanf_P(struct __file *__stream, const char *__fmt, ...);

/**
   The function \c scanf performs formatted input from stream \c stdin.

   See vfscanf() for details.
 */
extern int scanf(const char *__fmt, ...);

/**
   Variant of scanf() where \c fmt resides in program memory.
 */
extern int scanf_P(const char *__fmt, ...);

/**
   The function \c vscanf performs formatted input from stream
   \c stdin, taking a variable argument list as in vfscanf().

   See vfscanf() for details.
*/
extern int vscanf(const char *__fmt, va_list __ap);

/**
   The function \c sscanf performs formatted input, reading the
   input data from the buffer pointed to by \c buf.

   See vfscanf() for details.
 */
extern int sscanf(const char *__buf, const char *__fmt, ...);

/**
   Variant of sscanf() using a \c fmt string in program memory.
 */
extern int sscanf_P(const char *__buf, const char *__fmt, ...);
# 938 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\stdio.h" 3
static __inline__ int fflush(struct __file *stream __attribute__((unused)))
{
 return 0;
}



}


/*@}*/

/*
 * The following constants are currently not used by avr-libc's
 * stdio subsystem.  They are defined here since the gcc build
 * environment expects them to be here.
 */
# 30 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 31 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 2

# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 33 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 2
# 42 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h"
class Print;

/* Printable...*/

class _Printable
{
public:
  virtual void print(Print &stream) const = 0;
};

/* ...Printable */

typedef struct
{
  char c;
}
fstr_t;

/* rmv: Use the macro below in preparation for the next Arduino release.
# define FSTR(s) ((fstr_t*)PSTR(s))
*/


class Print
{
  private:
    void printNumber(unsigned long, uint8_t);
    void printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { /*write_error = err;*/ }
  public:
    virtual size_t write(uint8_t) = 0;
    virtual void write(const char *str);
    virtual void write(const uint8_t *buffer, size_t size);

    void print(const String &);
    void print(const char[]);
    void print(char, int = 0);
    void print(unsigned char, int = 0);
    void print(int, int = 10);
    void print(unsigned int, int = 10);
    void print(long, int = 10);
    void print(unsigned long, int = 10);
    void print(double, int = 2);
    int print( fstr_t* );

    void println(const String &s);
    void println(const char[]);
    void println(char, int = 0);
    void println(unsigned char, int = 0);
    void println(int, int = 10);
    void println(unsigned int, int = 10);
    void println(long, int = 10);
    void println(unsigned long, int = 10);
    void println(double, int = 2);
    int println( fstr_t* );
    int println(void);
  public:
    /* Printable...*/
    void println(const _Printable &obj)
    { obj.print(*this); println(); }
    void print(const _Printable &obj)
    { obj.print(*this); };
    /* ...Printable */
};
# 25 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Stream.h" 2

class Stream : public Print
{
  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;
    virtual void flush() = 0;
};
# 32 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h" 2


class TinyDebugSerialWriter;
class TinyDebugSerial;


class TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
    }

    virtual void write( uint8_t )
    {
    }

  friend class TinyDebugSerial;
};

void TinyDebugSerialWriterInternalBug( void ) __attribute__((error("Serial (TinyDebugSerial) has an internal problem.  Contact the developer.")));

__attribute__((always_inline, unused)) static inline void TinyDebugSerialWriterBangOneByte( uint8_t value, uint8_t SER_REG, uint8_t SER_BIT, uint8_t lom, uint8_t him, uint8_t oloops, uint8_t iloops, uint8_t nops )
{
  if ( __builtin_constant_p( SER_REG )
      && __builtin_constant_p( SER_BIT )
      && __builtin_constant_p( lom )
      && __builtin_constant_p( him )
      && __builtin_constant_p( oloops )
      && __builtin_constant_p( iloops )
      && __builtin_constant_p( nops ) )
  {
      uint8_t i;
      uint8_t j;
      uint8_t ol;
      uint8_t il;
      uint8_t b; // Initialized to the low bits
      uint8_t hib;
      uint8_t m;

      b = ((value << 1) & 0x1F);
      hib = ((value >> 4) & 0x1F) | 0x10;

      asm volatile
      (
        "ldi   %[j], 2" "\n\t"
        "ldi   %[i], 5" "\n\t"
        "ldi   %[m], %[lom]" "\n\t"

        // Note: 8 MHz, 9600 baud ---> disabling interrupts does not appear to be necessary

        "cli" "\n\t"

        "rjmp  L%=ntop" "\n\t"

      "L%=btop: "
        "nop" "\n\t" // ---> 7
        "nop" "\n\t" //
        "nop" "\n\t" //
        "nop" "\n\t" //
        "nop" "\n\t" //
        "nop" "\n\t" //
        "nop" "\n\t" //

      "L%=ntop: "
        "ror   %[b]" "\n\t" // ---> 1

        "brcs  L%=bxh" "\n\t" // 1  (not taken) 
        "cbi   %[serreg], %[serbit]" "\n\t" // 2
        "rjmp  L%=bxz" "\n\t" // 2 

      "L%=bxh: " // 2  (taken) 
        "sbi   %[serreg], %[serbit]" "\n\t" // 2
        "nop" "\n\t" // 1 

                                                              // ---> 5
      "L%=bxz: "

        "ror   %[m]" "\n\t" // ---> 3 or 4 
        "brcc  L%=bnoe" "\n\t" //
        "nop" "\n\t" //
        "nop" "\n\t" //
      "L%=bnoe: "

                                                              // ---> 1
      ".if %[oloops] >= 1" "\n\t" // if oloops >= 1 then...
        "ldi   %[ol], %[oloops]" "\n\t" // 4*oloops + oloops*(3*iloops) or oloops*((3*iloops)+4)
      "L%=odelay: " "\n\t"
      ".endif" "\n\t"
        "ldi   %[il], %[iloops]" "\n\t" // if oloops == 0 then...
      "L%=idelay: " "\n\t" // (3*iloops)
        "dec   %[il]" "\n\t"
        "brne  L%=idelay" "\n\t"
        "nop" "\n\t"
      ".if %[oloops] >= 1" "\n\t"
        "dec   %[ol]" "\n\t"
        "brne  L%=odelay" "\n\t"
        "nop" "\n\t"
      ".endif" "\n\t"

      ".if %[nops] >= 1" "\n\t"
        "nop" "\n\t" //
      ".endif" "\n\t"
      ".if %[nops] >= 2" "\n\t"
        "nop" "\n\t" //
      ".endif" "\n\t"

        "dec   %[i]" "\n\t" // ---> 3
        "brne  L%=btop" "\n\t" //
        "nop" "\n\t" //

        "dec   %[j]" "\n\t" // ---> 7
        "breq  L%=bfin" "\n\t" //
        "ldi   %[i], 5" "\n\t" //
        "mov   %[b], %[hib]" "\n\t" //
        "ldi   %[m], %[him]" "\n\t" //
        "rjmp  L%=ntop" "\n\t" //

      "L%=bfin: "

        "sei" "\n\t"
        :
          [i] "=&r" ( i ),
          [j] "=&r" ( j ),
          [ol] "=&r" ( ol ),
          [il] "=&r" ( il ),
          [m] "=&r" ( m )
        :
          [b] "r" ( b ),
          [hib] "r" ( hib ),
          [serreg] "I" ( SER_REG ),
          [serbit] "M" ( SER_BIT ),
          [lom] "M" ( lom ),
          [him] "M" ( him ),
          [oloops] "M" ( oloops ),
          [iloops] "M" ( iloops ),
          [nops] "M" ( nops )
        :
          "r31",
          "r30"
      );
  }
  else
  {
    TinyDebugSerialWriterInternalBug();
  }
}


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_1_9600 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 4, 2, 0, 28, 2 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_1_38400 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 0, 0, 0, 2, 0 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_1_115200 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      asm volatile
      (
        "cli" "\n\t"

        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- 0 */
        "ror   %[value]" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "brcs  L%=b0h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- st is 9 cycles */
        "rjmp  L%=b0z" "\n\t" /* 2 */
      "L%=b0h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- st is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b0z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */

        "brcs  L%=b1h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b0 is 8 cycles */
        "rjmp  L%=b1z" "\n\t" /* 2 */
      "L%=b1h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b0 is 8 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b1z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "brcs  L%=b2h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b1 is 9 cycles */
        "rjmp  L%=b2z" "\n\t" /* 2 */
      "L%=b2h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b1 is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b2z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "brcs  L%=b3h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b2 is 9 cycles */
        "rjmp  L%=b3z" "\n\t" /* 2 */
      "L%=b3h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b2 is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b3z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */

        "brcs  L%=b4h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b3 is 8 cycles */
        "rjmp  L%=b4z" "\n\t" /* 2 */
      "L%=b4h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b3 is 8 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b4z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "brcs  L%=b5h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b4 is 9 cycles */
        "rjmp  L%=b5z" "\n\t" /* 2 */
      "L%=b5h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b4 is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b5z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "brcs  L%=b6h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b5 is 9 cycles */
        "rjmp  L%=b6z" "\n\t" /* 2 */
      "L%=b6h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b5 is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b6z: "
        "ror   %[value]" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */

        "brcs  L%=b7h" "\n\t" /* 1  (not taken) */
        "nop" "\n\t" /* 1 */
        "cbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b6 is 8 cycles */
        "rjmp  L%=b7z" "\n\t" /* 2 */
      "L%=b7h: " /* 2  (taken) */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b6 is 8 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
      "L%=b7z: "
        "nop" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */

        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "sbi   %[serreg], %[serbit]" "\n\t" /* 2  <--- b7 is 9 cycles */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
        "nop" "\n\t" /* 1 */
                                                              /*    <---sp is 9 cycles */

        "sei" "\n\t"

        :
        :
          [value] "r" ( value ),
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
      );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_8_9600 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 9, 4, 3, 89, 0 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_8_38400 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 9, 4, 0, 62, 2 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_8_115200 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 10, 20, 0, 16, 1 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_16_9600 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 22, 27, 6, 90, 2 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_16_38400 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 22, 27, 5, 25, 1 );
    }
};


template
  <
    uint8_t SER_REG,
    uint8_t SER_BIT
  >
class TinyDebugSerialWriter_16_115200 : public TinyDebugSerialWriter
{
  protected:

    virtual void init( void )
    {
      asm volatile
      (
        "sbi   %[serreg]-1, %[serbit]" "\n\t"
        "sbi   %[serreg], %[serbit]" "\n\t"
        :
        :
          [serreg] "I" ( SER_REG ),
          [serbit] "I" ( SER_BIT )
        :
      );
    }

    virtual void write( uint8_t value )
    {
      TinyDebugSerialWriterBangOneByte( value, SER_REG, SER_BIT, 30, 31, 0, 39, 1 );
    }
};
# 615 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h"
    // port B bit 2 (PB2)
# 639 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/TinyDebugSerial.h"
  typedef TinyDebugSerialWriter_16_9600<0x18,2> TinyDebugSerialWriter_9600;
  typedef TinyDebugSerialWriter_16_38400<0x18,2> TinyDebugSerialWriter_38400;
  typedef TinyDebugSerialWriter_16_115200<0x18,2> TinyDebugSerialWriter_115200;

/*
  9600...
    6, 90, 2
    7, 77, 1
  38400...
    1, 130, 2
    5, 25, 1
    18, 6, 0
  115200...
    0, 39, 1
    1, 38, 0
    2, 18, 2
    9, 3, 1
*/





extern TinyDebugSerialWriter_9600 tdsw9600;
extern TinyDebugSerialWriter_38400 tdsw38400;
extern TinyDebugSerialWriter_115200 tdsw115200;

void TinyDebugSerialBadBaud( void ) __attribute__((error("Serial (TinyDebugSerial) supports three baud rates: 9600, 38400, or 115200.")));
void TinyDebugSerialBaudMustBeConstant( void ) __attribute__((error("The baud rate for Serial (TinyDebugSerial) cannot be changed at run-time.  Use 9600, 38400, or 115200.")));

class TinyDebugSerial : public Stream
{
  protected:

    TinyDebugSerialWriter* _writer;

    void useStub( void );

  public:

    TinyDebugSerial( void );

    inline void begin( long baud )
    {
      if ( __builtin_constant_p( baud ) )
      {
        if ( baud == 9600 )
        {
          _writer = &tdsw9600;
        }
        else if ( baud == 38400 )
        {
          _writer = &tdsw38400;
        }
        else if ( baud == 115200 )
        {
          _writer = &tdsw115200;
        }
        else
        {
          TinyDebugSerialBadBaud();
        }
      }
      else
      {
        TinyDebugSerialBaudMustBeConstant();
      }
      _writer->init();
    }

    void end( void )
    {
      useStub();
    }

    virtual int available( void )
    {
      return( 0 );
    }

    virtual int peek( void )
    {
      return( -1 );
    }

    virtual int read( void )
    {
      return( -1 );
    }

    virtual void flush( void )
    {
    }

    virtual size_t write( uint8_t c )
    {
      _writer->write( c );
      return( 1 );
    }

    using Print::write; // pull in write(str) and write(buf, size) from Print
};


extern TinyDebugSerial Serial;
# 19 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/HardwareSerial.h" 1
/*
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 28 September 2010 by Mark Sproul
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 26 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/HardwareSerial.h" 2

# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/core_build_options.h" 1
/*==============================================================================

  core_build_options.h - Various options for mapping functionality to hardware.

  Copyright 2010 Rowdy Dog Software.

  This file is part of Arduino-Tiny.

  Arduino-Tiny is free software: you can redistribute it and/or modify it 
  under the terms of the GNU Lesser General Public License as published by 
  the Free Software Foundation, either version 3 of the License, or (at your
  option) any later version.

  Arduino-Tiny is distributed in the hope that it will be useful, but 
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License 
  along with Arduino-Tiny.  If not, see <http://www.gnu.org/licenses/>.

==============================================================================*/
# 28 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/HardwareSerial.h" 2
# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 29 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/HardwareSerial.h" 2

struct ring_buffer;

class HardwareSerial : public Stream
{
  private:
    ring_buffer *_rx_buffer;
    volatile uint8_t *_ubrrh;
    volatile uint8_t *_ubrrl;
    volatile uint8_t *_ucsra;
    volatile uint8_t *_ucsrb;
    volatile uint8_t *_udr;
    uint8_t _rxen;
    uint8_t _txen;
    uint8_t _rxcie;
    uint8_t _udre;
    uint8_t _u2x;
  public:
    HardwareSerial(ring_buffer *rx_buffer,
      volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
      volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
      volatile uint8_t *udr,
      uint8_t rxen, uint8_t txen, uint8_t rxcie, uint8_t udre, uint8_t u2x);
    void begin(long);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    using Print::write; // pull in write(str) and write(buf, size) from Print
};
# 20 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/WProgram.h" 2

uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);



unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin = 255);

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned int);
long map(long, long, long, long, long);

/*
  fix?  On the Mega processors, the analogs are also "extended" digital pins.
  To (sort of) work the same way with this core, the following constants 
  would have to be valid arguments to digitalRead, digitalWrite, and pinMode 
  ("the digitals").  Which means the digitals would have to check for pins 
  over A0 and then subtract A0.  The current plan is to wait until someone 
  wants this feature.
*/

const static uint8_t A0 = ((5)+1) + 0;



const static uint8_t A1 = ((5)+1) + 1;



const static uint8_t A2 = ((5)+1) + 2;



const static uint8_t A3 = ((5)+1) + 3;
# 5 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Arduino.h" 2
# 2 "C:\\Users\\bakalski\\AppData\\Local\\Temp\\buildf372ce70a2333d7def23a95e9bef4828.tmp\\sketch\\Irdroid-HTPC.ino.cpp" 2
# 1 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
# 1 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino"
// **** TSOP is connected to port PB2 **** //////

# 1 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\EEPROM-master/EEPROM.h" 1
/*
  EEPROM.h - EEPROM library
  Original Copyright (c) 2006 David A. Mellis.  All right reserved.
  New version by Christopher Andrews 2015.
  This copy has minor modificatons for use with Teensy, by Paul Stoffregen

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 26 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\EEPROM-master/EEPROM.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 1 3
/* Copyright (c) 2002, 2003, 2004, 2007 Marek Michalkiewicz
   Copyright (c) 2005, 2006 Bjoern Haase
   Copyright (c) 2008 Atmel Corporation
   Copyright (c) 2008 Wouter van Gulik
   Copyright (c) 2009 Dmitry Xmelkov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 2 3
# 570 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* A null pointer constant.  */
# 412 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\lib\\gcc\\avr\\4.8.1\\include\\stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 571 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 2 3


/** \defgroup avr_eeprom <avr/eeprom.h>: EEPROM handling
    \code #include <avr/eeprom.h> \endcode

    This header file declares the interface to some simple library
    routines suitable for handling the data EEPROM contained in the
    AVR microcontrollers.  The implementation uses a simple polled
    mode interface.  Applications that require interrupt-controlled
    EEPROM access to ensure that no time will be wasted in spinloops
    will have to deploy their own implementation.

    \par Notes:

    - In addition to the write functions there is a set of update ones.
    This functions read each byte first and skip the burning if the
    old value is the same with new.  The scaning direction is from
    high address to low, to obtain quick return in common cases.

    - All of the read/write functions first make sure the EEPROM is
    ready to be accessed.  Since this may cause long delays if a
    write operation is still pending, time-critical applications
    should first poll the EEPROM e. g. using eeprom_is_ready() before
    attempting any actual I/O.  But this functions are not wait until
    SELFPRGEN in SPMCSR becomes zero.  Do this manually, if your
    softwate contains the Flash burning.

    - As these functions modify IO registers, they are known to be
    non-reentrant.  If any of these functions are used from both,
    standard and interrupt context, the applications must ensure
    proper protection (e.g. by disabling interrupts before accessing
    them).

    - All write functions force erase_and_write programming mode.
    
    - For Xmega the EEPROM start address is 0, like other architectures.
    The reading functions add the 0x2000 value to use EEPROM mapping into
    data space.
 */


extern "C" {
# 623 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
/** \def EEMEM
    \ingroup avr_eeprom
    Attribute expression causing a variable to be allocated within the
    .eeprom section.	*/


/** \def eeprom_is_ready
    \ingroup avr_eeprom
    \returns 1 if EEPROM is ready for a new read/write operation, 0 if not.
 */
# 646 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\eeprom.h" 3
/** \def eeprom_busy_wait
    \ingroup avr_eeprom
    Loops until the eeprom is no longer busy.
    \returns Nothing.
 */



/** \ingroup avr_eeprom
    Read one byte from EEPROM address \a __p.
 */
uint8_t __eerd_byte_tn85 (const uint8_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 16-bit word (little endian) from EEPROM address \a __p.
 */
uint16_t __eerd_word_tn85 (const uint16_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 32-bit double word (little endian) from EEPROM address \a __p.
 */
uint32_t __eerd_dword_tn85 (const uint32_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one float value (little endian) from EEPROM address \a __p.
 */
float __eerd_float_tn85 (const float *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read a block of \a __n bytes from EEPROM address \a __src to SRAM
    \a __dst.
 */
void __eerd_block_tn85 (void *__dst, const void *__src, size_t __n);


/** \ingroup avr_eeprom
    Write a byte \a __value to EEPROM address \a __p.
 */
void __eewr_byte_tn85 (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Write a word \a __value to EEPROM address \a __p.
 */
void __eewr_word_tn85 (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Write a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eewr_dword_tn85 (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Write a float \a __value to EEPROM address \a __p.
 */
void __eewr_float_tn85 (float *__p, float __value);

/** \ingroup avr_eeprom
    Write a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eewr_block_tn85 (const void *__src, void *__dst, size_t __n);


/** \ingroup avr_eeprom
    Update a byte \a __value to EEPROM address \a __p.
 */
void __eeupd_byte_tn85 (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Update a word \a __value to EEPROM address \a __p.
 */
void __eeupd_word_tn85 (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Update a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eeupd_dword_tn85 (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Update a float \a __value to EEPROM address \a __p.
 */
void __eeupd_float_tn85 (float *__p, float __value);

/** \ingroup avr_eeprom
    Update a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eeupd_block_tn85 (const void *__src, void *__dst, size_t __n);


/** \name IAR C compatibility defines	*/
/*@{*/

/** \def _EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def __EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def _EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/** \def __EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/*@}*/


}
# 27 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\EEPROM-master/EEPROM.h" 2
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 28 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\EEPROM-master/EEPROM.h" 2


/***
    EERef class.

    This object references an EEPROM cell.
    Its purpose is to mimic a typical byte of RAM, however its storage is the EEPROM.
    This class has an overhead of two bytes, similar to storing a pointer to an EEPROM cell.
***/

struct EERef{

    EERef( const int index )
        : index( index ) {}

    //Access/read members.
    uint8_t operator*() const { return __eerd_byte_tn85( (uint8_t*) index ); }
    operator const uint8_t() const { return **this; }

    //Assignment/write members.
    EERef &operator=( const EERef &ref ) { return *this = *ref; }
    EERef &operator=( uint8_t in ) { return __eewr_byte_tn85( (uint8_t*) index, in ), *this; }
    EERef &operator +=( uint8_t in ) { return *this = **this + in; }
    EERef &operator -=( uint8_t in ) { return *this = **this - in; }
    EERef &operator *=( uint8_t in ) { return *this = **this * in; }
    EERef &operator /=( uint8_t in ) { return *this = **this / in; }
    EERef &operator ^=( uint8_t in ) { return *this = **this ^ in; }
    EERef &operator %=( uint8_t in ) { return *this = **this % in; }
    EERef &operator &=( uint8_t in ) { return *this = **this & in; }
    EERef &operator |=( uint8_t in ) { return *this = **this | in; }
    EERef &operator <<=( uint8_t in ) { return *this = **this << in; }
    EERef &operator >>=( uint8_t in ) { return *this = **this >> in; }

    EERef &update( uint8_t in ) { return in != *this ? *this = in : *this; }

    /** Prefix increment/decrement **/
    EERef& operator++() { return *this += 1; }
    EERef& operator--() { return *this -= 1; }

    /** Postfix increment/decrement **/
    uint8_t operator++ (int) {
        uint8_t ret = **this;
        return ++(*this), ret;
    }

    uint8_t operator-- (int) {
        uint8_t ret = **this;
        return --(*this), ret;
    }

    int index; //Index of current EEPROM cell.
};

/***
    EEPtr class.

    This object is a bidirectional pointer to EEPROM cells represented by EERef objects.
    Just like a normal pointer type, this can be dereferenced and repositioned using
    increment/decrement operators.
***/

struct EEPtr{

    EEPtr( const int index )
        : index( index ) {}

    operator const int() const { return index; }
    EEPtr &operator=( int in ) { return index = in, *this; }

    //Iterator functionality.
    bool operator!=( const EEPtr &ptr ) { return index != ptr.index; }
    EERef operator*() { return index; }

    /** Prefix & Postfix increment/decrement **/
    EEPtr& operator++() { return ++index, *this; }
    EEPtr& operator--() { return --index, *this; }
    EEPtr operator++ (int) { return index++; }
    EEPtr operator-- (int) { return index--; }

    int index; //Index of current EEPROM cell.
};

/***
    EEPROMClass class.

    This object represents the entire EEPROM space.
    It wraps the functionality of EEPtr and EERef into a basic interface.
    This class is also 100% backwards compatible with earlier Arduino core releases.
***/

struct EEPROMClass{





    //Basic user access methods.
    EERef operator[]( const int idx ) { return idx; }
    uint8_t read( int idx ) { return EERef( idx ); }
    void write( int idx, uint8_t val ) { (EERef( idx )) = val; }
    void update( int idx, uint8_t val ) { EERef( idx ).update( val ); }

    //STL and C++11 iteration capability.
    EEPtr begin() { return 0x00; }
    EEPtr end() { return length(); } //Standards requires this to be the item after the last valid entry. The returned pointer is invalid.
    uint16_t length() { return 0x1FF + 1; }

    //Functionality to 'get' and 'put' objects to and from EEPROM.
    template< typename T > T &get( int idx, T &t ){
        EEPtr e = idx;
        uint8_t *ptr = (uint8_t*) &t;
        for( int count = sizeof(T) ; count ; --count, ++e ) *ptr++ = *e;
        return t;
    }

    template< typename T > const T &put( int idx, const T &t ){
        const uint8_t *ptr = (const uint8_t*) &t;



        EEPtr e = idx;
        for( int count = sizeof(T) ; count ; --count, ++e ) (*e).update( *ptr++ );

        return t;
    }
};

static EEPROMClass EEPROM __attribute__ ((unused));
# 4 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino" 2
//Set to 0 after finding your codes
bool DEBUG = 0x0;

//Specify your remote codes here:

uint32_t REMOTE_UP = 0;
uint32_t REMOTE_DOWN = 0;
uint32_t REMOTE_LEFT = 0;
uint32_t REMOTE_RIGHT = 0;
uint32_t REMOTE_OK=0;
uint32_t REMOTE_RETURN =0;
uint32_t REMOTE_PLAY =0;
uint32_t REMOTE_NEXT =0;
uint32_t REMOTE_PREVIOUS =0;


unsigned int counter = 0;

// Variables will change:
int buttonPushCounter = 0; // counter for the number of button presses
int buttonState = 0; // current state of the button
int lastButtonState = 0; // previous state of the button





volatile uint8_t m = 0, tcnt = 0, startflag = 0;
uint32_t irdata = 0, keydata = 0 ;
uint32_t key_tmp = 0;
bool pressed = 0x0;
bool complete = 0x0;
unsigned int count;
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\delay.h" 1 3
/* Copyright (c) 2005 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */





# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 42 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 43 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay_basic.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay_basic.h" 2 3


static inline void _delay_loop_1(uint8_t __count) __attribute__((always_inline));
static inline void _delay_loop_2(uint16_t __count) __attribute__((always_inline));


/** \file */
/** \defgroup util_delay_basic <util/delay_basic.h>: Basic busy-wait delay loops
    \code
    #include <util/delay_basic.h>
    \endcode

    The functions in this header file implement simple delay loops
    that perform a busy-waiting.  They are typically used to
    facilitate short delays in the program execution.  They are
    implemented as count-down loops with a well-known CPU cycle
    count per loop iteration.  As such, no other processing can
    occur simultaneously.  It should be kept in mind that the
    functions described here do not disable interrupts.

    In general, for long delays, the use of hardware timers is
    much preferrable, as they free the CPU, and allow for
    concurrent processing of other events while the timer is
    running.  However, in particular for very short delays, the
    overhead of setting up a hardware timer is too much compared
    to the overall delay time.

    Two inline functions are provided for the actual delay algorithms.

*/

/** \ingroup util_delay_basic

    Delay loop using an 8-bit counter \c __count, so up to 256
    iterations are possible.  (The value 256 would have to be passed
    as 0.)  The loop executes three CPU cycles per iteration, not
    including the overhead the compiler needs to setup the counter
    register.

    Thus, at a CPU speed of 1 MHz, delays of up to 768 microseconds
    can be achieved.
*/
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}

/** \ingroup util_delay_basic

    Delay loop using a 16-bit counter \c __count, so up to 65536
    iterations are possible.  (The value 65536 would have to be
    passed as 0.)  The loop executes four CPU cycles per iteration,
    not including the overhead the compiler requires to setup the
    counter register pair.

    Thus, at a CPU speed of 1 MHz, delays of up to about 262.1
    milliseconds can be achieved.
 */
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 44 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 45 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3

/** \file */
/** \defgroup util_delay <util/delay.h>: Convenience functions for busy-wait delay loops
    \code
    #define F_CPU 1000000UL  // 1 MHz
    //#define F_CPU 14.7456E6
    #include <util/delay.h>
    \endcode

    \note As an alternative method, it is possible to pass the
    F_CPU macro down to the compiler from the Makefile.
    Obviously, in that case, no \c \#define statement should be
    used.

    The functions in this header file are wrappers around the basic
    busy-wait functions from <util/delay_basic.h>.  They are meant as
    convenience functions where actual time values can be specified
    rather than a number of cycles to wait for.  The idea behind is
    that compile-time constant expressions will be eliminated by
    compiler optimization so floating-point expressions can be used
    to calculate the number of delay cycles needed based on the CPU
    frequency passed by the macro F_CPU.

    \note In order for these functions to work as intended, compiler
    optimizations <em>must</em> be enabled, and the delay time
    <em>must</em> be an expression that is a known constant at
    compile-time.  If these requirements are not met, the resulting
    delay will be much longer (and basically unpredictable), and
    applications that otherwise do not use floating-point calculations
    will experience severe code bloat by the floating-point library
    routines linked into the application.

    The functions available allow the specification of microsecond, and
    millisecond delays directly, using the application-supplied macro
    F_CPU as the CPU clock frequency (in Hertz).

*/


static inline void _delay_us(double __us) __attribute__((always_inline));
static inline void _delay_ms(double __ms) __attribute__((always_inline));
# 101 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
# 1 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 102 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 2 3


/**
   \ingroup util_delay

   Perform a delay of \c __ms milliseconds, using _delay_loop_2().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 262.14 ms / F_CPU in MHz.

   When the user request delay which exceed the maximum possible one,
   _delay_ms() provides a decreased resolution functionality. In this
   mode _delay_ms() will work with a resolution of 1/10 ms, providing
   delays up to 6.5535 seconds (independent from CPU frequency).  The
   user will not be informed about decreased resolution.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 ms/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflows results in
   no delay i.e., 0ms.

   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.

   Note: The new implementation of _delay_ms(double __ms) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible. 
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_ms(double __ms)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16500000L) / 1e3) * __ms;
# 159 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 186 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
}

/**
   \ingroup util_delay

   Perform a delay of \c __us microseconds, using _delay_loop_1().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 768 us / F_CPU in MHz.

   If the user requests a delay greater than the maximal possible one,
   _delay_us() will automatically call _delay_ms() instead.  The user
   will not be informed about this case.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 us/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflow results in
   no delay i.e., 0us.
  
   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.
 
   Note: The new implementation of _delay_us(double __us) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible.
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_us(double __us)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16500000L) / 1e6) * __us;
# 241 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 268 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\util\\delay.h" 3
}
# 38 "c:\\program files (x86)\\arduino\\hardware\\tools\\avr\\avr\\include\\avr\\delay.h" 2 3
# 38 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino" 2
# 1 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\TrinketHidCombo/TrinketHidCombo.h" 1
/*
This is the part of the TrinketHidCombo code that is exposed to the user

Copyright (c) 2013 Adafruit Industries
All rights reserved.

TrinketHidCombo is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of
the License, or (at your option) any later version.

TrinketHidCombo is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with TrinketHidCombo. If not, see
<http://www.gnu.org/licenses/>.
*/





# 1 "C:\\Users\\bakalski\\AppData\\Local\\Arduino15\\packages\\digistump\\hardware\\avr\\1.6.7\\cores\\tiny/Print.h" 1
/*
  Print.h - Base class that provides print() and println()
  Copyright (c) 2008 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 20-11-2010 by B.Cook ...

    http://arduiniana.org/libraries/flash/
    Printable support thanks to Mikal Hart
*/
# 27 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\TrinketHidCombo/TrinketHidCombo.h" 2


extern "C" {



}


class Trinket_Hid_Combo : public Print
{
 private:
 public:
  Trinket_Hid_Combo(); // empty constructor, ignore me
  void begin(); // starts the USB driver, causes re-enumeration
  void poll(); // this (or "press" something) must be called at least once every 10ms
  char isConnected(); // checks if USB is connected, 0 if not connected

  // makes a mouse movement
  void mouseMove(signed char x, signed char y, uint8_t buttonMask);

  // presses up to 5 keys, and modifiers (modifiers are keys like shift, CTRL, etc)
  void pressKey(uint8_t modifiers, uint8_t keycode1, uint8_t keycode2, uint8_t keycode3, uint8_t keycode4, uint8_t keycode5);
  void pressKey(uint8_t modifiers, uint8_t keycode1, uint8_t keycode2, uint8_t keycode3, uint8_t keycode4);
  void pressKey(uint8_t modifiers, uint8_t keycode1, uint8_t keycode2, uint8_t keycode3);
  void pressKey(uint8_t modifiers, uint8_t keycode1, uint8_t keycode2);
  void pressKey(uint8_t modifiers, uint8_t keycode1);

  // presses a list of keys, do not exceed 5 keys
  void pressKeys(uint8_t modifiers, uint8_t* keycodes, uint8_t sz);

  // type out a single ASCII character
  void typeChar(uint8_t ascii);

  void pressMultimediaKey(uint8_t key);
  void pressSystemCtrlKey(uint8_t key);

  // returns the state of the three LEDs on a keyboard (caps/num/scroll lock)
  uint8_t getLEDstate();

  // inherit from "Print", these two write functions are implemented
  virtual size_t write(uint8_t);
  using Print::write;
  // other "print" and "println" functions are automatically available
  using Print::print;
  using Print::println;
};

// helps translate ASCII characters into keycode and modifier combinations, while taking into account whether or not caps lock is on
void ASCII_to_keycode(uint8_t ascii, uint8_t ledState, uint8_t* modifier, uint8_t* keycode);

// an instance that the user can use
extern Trinket_Hid_Combo TrinketHidCombo;

// use these masks with the "move" function




// LED state masks




// some convenience definitions for modifier keys
# 101 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\TrinketHidCombo/TrinketHidCombo.h"
// some more keycodes
# 184 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\TrinketHidCombo/TrinketHidCombo.h"
// multimedia keys
# 209 "C:\\Users\\bakalski\\Documents\\Arduino\\libraries\\TrinketHidCombo/TrinketHidCombo.h"
// system control keys
# 39 "C:\\Users\\bakalski\\Documents\\GitHub\\Irdroid-HTPC\\Software\\Firmware\\Irdroid-HTPC\\Irdroid-HTPC.ino" 2

long EEPROMReadlong(int address) {
  long four = EEPROM.read(address);
  long three = EEPROM.read(address + 1);
  long two = EEPROM.read(address + 2);
  long one = EEPROM.read(address + 3);

  return ((four << 0) & 0xFF) + ((three << 8) & 0xFFFF) + ((two << 16) & 0xFFFFFF) + ((one << 24) & 0xFFFFFFFF);
}

void EEPROMWritelong(int address, uint32_t value) {
  byte four = (value & 0xFF);
  byte three = ((value >> 8) & 0xFF);
  byte two = ((value >> 16) & 0xFF);
  byte one = ((value >> 24) & 0xFF);

  EEPROM.write(address, four);
  EEPROM.write(address + 1, three);
  EEPROM.write(address + 2, two);
  EEPROM.write(address + 3, one);
}




void setup() {
  //delay(30000);
  pinMode(0, 0x2);
  count = 9;
   REMOTE_UP = EEPROMReadlong(70);
   REMOTE_DOWN = EEPROMReadlong(75);
   REMOTE_LEFT = EEPROMReadlong(80);
   REMOTE_RIGHT = EEPROMReadlong(85);
   REMOTE_OK = EEPROMReadlong(90);
   REMOTE_RETURN = EEPROMReadlong(95);
   REMOTE_PLAY = EEPROMReadlong(100);

   REMOTE_NEXT = EEPROMReadlong(110);
   REMOTE_PREVIOUS = EEPROMReadlong(115);
  (*(volatile uint8_t *)((0x17) + 0x20)) |= (1 << 1); //P1 (LED) OUT not used in sketch
  (*(volatile uint8_t *)((0x18) + 0x20)) |= 1 << 2; // a PB2 lift will not hurt.
   (*(volatile uint8_t *)((0x15) + 0x20)) = (1<<3) | (1<<4);
  // Enable PCINT interrupts
  (*(volatile uint8_t *)((0x3B) + 0x20)) = (1<<5);
  (*(volatile uint8_t *)((0x3B) + 0x20)) |= 1 << 6; //interrupt int0 enable
   __asm__ __volatile__ ("sei" ::: "memory");
  (*(volatile uint8_t *)((0x35) + 0x20)) |= 1 << 0; //Any logical change on INT0 generates an interrupt request
  (*(volatile uint8_t *)((0x2C) + 0x20)) |= 1 << 0; (*(volatile uint8_t *)((0x2A) + 0x20)) = 0;
  (*(volatile uint8_t *)((0x33) + 0x20)) = (1 << 2) | (1 << 0); // divider /1024
  (*(volatile uint8_t *)((0x39) + 0x20)) = 1 << 1; //interrupt Timer/Counter1 Overflow  enable
  TrinketHidCombo.begin(); // start the USB device engine and enumerate




}

void loop() {



   buttonState = digitalRead(0);

     // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == 0x0) {


    DEBUG = 0x1;
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;


        count--;


  // TrinketHidCombo.println(count);

    } else {
      // if the current state is LOW then the button went from on to off:

      DEBUG = 0x0;





    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

  if (complete) { // if a code has been received

    key_tmp = 0;

    if (keydata != 0) //if a code is new
    {
      Action(keydata);
      pressed = 0x1;
    }



   //  TrinketHidCombo.mouseMove(lastMouseX, lastMouseY, 0);

    complete = 0x0;
    ms_delay(150);// to balance repeating/input delay of the remote

  }
  else if (pressed)
  {
    digitalWrite(1, 0x0);

      TrinketHidCombo.pressKey(0, 0);
    pressed = 0x0;
  }
  else
  {
    _delay_ms(1);//restrain USB polling on empty cycles
    TrinketHidCombo.poll(); // check if USB needs anything done
  }

}

extern "C" void __vector_1 (void) __attribute__ ((signal,used, externally_visible)) ; void __vector_1 (void) {
  if ((*(volatile uint8_t *)((0x16) + 0x20)) & 1 << 2) { // If log1
    (*(volatile uint8_t *)((0x32) + 0x20)) = 0;
  }
  else {
    tcnt = (*(volatile uint8_t *)((0x32) + 0x20)); // If log0
    if (startflag) {
      if (30 > tcnt && tcnt > 2) {
        if (tcnt > 15 && m < 32) {
          irdata |= (2147483648 >> m);
        }
        m++;
      }
    }
    else startflag = 1;
  }
}
extern "C" void __vector_5 (void) __attribute__ ((signal,used, externally_visible)) ; void __vector_5 (void) {
  if (m)
    complete = 0x1; m = 0; startflag = 0; keydata = irdata; irdata = 0; // if the index is not 0, then create an end flag

}

void ms_delay(uint16_t x) // USB polling delay function
{
  for (uint16_t m = 0; m < (x / 10); m++) {
    _delay_ms(10);
    TrinketHidCombo.poll();
  }
}

void Action(uint32_t keycode)
{

  if(keycode == REMOTE_UP && !DEBUG ){
    TrinketHidCombo.pressKey(0, 0x52);
    digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_DOWN && !DEBUG){
    TrinketHidCombo.pressKey(0, 0x51);
     digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_LEFT && !DEBUG){
    TrinketHidCombo.pressKey(0, 0x50);
     digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_RIGHT && !DEBUG){
    TrinketHidCombo.pressKey(0, 0x4F);
     digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_OK && !DEBUG){
    TrinketHidCombo.pressKey(0, 0x28);
     digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_RETURN && !DEBUG){
    TrinketHidCombo.pressKey(0, 0x2A);
     digitalWrite(1, 0x1);
    return;
  }
  if(keycode == REMOTE_PLAY && !DEBUG){
    TrinketHidCombo.pressMultimediaKey(0xCD);
     digitalWrite(1, 0x1);
    return;
  }
   if(keycode == REMOTE_NEXT && !DEBUG){
   TrinketHidCombo.pressMultimediaKey(0xB5);
     digitalWrite(1, 0x1);
    return;
  }
   if(keycode == REMOTE_PREVIOUS && !DEBUG){
    TrinketHidCombo.pressMultimediaKey(0xB6);
     digitalWrite(1, 0x1);
    return;
  }
  switch (keycode)
  {





    default:
      if(DEBUG){
       // TrinketHidCombo.println(keydata, HEX);
      key_tmp = 0;
      key_tmp = keycode;

       if(count==8){
          EEPROMWritelong(70, key_tmp);
          delay(100);
           REMOTE_UP = key_tmp;

       }
       if(count==7){
          EEPROMWritelong(75, key_tmp);
          delay(100);
          REMOTE_DOWN = key_tmp;

       }
        if(count==6){
          EEPROMWritelong(80, key_tmp);
          delay(100);
           REMOTE_LEFT = key_tmp;
       }
       if(count==5){
          EEPROMWritelong(85, key_tmp);
          delay(100);
          REMOTE_RIGHT = key_tmp;

       }
        if(count==4){
          EEPROMWritelong(90, key_tmp);
          delay(100);
           REMOTE_OK = key_tmp;
       }
       if(count==3){
          EEPROMWritelong(95, key_tmp);
          delay(100);
          REMOTE_RETURN = key_tmp;
        //  count = 6;     
       }
       if(count==2){
          EEPROMWritelong(100, key_tmp);
          delay(200);
          REMOTE_PLAY = key_tmp;

       }

        if(count==1){
          EEPROMWritelong(110, key_tmp);
          delay(200);
          REMOTE_NEXT = key_tmp;

       }
        if(count==0){
          EEPROMWritelong(115, key_tmp);
          delay(200);
          REMOTE_PREVIOUS = key_tmp;
          count = 9;

       }




      }else{
        return;
      }

  }
  digitalWrite(1, 0x1);
}
