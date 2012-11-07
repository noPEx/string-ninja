all : reverse_word reverse_string strip_white string reverse_order

reverse_word : reverse_word.c
	gcc -g -o reverse_word reverse_word.c

reverse_string : reverse_string.c
	gcc -g -o reverse_string reverse_string.c

strip_white : strip_white.c
	gcc -g -o strip_white strip_white.c

string : string.c
	gcc -g -o string string.c


reverse_order : reverse_order.c
	gcc -g -o reverse_order reverse_order.c
