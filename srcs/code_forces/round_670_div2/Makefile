# build flags
CXX_FLAGS = -std=c++11 -Wall -Werror

# source files
SOURCES = $(shell find ./ -type f -name '*.cc')

# execute files
EXECUTES = $(patsubst %.cc,%,$(SOURCES))

.PHONY: all

all: $(EXECUTES)

$(EXECUTES):
	$(CXX) $(CXX_FLAGS) $@.cc -o $@.bin

clean:
	@- $(RM) *.bin