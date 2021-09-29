CC = g++

INCDIR = -I../include

LIBDIR = -L../lib

FILE :=

OBJFILE = $(FILE:.cpp=.o)

STATICLIB = lib$(OBJFILE:.o=.a)

$(STATICLIB): $(OBJFILE)
	echo "$@ --> $^"
	ar rc $@ $^

$(OBJFILE): $(FILE)
	echo "$@ --> $^"
	$(CC) -c $^

clean:
	rm *.o *.a
