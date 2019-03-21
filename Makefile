GCC_BIN ?= $(shell which gcc)
CARGO_BIN ?= $(shell which cargo)

build:
	$(CARGO_BIN) build
release:
	$(CARGO_BIN) build --release