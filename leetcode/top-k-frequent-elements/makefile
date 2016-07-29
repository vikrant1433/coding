red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: top-k-frequent-elements
top-k-frequent-elements: top-k-frequent-elements.o
	@g++ top-k-frequent-elements.o -o top-k-frequent-elements -std=c++1y
top-k-frequent-elements.o: top-k-frequent-elements.cpp
	@g++ -c top-k-frequent-elements.cpp -std=c++1y

testall: all test1 
test1: all
	@./top-k-frequent-elements < input1.txt > out_ref
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
	rm *o top-k-frequent-elements out_ref 2>/dev/null || true
