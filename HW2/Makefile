# Makefile to compile Verilog files using Verilator

# Executable and simulation options
VERILATOR  = verilator
VERILATOR_FLAGS = --trace --binary -j 0 -Wall

# Top module is assumed to be matrix_top (adjust if needed)
TOP_MODULE = sort_tb
# Name of the output executable
EXE = V$(TOP_MODULE)

.PHONY: all clean

all: sort sort_tb

sort: sort.v
	$(VERILATOR) $(VERILATOR_FLAGS) sort.v

sort_tb: sort_tb.v
	$(VERILATOR) $(VERILATOR_FLAGS) sort_tb.v



clean:
	rm -rf obj_dir $(EXE)