red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: A
A: A.o
	g++ A.o -o A
A.o: A.cpp
	g++ -c A.cpp
testall: all test1 test2 test3 test4 
test1: all
	@./A < input1.txt > out_ref 
	-@diff -wBy --suppress-blank-empty output1.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#1 PASS${reset}" ; \
	else \
		echo "${red}TEST CASE#1 FAILED${reset}" ; \
		echo "input:" ;\
		cat input1.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output1.txt out_ref || true;\
	fi
test2: all
	@./A < input2.txt > out_ref 
	-@diff -wBy --suppress-blank-empty output2.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#2 PASS${reset}" ; \
	else \
		echo "${red}TEST CASE#2 FAILED${reset}" ; \
		echo "input:" ;\
		cat input2.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output2.txt out_ref || true;\
	fi
test3:
	@./A < input3.txt > out_ref 
	-@diff -wBy --suppress-blank-empty output3.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#3 PASS${reset}" ; \
	else \
		echo "${red}TEST CASE#3 FAILED${reset}" ; \
		echo "input:" ;\
		cat input3.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output3.txt out_ref || true;\
	fi
test4:
	@./A < input4.txt > out_ref 
	-@diff -wBy --suppress-blank-empty output4.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#4 PASS${reset}" ; \
	else \
		echo "${red}TEST CASE#4 FAILED${reset}" ; \
		echo "input:" ;\
		cat input4.txt ;\
		echo "-----------------------------------------------------------------------" ;\
		echo "expected output                    			  your output" ;\
		echo "-----------------------------------------------------------------------" ;\
		diff -wBy --suppress-blank-empty output4.txt out_ref || true;\
	fi
clean:
	rm *o A out_ref 2>/dev/null || true
example:
	@echo "${red}red text ${green}green text${reset}"
	# if [ $$? -eq 0 ] ; then \
	# 	echo "${green}TEST CASE#2 PASS${reset}" ; \
	# else \
	# 	@echo "${red}TEST CASE#2 FAILED${reset}" ; \
	# 	@echo "input:" ;\
	# 	@cat input2.txt ;\
	# 	@echo "-----------------------------------------------------------------------" ;\
	# 	@echo "expected output                    			  your output" ;\
	# 	@echo "-----------------------------------------------------------------------" ;\
	# fi	
	# all: A.cpp A
	# 	@g++ A.cpp -std=c++1y
