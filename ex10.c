#include<stdio.h>
int main(int argc, char** argv){
	int i = 0;
	for (int i = 1;i<argc;i++){
		printf("arg %d: %s\n", i ,argv[i]);
	}
	char *states[] = {
		"C", "O", "W", "t"};
	int numstate = 4;
	for (int i = 0;i<numstate;i++){
		printf("State %d: %s\n", i, states[i]);
	}
	return 0;
}
