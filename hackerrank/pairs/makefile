all:
	g++ pairs.cpp -std=c++1y
run:
	./a.out < in1 > out_ref
testall: test1 test2 test3
	@echo "testing all test cases"
test1:
	@echo "running test#1"
	@./a.out < in1 > out_ref
	diff -wBy --suppress-blank-empty out1 out_ref 
test2:
	@echo "running test#2"
	@./a.out < in2 > out_ref
	diff -wBy --suppress-blank-empty out2 out_ref
test3:
	@echo "running test#2"
	@./a.out < in3 > out_ref
	diff -wBy --suppress-blank-empty out3 out_ref
clean:
	rm a.out


