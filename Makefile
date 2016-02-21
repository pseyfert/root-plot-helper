CFLAGS=$(shell root-config --cflags) -march=native -O2 -flto -g -Wextra -Wall -Wshadow
CXX=$(shell root-config --cxx)
CC=$(shell root-config --cxx)
LD=$(shell root-config --cxx)
CPPFLAGS=$(shell root-config --cflags) -march=native -O2 -flto -g -Wextra -Wall -Wshadow
LDFLAGS=$(shell root-config --libs) -lstdc++ -m64 -g -march=native -flto -fuse-ld=gold

all: twodplot.o

