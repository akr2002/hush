all: hush.c
	gcc hush.c -W -Wall -Wextra -pedantic -L/usr/include -lreadline -o hush