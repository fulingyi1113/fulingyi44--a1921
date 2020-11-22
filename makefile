#这是makefile
paixu:paixu.h paixu.c
	gcc paixu.h paixu.c -O paixu

clean:
	rm paixu
