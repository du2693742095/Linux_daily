OBJS:=$(patsubst %.c, %, $(wildcard *.c))

OUT: ${OBJS}

%:%.c
	gcc $^ -o $@

.PHONY: OUT clean rebuild

clean:
	${RM} ${OBJS}
rebuild:clean OUT
