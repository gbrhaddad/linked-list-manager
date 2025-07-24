program: huvud.o driv.o list.o
	gcc -o program huvud.o driv.o list.o

huvud.o: huvud.c node.h driv.h
	gcc -c huvud.c

driv.o: driv.c driv.h node.h list.h
	gcc -c driv.c

list.o: list.c list.h node.h
	gcc -c list.c

clean:
	rm *.o output
