# --------------------------------------------------
# Tech Aarvam
# Copyright (c) 2026 Tech Aarvam.
# Author: Ram (Ramasubramanian B)
# --------------------------------------------------

# ---- Tools / env ----
VERILATOR ?= verilator
GTKWAVE   ?= gtkwave
UVM_HOME  ?= $(UVM_HOME)

# ---- Top / output ----
TOP       ?= tb
OBJ_DIR   ?= obj_dir
BIN       := ./$(OBJ_DIR)/V$(TOP)
LOG       := $(OBJ_DIR)/log
WAVEFILE  ?= wave.vcd

# ---- Sources ----
SV_SRCS := \
  $(UVM_HOME)/src/uvm_pkg.sv \
  ./counter.sv \
  uvmtb/interface.sv \
  uvmtb/top_env.sv \
  tb.sv

INCDIRS := -I$(UVM_HOME)/src

# ---- UVM run args ----
UVM_TESTNAME ?= apb_master_tb_test
UVM_RUN_ARGS := +UVM_TESTNAME=$(UVM_TESTNAME) +UVM_OBJECTION_TRACE +UVM_VERBOSITY=UVM_HIGH

# ---- Verilator compile args ----
BASE_VFLAGS := \
  --binary \
  +1800-2023ext+sv \
  +define+UVM_NO_DPI \
  -Wno-fatal \
  -j 16 \
  --top-module $(TOP) \
  --timescale 1ns/1ps \
  $(INCDIRS)

# Optional waves
ifeq ($(WAVE),1)
  TRACE_VFLAGS := --trace --trace-vcd
  TRACE_RUN_ARGS := --trace --trace-vcd
else
  TRACE_VFLAGS :=
  TRACE_RUN_ARGS :=
endif

.PHONY: all compile run gtk clean help

all: compile run

compile:
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(BASE_VFLAGS) $(TRACE_VFLAGS) $(SV_SRCS)

run: $(BIN)
	@mkdir -p $(OBJ_DIR)
	$(BIN) $(TRACE_RUN_ARGS) $(UVM_RUN_ARGS) > $(LOG)
	@echo "Log:  $(LOG)"
	@echo "Wave: $(WAVEFILE)  (ensure your TB does $$dumpfile(\"$(WAVEFILE)\") and $$dumpvars)"

gtk:
	$(GTKWAVE) $(WAVEFILE) &

clean:
	rm -rf $(OBJ_DIR) *.vcd *.fst $(WAVEFILE)

help:
	@echo "Targets:"
	@echo "  make compile        # build $(BIN)"
	@echo "  make run            # run and write $(LOG)"
	@echo "  make all            # compile + run"
	@echo "  make gtk            # open $(WAVEFILE) in GTKWave"
	@echo "Options:"
	@echo "  WAVE=1              # enable --trace/--trace-vcd at compile & run"
	@echo "  UVM_TESTNAME=<name> # override test (default: $(UVM_TESTNAME))"
	@echo "  WAVEFILE=<file>     # default: $(WAVEFILE)"

