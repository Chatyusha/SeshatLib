CC = g++

INCDIR = -I./include
LIBDIR = -L./lib

matrix:
	cd ./src \
		&& make DIR=matrix \
		&& cd ../include \
		&& if [ ! -h matrix ];then ln -s ../src/matrix matrix ;fi\
		&& cd ../lib \
		&& if [ ! -h libmatrix.a ]; then ln -s ../src/matrix/libmatrix.a libmatrix.a;fi

complex:
	cd ./src \
		&& make DIR=complex \
		&& cd ../include \
		&& ln -s ../src/complex complex \
		&& cd ../lib \
		&& ln -s ../src/complex/libcomplex.a libcomplex.a

math:
	cd ./src \
		&& make DIR=math \
		&& cd ../include \
		&& ln -s ../src/math math \
		&& cd ../lib \
		&& ln -s ../src/math/libmath.a libmath.a

all: matrix complex math
