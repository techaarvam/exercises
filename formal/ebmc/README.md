# EBMC Formal Examples

SystemVerilog formal examples for EBMC with a shared harness and minimal per-example files.

## Repository Layout

- `ebmc_example_base.svh`: Shared boilerplate.
  - `top` harness with reset release behavior.
  - Common DUT plumbing (`ping`, `pong`, optional `net1`, `count`, sampled arrays).
  - Injects example-specific logic through macros.
- `non_overlapping.sv`: Example using `ping` and `pong` only.
- `seq.sv`: Example with a sequence and `net1` check.
- `template.sv`: Starting point for new examples.
- `Makefile`: Standard commands and options.

## How It Works

Each example file defines a small set of macros and then includes the shared base file:

1. `` `define EX_PING ... ``
2. `` `define EX_PONG ... ``
3. Optional: `` `define EX_HAS_NET `` and `` `define EX_NET ... ``
4. `` `define EX_ASSERTIONS ... `` (properties/assertions/covers)
5. `` `include "ebmc_example_base.svh" ``

This keeps new examples focused on only stimulus and properties.

## Create a New Example

1. Copy `template.sv` to a new file, for example `my_case.sv`.
2. Update `EX_PING` and `EX_PONG` arrays.
3. If needed, enable `EX_HAS_NET` and define `EX_NET`.
4. Replace `EX_ASSERTIONS` with your properties.
5. Run with Make:

```bash
make run FILE=my_case.sv
```

## Run Commands

Default run:

```bash
make run
```

Run another file and bound:

```bash
make run FILE=seq.sv BOUND=120
```

Enable VCD dump:

```bash
make run WAVE=1
```

Random trace mode with trace steps:

```bash
make run RANDOM=1 TRACE_STEPS=20
```

Show help:

```bash
make help
```

Clean generated waveform:

```bash
make clean
```

## Makefile Options

- `FILE` (default: `non_overlapping.sv`)
- `TOP` (default: `top`)
- `BOUND` (default: `60`)
- `TRACE` (default: `1`)
- `WAVE` (default: `0`)
- `VCD` (default: `wave.vcd`)
- `RANDOM` (default: `0`)
- `TRACE_STEPS` (default: `10`)

## Notes

- EBMC returns non-zero when an assertion is refuted. This is expected in failing examples.
- `TRACE_STEPS` is used in random trace mode (`RANDOM=1`).

## License / Copyright

Tech Aarvam  
Copyright (c) 2026 Tech Aarvam.  
Author: Ram (Ramasubramanian B)
