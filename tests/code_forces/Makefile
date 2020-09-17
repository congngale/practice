# get target
TARGETS = $(wildcard */.)

.PHONY: all $(TARGETS) test clean

all: $(TARGETS)

$(TARGETS):
	$(MAKE) -C $@

test:
	 @for target in ${TARGETS}; do make test -C $${target}; done

clean:
	 @for target in ${TARGETS}; do make clean -C $${target}; done