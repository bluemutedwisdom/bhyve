# $FreeBSD$

PROG=	ktutil
MAN=	ktutil.8

SRCS=	add.c \
	change.c \
	copy.c \
	destroy.c \
	get.c \
	ktutil.c \
	ktutil_locl.h \
	ktutil-commands.c \
	ktutil-commands.h \
	list.c \
	purge.c \
	remove.c \
	rename.c

CFLAGS+=-I${KRB5DIR}/lib/roken -I${KRB5DIR}/lib/sl -I.
DPADD=	${LIBKADM5CLNT} ${LIBKRB5} ${LIBSL} ${LIBROKEN} ${LIBVERS} \
	${LIBASN1} ${LIBCRYPTO} ${LIBCRYPT} ${LIBEDIT}
LDADD=	-lkadm5clnt -lkrb5 ${LIBSL} -lroken ${LIBVERS} \
	-lasn1 -lcrypto -lcrypt -ledit

.include <bsd.prog.mk>

ktutil-commands.c ktutil-commands.h: ${KRB5DIR}/admin/ktutil-commands.in
	slc ${.ALLSRC:M*.in}

.PATH: ${KRB5DIR}/admin
