red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: C
C: C.o
	@g++ C.o -o C
C.o: C.cpp
	@g++ -c C.cpp

testall: all test1 test2 test3 
test1: all
	@./C < input1.txt > out_ref
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
	@./C < input2.txt > out_ref
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
test3: all
	@./C < input3.txt > out_ref
	-@diff -wy --suppress-blank-empty output3.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#3 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#3 FAILED${reset}" ;\
		echo "input:" ;\
		cat input3.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wy --suppress-blank-empty output3.txt out_ref || true;\
		echo;	fi
clean:
	rm *o C out_ref 2>/dev/null || true
