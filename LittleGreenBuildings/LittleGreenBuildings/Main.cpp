#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>
//sss

int id{};

int intro();
int part1();
int part2();
int part3();
int part4();
int part5();
int part6();
int part7();
int outro();

int main() {

	intro();
	id = intro();
	if (id == 1) {

	}
	else goto end;

	start:

	part1();
	id = part1();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else
	
	part2();
	id = part2();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else

	part3();
	id = part3();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else 

	part4();
	id = part4();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else

	part5();
	id = part5();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else 

	part6();
	id = part6();
	if (id == 9) {
		goto start;
	}
	else if (id == 4) {
		goto end;
	}
	else 

	part7();
	id = part7();
	if (id == 0) {
		goto end;
	}
	else 

	outro();
	end:

	return 0;

}




