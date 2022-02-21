COMPILER = g++
EX = .cpp

OBJdir = bin
HDRdir = hdr
SRCdir = src

obj = $(patsubst $(SRCdir)/%$(EX), $(OBJdir)/%.o, $(wildcard $(SRCdir)/*))
hdr = $(wildcard $(HDRdir)/*)

build: $(OBJdir)/run

run: $(OBJdir)/run
	./$^

clean:
	@if [ -f $(OBJdir)/*.o ]; then rm $(OBJdir)/*.o; fi
	@if [ -f $(OBJdir)/run ]; then rm $(OBJdir)/run; fi

$(OBJdir)/run: $(obj)
	$(COMPILER) $^ -o $@

$(OBJdir)/%.o: $(SRCdir)/%$(EX) $(hdr)
	$(COMPILER) -c $< -o $@ -I "$(HDRdir)/"
