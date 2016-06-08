red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: EZNO
EZNO: EZNO.o
	@g++ EZNO.o -o EZNO
EZNO.o: EZNO.cpp
	@g++ -c EZNO.cpp

testall: all test1 
test1: all
	@./EZNO < input1.txt > out_ref
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
clean:
	rm *o EZNO out_ref 2>/dev/null || true
