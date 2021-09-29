CC = g++

DIR:=

FILE=$(DIR).cpp

TARGET = $(DIR)/$(FILE)

OBJFILE = $(DIR)/$(FILE:.cpp=.o)

STATICLIB = $(DIR)/lib$(FILE:.cpp=.a)

$(STATICLIB):	$(OBJFILE)
	echo "$^ --> $@"
	ar rc $@ $^

$(OBJFILE):	$(TARGET)
	echo "$^ --> $@"
	$(CC) -c $^ -o $@

printenv:
	echo "DIR = $(DIR)"
	echo "TARGET = $(TARGET)"
	echo "OBJFILE = $(OBJFILE)"
	echo "STATICLIB = $(STATICLIB)"
