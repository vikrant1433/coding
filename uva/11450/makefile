red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: 11450
11450: 11450.o
	@g++ 11450.o -o 11450 -std=c++1y
11450.o: 11450.cpp
	@g++ -c 11450.cpp -std=c++1y

testall: all test1 
test1: all
	@./11450 < input1.txt > out_ref
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
	rm *o 11450 out_ref 2>/dev/null || true
