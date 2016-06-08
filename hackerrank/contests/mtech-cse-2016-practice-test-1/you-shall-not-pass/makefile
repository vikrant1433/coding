red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: you-shall-not-pass
you-shall-not-pass: you-shall-not-pass.o
	@g++ you-shall-not-pass.o -o you-shall-not-pass -std=c++1y
you-shall-not-pass.o: you-shall-not-pass.cpp
	@g++ -c you-shall-not-pass.cpp -std=c++1y

testall: all test1 test2 
test1: all
	@./you-shall-not-pass < input1.txt > out_ref
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
	@./you-shall-not-pass < input2.txt > out_ref
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
	rm *o you-shall-not-pass out_ref 2>/dev/null || true
