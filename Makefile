CC = g++

all: matrix complex math

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
		&& if [ ! -h complex ];then ln -s ../src/complex complex ;fi\
		&& cd ../lib \
		&& if [ ! -h libcomplex.a ]; then ln -s ../src/complex/libcomplex.a libcomplex.a;fi

math:
	cd ./src \
		&& make DIR=math \
		&& cd ../include \
		&& if [ ! -h math ];then ln -s ../src/math math ;fi\
		&& cd ../lib \
		&& if [ ! -h libmath.a ]; then ln -s ../src/math/libmath.a libmath.a;fi

vector2:
	cd ./src \
		&& make DIR=vector2 \
		&& cd ../include \
		&& if [ ! -h vector2 ];then ln -s ../src/vector2 vector2 ;fi\
		&& cd ../lib \
		&& if [ ! -h libvector2.a ]; then ln -s ../src/vector2/libvector2.a libvector2.a;fi
