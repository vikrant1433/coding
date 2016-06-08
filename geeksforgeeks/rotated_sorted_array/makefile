red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: rotated_sorted_array
rotated_sorted_array: rotated_sorted_array.o
	@g++ rotated_sorted_array.o -o rotated_sorted_array -std=c++1y
rotated_sorted_array.o: rotated_sorted_array.cpp
	@g++ -c rotated_sorted_array.cpp -std=c++1y

testall: all test1 
test1: all
	@./rotated_sorted_array < input1.txt > out_ref
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
	rm *o rotated_sorted_array out_ref 2>/dev/null || true
