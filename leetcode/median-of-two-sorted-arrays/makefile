red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: median-of-two-sorted-arrays
median-of-two-sorted-arrays: median-of-two-sorted-arrays.o
	@g++ median-of-two-sorted-arrays.o -o median-of-two-sorted-arrays -std=c++1y
median-of-two-sorted-arrays.o: median-of-two-sorted-arrays.cpp
	@g++ -c median-of-two-sorted-arrays.cpp -std=c++1y

testall: all test1 
test1: all
	@./median-of-two-sorted-arrays < input1.txt > out_ref
	-@diff -wy --suppress-blank-empty output1.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#1 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#1 FAILED${reset}" ;\
		echo "input:" ;\
		head input1.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output1.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
clean:
	rm *o median-of-two-sorted-arrays out_ref 2>/dev/null || true
