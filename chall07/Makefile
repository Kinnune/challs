#Author : Eljas Kinnunen, 05/20


flags = -Wall -Werror -Wextra -o

make: 
	gcc $(flags) chall07.exe ekinnune.c main.c

run:
	./chall07.exe 1234 5678 9999 0000
runalphabet:
	./chall07.exe abcde fghij klmop qrstu wvxyz

clean:
	-@rm *~ *.exe* 2>/dev/null || true

fullclean:
	-@rm .* *~ *.exe* 2>/dev/null | ls -la

