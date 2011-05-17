# $FreeBSD$
#
# Machine dependent definitions for the ultra sparc architecture.
#

.include "fpu/Makefile.inc"

# Long double is quad precision
GDTOASRCS+=strtorQ.c
MDSRCS+=machdep_ldisQ.c
SYM_MAPS+=${.CURDIR}/sparc64/Symbol.map