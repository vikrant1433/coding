red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: reverse-words-in-a-string
reverse-words-in-a-string: reverse-words-in-a-string.o
	@g++ reverse-words-in-a-string.o -o reverse-words-in-a-string -std=c++1y
reverse-words-in-a-string.o: reverse-words-in-a-string.cpp
	@g++ -c reverse-words-in-a-string.cpp -std=c++1y

testall: all test1 
test1: all
	@./reverse-words-in-a-string < input1.txt > out_ref
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
	rm *o reverse-words-in-a-string out_ref 2>/dev/null || true
