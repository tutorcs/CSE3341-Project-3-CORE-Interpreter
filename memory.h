https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef MEMORY_H
#define MEMORY_H

void memory_init();

void memory_free();

void declare(char* iden, int type);

void store(char* iden, int value);

int recall(char* iden);

void storeRec(char* iden, int index, int value);

int recallRec(char* iden, int index);

void record(char* lhs, char* rhs);

void allocateRecord(char* iden, int size);

#endif