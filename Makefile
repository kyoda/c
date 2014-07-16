#
#

first: first.c
	gcc -Wall -O2 -std=c99 $^
	#gcc -Wall -O2 -std=c99 -o $@ $^
clean:
	rm -rf ./a.out
ls:
	ls ./
