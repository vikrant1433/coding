red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: EURO
EURO: EURO.o
	@g++ EURO.o -o EURO
EURO.o: EURO.cpp
	@g++ -c EURO.cpp

testall: all test1 
test1: all
	@./EURO < input1.txt > out_ref
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
	rm *o EURO out_ref 2>/dev/null || true
