# app name
TEST = round_670.bin

# gtest dir
GTEST_DIR = ../../../lib/googletest/googletest

# test sources
TEST_SOURCES = $(shell find ./ -type f -name '*.cc')

# test objects
TEST_OBJECTS = $(patsubst %.cc,%.o,$(TEST_SOURCES))

# Builds gtest.a and gtest_main.a.

# Usually you shouldn't tweak such internal variables, indicated by a
# trailing _.
GTEST_SRCS = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

# Flags passed to the preprocessor.
# Set Google Test's header directory as a system directory, such that
# the compiler doesn't generate warnings in Google Test headers.
CPPFLAGS += -isystem $(GTEST_DIR)/include -I../../../utils

# Flags passed to the C++ compiler.
CXXFLAGS += -std=c++11 -Wall

# include library
LDFLAGS = -lpthread

.PHONY: all $(TEST) clean

all: $(TEST)

# For simplicity and to avoid depending on Google Test's
# implementation details, the dependencies specified below are
# conservative and not optimized.  This is fine as Google Test
# compiles fast and for ordinary users its source rarely changes.
gtest-all.o : $(GTEST_SRCS)
	$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c $(GTEST_DIR)/src/gtest-all.cc

gtest_main.o : $(GTEST_SRCS)
	$(CXX) $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	$(AR) $(ARFLAGS) $@ $^

$(TEST): $(TEST_OBJECTS) gtest_main.a 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(TEST_OBJECTS) gtest_main.a -o $(TEST) $(LDFLAGS)

clean :
	rm -f $(TEST_OBJECTS)
	rm -f $(TEST) *.o *.a

test:
	./$(TEST)