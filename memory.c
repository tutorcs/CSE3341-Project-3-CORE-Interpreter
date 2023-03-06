https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "core.h"
#include "memory.h"

/*
*
* Data Structs
*
*/

static char** iLookup;
static int* iValues;
static int iLen;

static char** rLookup;
static int** rValues;
static int rLen;


/*
*
* Helper functions
*
*/

// If iden is an integer, return the index. Otherwise, return -1
static int searchInteger(char* iden) {
	int location = -1;
	for (int i=0; i<iLen; i++) {
		if (strcmp(iLookup[i], iden)==0) {
			location = i;
		}
	}
	return location;
}

// If iden is a record, return the index. Otherwise, return -1
static int searchRecord(char* iden) {
	int location = -1;
	for (int i=0; i<rLen; i++) {
		if (strcmp(rLookup[i], iden)==0) {
			location = i;
		}
	}
	return location;
}


/*
*
* Memory functions
*
*/

// Initialize data structures
// Don't worry about freeing memory, will do that in project 5
void memory_init() {

}

// Handle an integer or record declaration
void declare(char* iden, int type) {

}

// Store a value to a variable. Remember, unindexed stores to a record go to index 0
void store(char* iden, int value) {

}

// Read a value from a variable. Remember, unindexed reads from a record read index 0
int recall(char* iden) {

}

// Store a value to a record variable, at the given index
void storeRec(char* iden, int index, int value) {

}

// Read a value from a record variable, from the given index
int recallRec(char* iden, int index) {

}

// Handle "id := record id" type assignment
void record(char* lhs, char* rhs) {

}

// Handle "id := new record[<expr>]" type assignment
void allocateRecord(char* iden, int size) {

}