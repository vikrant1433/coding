all:
	g++ forestga.cpp
run:
	./a.out < in1 > out_ref
testall: test1 test2 test3
	echo "testing all test cases"
test1:
	echo "running test#1"
	./a.out < in1 > out_ref
	diff -wBy --suppress-blank-empty out_ref out1
	echo "\n"
test2:
	echo "running test#2"
	./a.out < in2 > out_ref
	diff -wBy --suppress-blank-empty out_ref out2
	echo "\n"
test3:
	echo "running test#2"
	./a.out < in3 > out_ref
	diff -wBy --suppress-blank-empty out_ref out3
	echo "\n"
clean:
	rm a.out

