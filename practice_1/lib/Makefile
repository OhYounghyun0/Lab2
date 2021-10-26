OBJECTS = add.o subtract.o multiply.o divide.o
staticout : libstatic.a
	cd ..;gcc -I./lib -L./lib main.c lib/$^ -o $@
add.o : add.c
	gcc -c $<
subtract.o : subtract.c
	gcc -c $<
multiply.o : multiply.c
	gcc -c $<
divide.o : divide.c
	gcc -c $<
libstatic.a : $(OBJECTS)
	ar rcs $@ $^
clean : 
	rm -f libstatc.a $(OBJECTS)
	cd ..;rm staticout

