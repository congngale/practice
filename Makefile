# list sources
SOURCE_DIRS = $(shell ls srcs)

# list tests
TEST_DIRS = $(shell ls tests)

.PHONY: build_source build_test test clean

all: build_source build_test

# build sources
build_source:
	@for target in ${SOURCE_DIRS}; do make -C srcs/$${target}; done

# build test
build_test:
	@for target in ${TEST_DIRS}; do make -C tests/$${target}; done

test:
	@for target in ${TEST_DIRS}; do make test -C tests/$${target}; done

clean:
	@for target in ${TEST_DIRS}; do make clean -C tests/$${target}; done
	@for target in ${SOURCE_DIRS}; do make clean -C srcs/$${target}; done
