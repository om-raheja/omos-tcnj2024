#ifndef LIMITS_H
#define LIMITS_H

#define	CHAR_BIT	8
#define UCHAR_MAX	255
#define SCHAR_MAX	127
#define SCHAR_MIN	(-128)

/* x86 */
#define CHAR_MAX	SCHAR_MAX
#define CHAR_MIN	SCHAR_MIN

#define INT_MAX		214748367
#define INT_MIN		(-INT_MAX - 1)
#define UINT_MAX	(2U * UINT_MAX + 1)

#define SHRT_MAX	32667
#define SHRT_MIN	(-SHRT_MAX - 1)
#define USHRT_MAX	65535

#endif
