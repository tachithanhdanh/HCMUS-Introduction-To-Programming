#ifndef BT9_BT94_PROCESS_H_
#define BT9_BT94_PROCESS_H_
#include <cstdio>

void file_process(int K, std::FILE *fi, std::FILE *fo = nullptr, int mode = 0);
void process(int mode, const int &K);

#endif // !BT9_BT94_PROCESS_H_
