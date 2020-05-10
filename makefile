CC	= gcc #compiler name
TARGET	= listmain
OBJFILES	= listmain.o list.o

test: listmain.o list.c     
	gcc -o listmain listmain.c        

clean:
	rm -f $(OBJFILES) $(TARGET)

