red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: the-cabalistic-hills-1
the-cabalistic-hills-1: the-cabalistic-hills-1.o
	@g++ the-cabalistic-hills-1.o -o the-cabalistic-hills-1 -std=c++1y
the-cabalistic-hills-1.o: the-cabalistic-hills-1.cpp
	@g++ -c the-cabalistic-hills-1.cpp -std=c++1y

testall: all test1 
test1: all
	@./the-cabalistic-hills-1 < input1.txt > out_ref
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
	rm *o the-cabalistic-hills-1 out_ref 2>/dev/null || true
