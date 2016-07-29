red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: maximum-product-of-word-lengths
maximum-product-of-word-lengths: maximum-product-of-word-lengths.o
	@g++ maximum-product-of-word-lengths.o -o maximum-product-of-word-lengths -std=c++1y
maximum-product-of-word-lengths.o: maximum-product-of-word-lengths.cpp
	@g++ -c maximum-product-of-word-lengths.cpp -std=c++1y

testall: all test1 
test1: all
	@./maximum-product-of-word-lengths < input1.txt > out_ref
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
	rm *o maximum-product-of-word-lengths out_ref 2>/dev/null || true
