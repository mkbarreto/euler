# This is the default target, which will be built when 
# you invoke make
.PHONY: all
all: quest5

# This rule tells make how to build quest5 from main.cpp
quest5: quest5.cpp
	g++ -O2 -std=c++17 -stdlib=libc++ -o quest5 *.cpp ../primer/*.cpp

# This rule tells make to copy hello to the binaries subdirectory,
# creating it if necessary
.PHONY: install
install:
	mkdir -p binaries
	cp -p quest5 binaries

# This rule tells make to delete quest5 and quest5.o
.PHONY: clean 
clean:
	rm -f quest5
