
PROG ?= examples/hello
SRC   = $(PROG).c
BIN   = $(notdir $(PROG))

all: $(BIN)

clean:
	$(RM) .*.flat*

.PHONY: all clean

$(BIN): .$(BIN).flat .$(BIN).flat.0.5.precodegen.bc
	objcopy --add-section .llvmbc=$<.0.5.precodegen.bc \
		--set-section-flags .llvmbc=noload,readonly $< $@

.$(BIN).flat: $(SRC)
	clang -flto -Wl,-plugin-opt=save-temps $^ -o $@
