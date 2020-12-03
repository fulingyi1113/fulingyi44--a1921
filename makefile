#这是makefile
testlianzhan: lianzhan.c testlianzhan.c
	gcc lianzhan.c testlianzhan.c -o testlianzhan
clean:
	rm testlianzhan
