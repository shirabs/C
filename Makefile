mains: main.o libmyMath.a
	gcc -Wall -o mains main.o -L. libmyMath.a
	
maind: main.o libmyMath.so
	gcc -Wall -o maind main.o -L. ./libmyMath.so
	
mymaths: libmyMath.a
	
libmyMath.a: myMath.h power.o basicMath.o
	ar -rcs libmyMath.a myMath.h power.o basicMath.o
	
mymathd: libmyMath.so

libmyMath.so: power.o basicMath.o
	gcc -o libmyMath.so basicMath.o power.o -shared
	
basicMath.o: basicMath.c myMath.h
	gcc -Wall -c basicMath.c
	
power.o: power.c myMath.h
	gcc -Wall -c power.c


main.o: main.c myMath.h
	gcc -Wall -c main.c
	
all: mains maind

clean:
	rm -f *.o *.a *.so mains maind