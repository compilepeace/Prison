OS	:= $(shell uname)
ifeq ($(OS), Linux)


.PHONY: all clean
FLAGS = -Werror -Wall -ggdb
BINS  = prison 
all: $(BINS)

prison: prison.cpp
	g++ $(FLAGS) -o $@ $^

clean:
	rm $(BINS)


endif
