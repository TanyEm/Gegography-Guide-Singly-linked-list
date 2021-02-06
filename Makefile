
.PHONY: build
build:
	@mkdir -p bin
	@g++ -o bin/main geography.cpp

.PHONY: clean
clean:
	@rm -rf bin

.PHONY: run
run:
	@./bin/main