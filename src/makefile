CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g #(shell root-config --cflags)
LDFLAGS=-g $(shell)
LBLIBS=$(shell -lboost_system -lboost_filesystem)

SRCS=main.cc hash_struct.cc recurs_file_finder.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) -I Users/fresto32/Documents/Libraries/boost_1_62_0 \
	  -L/Users/fresto32/Documents/Libraries/temp/lib \
	  $(LDFLAGS) -o main $(OBJS) $(LDLIBS) -lboost_filesystem \
	  -lboost_system

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CSS) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

distclean: clean
	#(RM) main
