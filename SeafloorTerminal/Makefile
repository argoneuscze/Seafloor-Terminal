CXX=g++
CXXFLAGS=-std=c++11 -O2 -Wall -pedantic -g
LDFLAGS=-lsfml-network -lsfml-audio -lsfml-graphics -lsfml-system
OBJS=main.o engine.o input.o
BINPATH=../bin
PROGRAM=SeaTerm

.PHONY: all clean run

all: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $(PROGRAM);\
	if [ ! -d $(BINPATH) ]; then mkdir $(BINPATH); fi;\
	cp $(PROGRAM) $(BINPATH)/$(PROGRAM)

clean:
	rm -f *.o $(PROGRAM);\
	rm -rf $(BINPATH)

run: all
	$(BINPATH)/$(PROGRAM)

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<
