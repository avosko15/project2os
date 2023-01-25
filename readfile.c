#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv) {
	int filedescript;
	char bytelimit[2048] = {};
	int bytes;

	filedescript = open(argv[1], O_RDWR);

	bytes = read(filedescript, bytelimit, 2048);

	write(1, bytelimit, bytes);
	close(filedescript);
  
	return 0;
}