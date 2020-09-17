# get target
TARGETS = $(wildcard */.)

.PHONY: all $(TARGETS) clean

all: $(TARGETS)

$(TARGETS):
	$(MAKE) -C $@

clean:
	 @for target in ${TARGETS}; do make clean -C $${target}; done