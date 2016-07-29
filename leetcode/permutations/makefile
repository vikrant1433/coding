red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: permutations
permutations: permutations.o
	@g++ permutations.o -o permutations -std=c++1y
permutations.o: permutations.cpp
	@g++ -c permutations.cpp -std=c++1y

testall: all test1 
test1: all
	@./permutations < input1.txt > out_ref
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
	rm *o permutations out_ref 2>/dev/null || true
