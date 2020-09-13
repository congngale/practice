#
# Copyright (c) 2020, Cong Nga Le. All rights reserved.
#
# This application used C++ version 11
#

PROGRAM = practice

# build date
BUILD_DATE = $(shell date)

# app version
# VERSION = $(shell git describe --abbrev=0)
VERSION = 1.0.0

# commit id
COMMIT_ID = COMMIT_ID

# include dir
INCLUDE_DIR = -Iinc

# object files
OBJECT_FILES = $(shell find ./ -type f -name '*.o')

# MAC OS temp files
MAC_TEMP_FILES = $(shell find ./ -type f -name '._*')

# sea sources
SOURCES_FILES = $(shell find src -type f -name '*.cc')

# full sources
SOURCES = $(SOURCES_FILES) main.cc

# object files
OBJECTS = $(patsubst %.cc,%.o,$(SOURCES))

# include -l
LDFLAGS = 

# build flags
CXXFLAGS = -D'COMMIT="$(COMMIT_ID)"' -D'VERSION="$(VERSION)"' \
	-D'BUILD_DATE="$(BUILD_DATE)"' -std=c++11 -Wall -Werror

# include -I
CPPFLAGS = $(INCLUDE_DIR)

.PHONY: all $(PROGRAM) clean

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OBJECTS) -o $(PROGRAM) $(LDFLAGS)


clean:
	@- $(RM) $(PROGRAM)
	@- $(RM) $(OBJECT_FILES)
	@- $(RM) $(MAC_TEMP_FILES)
