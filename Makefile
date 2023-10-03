#this is MKEFILE Environment


#recipie

demo.o : demo.c
	gcc -c demo.c -o demo.o
aun : demo.o
	gcc -o aun  demo.o 
clean:
	rm *.o
	rm aun



