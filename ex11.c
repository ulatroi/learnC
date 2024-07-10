#include<stdio.h>
int main(int argc, char ** argv){
	int numbers[4] = {0};
	char name[4] = {'a'};
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	name[0] = 'z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	printf("name: %s\n", name);
	return 0;
}

