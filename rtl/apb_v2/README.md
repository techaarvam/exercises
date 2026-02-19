# APB v2 Example (WIP)

This directory contains an educational APB master + testbench setup used for learning and iteration.

## Status

- Experimental / work in progress.
- Intended as a training example, not a production-quality UVM reference.
- Protocol checks and structure are being incrementally refined.

## Contents

- `apb_master.sv`: APB master RTL and FSM logic.
- `apb_asserts.sv`: protocol-oriented assertions bound to the master.
- `tb.sv`: top-level testbench with DUT and simple APB targets.
- `uvmtb/`: minimal UVM environment components.
- `Makefile`: Verilator/UVM build and run flow.

## Quick Run

```sh
make compile
make run
```

## Notes

- Generated artifacts such as `obj_dir/`, `wave.vcd`, and logs are tool outputs.
- Keep this example as a readable baseline for experimentation.
