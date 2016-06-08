red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: bigger-is-greater
bigger-is-greater: bigger-is-greater.o
	@g++ bigger-is-greater.o -o bigger-is-greater -std=c++1y
bigger-is-greater.o: bigger-is-greater.cpp
	@g++ -c bigger-is-greater.cpp -std=c++1y

testall: all test1 test2 test3 test4 
test1: all
	@./bigger-is-greater < input1.txt > out_ref
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
	@./bigger-is-greater < input2.txt > out_ref
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
test3: all
	@./bigger-is-greater < input3.txt > out_ref
	-@diff -wy --suppress-blank-empty output3.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#3 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#3 FAILED${reset}" ;\
		echo "input:" ;\
		head input3.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output3.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test4: all
	@./bigger-is-greater < input4.txt > out_ref
	-@diff -wy --suppress-blank-empty output4.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#4 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#4 FAILED${reset}" ;\
		echo "input:" ;\
		head input4.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output4.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
clean:
	rm *o bigger-is-greater out_ref 2>/dev/null || true
