red=`tput setaf 1`
green=`tput setaf 2`
reset=`tput sgr0`
all: pairs
pairs: pairs.o
	@g++ pairs.o -o pairs -std=c++1y
pairs.o: pairs.cpp
	@g++ -c pairs.cpp -std=c++1y

testall: all test1 test2 test3 test4 test5 test6 test7 test8 test9 test10 test11 test12 test13 test14 test15 test16 test17 
test1: all
	@./pairs < input1.txt > out_ref
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
	@./pairs < input2.txt > out_ref
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
	@./pairs < input3.txt > out_ref
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
	@./pairs < input4.txt > out_ref
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
test5: all
	@./pairs < input5.txt > out_ref
	-@diff -wy --suppress-blank-empty output5.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#5 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#5 FAILED${reset}" ;\
		echo "input:" ;\
		head input5.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output5.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test6: all
	@./pairs < input6.txt > out_ref
	-@diff -wy --suppress-blank-empty output6.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#6 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#6 FAILED${reset}" ;\
		echo "input:" ;\
		head input6.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output6.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test7: all
	@./pairs < input7.txt > out_ref
	-@diff -wy --suppress-blank-empty output7.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#7 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#7 FAILED${reset}" ;\
		echo "input:" ;\
		head input7.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output7.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test8: all
	@./pairs < input8.txt > out_ref
	-@diff -wy --suppress-blank-empty output8.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#8 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#8 FAILED${reset}" ;\
		echo "input:" ;\
		head input8.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output8.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test9: all
	@./pairs < input9.txt > out_ref
	-@diff -wy --suppress-blank-empty output9.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#9 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#9 FAILED${reset}" ;\
		echo "input:" ;\
		head input9.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output9.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test10: all
	@./pairs < input10.txt > out_ref
	-@diff -wy --suppress-blank-empty output10.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#10 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#10 FAILED${reset}" ;\
		echo "input:" ;\
		head input10.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output10.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test11: all
	@./pairs < input11.txt > out_ref
	-@diff -wy --suppress-blank-empty output11.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#11 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#11 FAILED${reset}" ;\
		echo "input:" ;\
		head input11.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output11.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test12: all
	@./pairs < input12.txt > out_ref
	-@diff -wy --suppress-blank-empty output12.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#12 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#12 FAILED${reset}" ;\
		echo "input:" ;\
		head input12.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output12.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test13: all
	@./pairs < input13.txt > out_ref
	-@diff -wy --suppress-blank-empty output13.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#13 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#13 FAILED${reset}" ;\
		echo "input:" ;\
		head input13.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output13.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test14: all
	@./pairs < input14.txt > out_ref
	-@diff -wy --suppress-blank-empty output14.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#14 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#14 FAILED${reset}" ;\
		echo "input:" ;\
		head input14.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output14.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test15: all
	@./pairs < input15.txt > out_ref
	-@diff -wy --suppress-blank-empty output15.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#15 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#15 FAILED${reset}" ;\
		echo "input:" ;\
		head input15.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output15.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test16: all
	@./pairs < input16.txt > out_ref
	-@diff -wy --suppress-blank-empty output16.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#16 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#16 FAILED${reset}" ;\
		echo "input:" ;\
		head input16.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output16.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
test17: all
	@./pairs < input17.txt > out_ref
	-@diff -wy --suppress-blank-empty output17.txt out_ref >/dev/null ;\
	if [ $$? -eq 0 ] ; then \
		echo "${green}TEST CASE#17 PASS${reset}" ;\
	else \
		echo "${red}TEST CASE#17 FAILED${reset}" ;\
		echo "input:" ;\
		head input17.txt ;\
		echo ;\
		echo "expected output" ;\
		cat output17.txt ;\
		echo ;\
		echo "your output" ;\
		cat out_ref ;\
		echo;\
	fi
clean:
	rm *o pairs out_ref 2>/dev/null || true
