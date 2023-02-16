#ifndef BT9_BT94_IOFUNCTIONS_H_
#define BT9_BT94_IOFUNCTIONS_H_
#include <cstdio>

FILE *getFiletoRead(char *fileIn, int mode);
FILE *getFiletoWrite(char *fileOut, int mode);
void putData(FILE *fp, const char *filename, const int &K);
int getKey();

#endif // !BT9_BT94_IOFUNCTIONS_H_

