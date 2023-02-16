#include "Process.h"
#include "IOFunctions.h"

int main(void) {
	int K = getKey();
	process(0, K);
	process(1, K);
	return 0;
}