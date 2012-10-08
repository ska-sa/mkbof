
mkbof: mkbof.c
	gcc -static -Wall -o $@ $^  -I.
