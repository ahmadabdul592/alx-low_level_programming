Dynamic Libraries Implementation
	first we need to compile our library source code into positon independent code (PIC) using gcc - c -Wall -Werror -fPIC *.c
	Then we can create a shared library from all the object file generated using gcc -shared -o libdynamic.so *.o followed by ls -la lib*
	Also using nm we can list all the symbols present inthe library.
