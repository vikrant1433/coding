red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: coin-change
coin-change: coin-change.o
	@g++ coin-change.o -o coin-change -std=c++1y
coin-change.o: coin-change.cpp
	@g++ -c coin-change.cpp -std=c++1y

testall: all test1 test2 
test1: all
	@./coin-change < input1.txt > out_ref
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
test2: all
	@./coin-change < input2.txt > out_ref
	-@diff -wy --suppress-blank-empty output2.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#2 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#2 FAILED${reset}" ;\
		echo "input:" ;\
		head input2.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output2.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
clean:
	rm *o coin-change out_ref 2>/dev/null || true
