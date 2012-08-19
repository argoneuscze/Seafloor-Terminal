# Copyright (C) 2012 Tomas Drbota

# This file is part of Seafloor Terminal.

# Seafloor Terminal is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# Seafloor Terminal is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with Seafloor Terminal.  If not, see <http://www.gnu.org/licenses/>.

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
