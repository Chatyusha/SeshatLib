CC=g++
OPTIONS = -c -Wall -O2

LIBNAME = vector2

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

STATICLIB = lib$(LIBNAME).a

$(STATICLIB): $(OBJS)
	echo "$(OBJS) --> $(STATICLIB)"
	ar rc $(STATICLIB) $(OBJS)

$(OBJS): $(SRCS)
	echo "$(SRCS) --> $(OBJS)"
	$(CC) $(OPTIONS) $(SRCS)

