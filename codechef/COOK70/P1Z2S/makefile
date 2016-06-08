red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: P1Z2S
P1Z2S: P1Z2S.o
	@g++ P1Z2S.o -o P1Z2S
P1Z2S.o: P1Z2S.cpp
	@g++ -c P1Z2S.cpp

testall: all test1 test2 
test1: all
	@./P1Z2S < input1.txt > out_ref
	-@diff -wBy --suppress-blank-empty output1.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#1 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#1 FAILED${reset}" ;\
		echo "input:" ;\
		cat input1.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output1.txt out_ref || true;\
	fi
test2: all
	@./P1Z2S < input2.txt > out_ref
	-@diff -wBy --suppress-blank-empty output2.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#2 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#2 FAILED${reset}" ;\
		echo "input:" ;\
		cat input2.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output2.txt out_ref || true;\
	fi
clean:
	rm *o P1Z2S out_ref 2>/dev/null || true
