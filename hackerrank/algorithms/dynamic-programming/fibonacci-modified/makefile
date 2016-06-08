red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: fibonacci-modified
fibonacci-modified: fibonacci-modified.o
	@g++ fibonacci-modified.o -o fibonacci-modified -std=c++1y
fibonacci-modified.o: fibonacci-modified.cpp
	@g++ -c fibonacci-modified.cpp -std=c++1y

testall: all test1 test2 
test1: all
	@./fibonacci-modified < input1.txt > out_ref
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
test2: all
	@./fibonacci-modified < input2.txt > out_ref
	-@diff -wy --suppress-blank-empty output2.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#2 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#2 FAILED${reset}" ;\
		echo "input:" ;\
		cat input2.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wy --suppress-blank-empty output2.txt out_ref || true;\
		echo;	fi
clean:
	rm *o fibonacci-modified out_ref 2>/dev/null || true
