red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: maxsubarray
maxsubarray: maxsubarray.o
	@g++ maxsubarray.o -o maxsubarray -std=c++1y
maxsubarray.o: maxsubarray.cpp
	@g++ -c maxsubarray.cpp -std=c++1y

testall: all test1 
test1: all
	@./maxsubarray < input1.txt > out_ref
	-@diff -wy --suppress-blank-empty output1.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#1 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#1 FAILED${reset}" ;\
		echo "input:" ;\
		cat input1.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wy --suppress-blank-empty output1.txt out_ref || true;\
		echo;	fi
clean:
	rm *o maxsubarray out_ref 2>/dev/null || true
