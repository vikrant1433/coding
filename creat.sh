mkdir $1
cd $1
touch $1.cpp in out out_ref makefile
cat $HOME/coding/c++_template > $1.cpp
echo "all:\n\tg++ $1.cpp\nrun:\n\t./a.out < in > out\nclean:\n\trm *.o a.out" > makefile
# echo $PWD
