EBMC ?= ebmc
FILE ?= non_overlapping.sv
TOP ?= top
BOUND ?= 60
TRACE ?= 1
WAVE ?= 0
VCD ?= wave.vcd
RANDOM ?= 0
TRACE_STEPS ?= 10

EBMC_FLAGS := -top $(TOP) $(FILE) --bound $(BOUND)

ifeq ($(TRACE),1)
EBMC_FLAGS += --trace
endif

ifeq ($(WAVE),1)
EBMC_FLAGS += --vcd $(VCD)
endif

ifeq ($(RANDOM),1)
EBMC_FLAGS += --random-trace --trace-steps $(TRACE_STEPS)
endif

.PHONY: run clean help

run:
	$(EBMC) $(EBMC_FLAGS)

clean:
	rm -f $(VCD)

help:
	@echo "Usage: make run [FILE=non_overlapping.sv] [TOP=top] [BOUND=60] [TRACE=1] [WAVE=0] [VCD=wave.vcd] [RANDOM=0] [TRACE_STEPS=10]"
	@echo "Examples:"
	@echo "  make run"
	@echo "  make run FILE=seq.sv BOUND=120"
	@echo "  make run WAVE=1"
	@echo "  make run RANDOM=1 TRACE_STEPS=20"
