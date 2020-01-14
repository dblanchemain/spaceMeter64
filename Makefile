LIB ?= /usr/local/lib
INC = ../../architecture

DESTDIR ?=
PREFIX ?= 

prefix := $(DESTDIR)$(PREFIX)

all: spaceMeter64

spaceMeter64: spaceMeter64.cpp
	$(CXX)  -std=c++17 -O3 DspFaust.cpp DspFaust.h spaceMeter64.cpp -I $(INC) -ljack -lsfml-graphics -lsfml-window -lsfml-system -lpthread `pkg-config  --libs --cflags jack sndfile` -o spaceMeter64


install: 
	([ -e spaceMeter64 ]) && cp spaceMeter64 $(prefix)/bin


clean:
	rm -f spaceMeter64
	
