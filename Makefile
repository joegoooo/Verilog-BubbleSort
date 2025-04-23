VERILATOR = verilator
FLAG = --trace --binary -j 0 -Wall 
VCD_VIEWER = gtkwave  

SRC = sort_tb.v
OUT = Vsort_tb
WAVE = waveform.vcd          
DIR = obj_dir

all: compile run view

compile:
	$(VERILATOR) $(FLAG) $(SRC)

run:
	./$(DIR)/$(OUT)

view:
	$(VCD_VIEWER) $(WAVE)

clean:
	rm -rf $(DIR) $(WAVE)
