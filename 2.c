/*
 ============================================================================
 Name        : CommandLineColorText.c
 Author      : Avraham Cohen
 Version     :
 Copyright   : Avraham Cohen
 Description : Color Text In Linux Terminal
 ============================================================================
 */


/*
	\033[22;30m - black
	\033[22;31m - red
	\033[22;32m - green
	\033[22;33m - brown
	\033[22;34m - blue
	\033[22;35m - magenta
	\033[22;36m - cyan
	\033[22;37m - gray
	\033[01;30m - dark gray
	\033[01;31m - light red
	\033[01;32m - light green
	\033[01;33m - yellow
	\033[01;34m - light blue
	\033[01;35m - light magenta
	\033[01;36m - light cyan
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int player1 = 3;

//	system("clear");
	puts("Color Text In Terminal !!!!\n"); /* prints  */

	printf("\033[22;30mThis Is Black Text!\n");

	printf("\033[01;30mThis Is Dark Gray Text!\n");
	printf("\033[01;31m2*%d\n", player1);


	printf("\033[22;30m"); /* Restore To Black Text Color */
	return EXIT_SUCCESS;
}

