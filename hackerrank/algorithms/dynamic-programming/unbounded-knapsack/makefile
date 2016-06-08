red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: unbounded-knapsack
unbounded-knapsack: unbounded-knapsack.o
	@g++ unbounded-knapsack.o -o unbounded-knapsack -std=c++1y
unbounded-knapsack.o: unbounded-knapsack.cpp
	@g++ -c unbounded-knapsack.cpp -std=c++1y

testall: all test1 
test1: all
	@./unbounded-knapsack < input1.txt > out_ref
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
	rm *o unbounded-knapsack out_ref 2>/dev/null || true
