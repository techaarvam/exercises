verilator --binary +1800-2023ext+sv pc.sv tb.sv  -Wno-fatal -j 16 -top-module tb --timescale 1ns/1ps
