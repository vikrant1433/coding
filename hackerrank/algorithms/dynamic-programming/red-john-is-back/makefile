red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: red-john-is-back
red-john-is-back: red-john-is-back.o
	@g++ red-john-is-back.o -o red-john-is-back -std=c++1y
red-john-is-back.o: red-john-is-back.cpp
	@g++ -c red-john-is-back.cpp -std=c++1y

testall: all test1 
test1: all
	@./red-john-is-back < input1.txt > out_ref
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
	rm *o red-john-is-back out_ref 2>/dev/null || true
