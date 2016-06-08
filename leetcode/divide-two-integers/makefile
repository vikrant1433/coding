red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: divide-two-integers
divide-two-integers: divide-two-integers.o
	@g++ divide-two-integers.o -o divide-two-integers -std=c++1y
divide-two-integers.o: divide-two-integers.cpp
	@g++ -c divide-two-integers.cpp -std=c++1y

testall: all test1 
test1: all
	@./divide-two-integers < input1.txt > out_ref
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
	rm *o divide-two-integers out_ref 2>/dev/null || true
