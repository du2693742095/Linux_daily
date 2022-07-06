TARGET:=main
SURC:=$(wildcard *.c)
OBJS:=$(patsubst %.c,%.o,$(SURC))

main: $(OBJS)
	gcc $(OBJS) -o main

.PHONY: clean rebuild

clean:
	${RM} *.o
rebuild: clean main
