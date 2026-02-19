# Learning Formal SVA with EBMC: A Practical Walkthrough

If you are learning SystemVerilog Assertions (SVA), open-source options are still less visible than simulation-first flows.  
This directory uses **EBMC** as a lightweight way to learn temporal operators with small, focused examples.

## Why this set exists

- Keep examples short and inspectable.
- Separate stimulus from properties.
- Make it easy to iterate on one operator at a time.

The shared harness is in `ebmc_example_base.svh`, and each example file only defines:

- `EX_PING` stimulus pattern
- `EX_PONG` stimulus pattern
- optional `EX_NET` pattern
- `EX_ASSERTIONS` block

Then it includes the base harness.

## Run setup

From `sv2/examples/formal/ebmc`:

```bash
make run
```

Run a specific example:

```bash
make run FILE=non_overlapping.sv
```

Change bound or enable trace:

```bash
make run FILE=delay_1_3.sv BOUND=120
make run FILE=within.sv TRACE=1
```

Wave dump:

```bash
make run FILE=seq.sv WAVE=1 VCD=seq.vcd
```

## Example-by-example tour

1. `non_overlapping.sv`  
   Uses `|=>` (non-overlapping implication): if `ping` is true now, `pong` must hold in the next cycle.

2. `overlapping.sv`  
   Uses `|->` (overlapping implication): `ping` implies `pong` in the same cycle.

3. `delay_1_3.sv`  
   Uses ranged delay `##[1:3]`: after `$rose(ping)`, `pong` must happen 1 to 3 cycles later.

4. `delay_1_inf.sv`  
   Uses unbounded delay `##[1:$]`: after `$rose(ping)`, `pong` must occur eventually (within search bound).

5. `repeat.sv`  
   Demonstrates repetition forms:
   - `[*2]` exact repetition
   - `[+]` one-or-more repetition
   - `[*1:3]` bounded repetition

6. `rep_star.sv`  
   Uses `[*0:$]` to allow a flexible gap before `pong`:
   `ping |=> net1[*0:$] ##1 pong`.

7. `first_match.sv`  
   Demonstrates `first_match(...)` to anchor behavior to the earliest valid sequence match.

8. `throughout.sv`  
   Demonstrates `throughout`:
   requires `(pong && net1)` to hold for the entire `ping[*4]` window.

9. `within.sv`  
   Demonstrates `within`:
   sequence `net1 ##1 pong` must occur within `ping[*4]`.

10. `seq.sv`  
    Shows reusable sequence style (`ping ##3 pong`) and a property layered on top.

11. `template.sv`  
    Starter file for creating new exercises by only editing patterns and assertions.

## Why This Structure Works for Learning

- One SVA concept per file.
- Shared harness keeps boilerplate minimal and consistent.
- Small stimulus edits quickly show proof/refutation changes.

## Suggested learning order

1. `non_overlapping.sv`
2. `overlapping.sv`
3. `delay_1_3.sv`
4. `delay_1_inf.sv`
5. `repeat.sv`
6. `rep_star.sv`
7. `first_match.sv`
8. `throughout.sv`
9. `within.sv`
10. `seq.sv`

## Quick loop to run all examples

```bash
for f in non_overlapping.sv overlapping.sv delay_1_3.sv delay_1_inf.sv repeat.sv rep_star.sv first_match.sv throughout.sv within.sv seq.sv; do
  echo "=== $f ==="
  make run FILE="$f" || true
done
```

## Final note

This is intentionally a **learning-first** formal set.  
If you are new to SVA, EBMC gives you a clear, open-source path to practice properties and understand counterexamples without a heavy tool setup.
