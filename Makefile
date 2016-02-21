CFLAGS=$(shell root-config --cflags) -march=native -O2 -flto -g -Wextra -Wall -Wshadow
CXX=$(shell root-config --cxx)
CC=$(shell root-config --cxx)
LD=$(shell root-config --cxx)
CPPFLAGS=$(shell root-config --cflags) -march=native -O2 -flto -g -Wextra -Wall -Wshadow
LDFLAGS=$(shell root-config --libs) -lstdc++ -m64 -g -march=native -flto -fuse-ld=gold $(shell gsl-config --libs)

all: quantiles

quantiles: twodplot.o quantile.o quantiles.o

clean:
	rm -f quantiles *.o

.PHONY: clean all
