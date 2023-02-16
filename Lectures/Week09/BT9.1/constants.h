#ifndef BT9_BT91_CONSTANTS_H_
#define BT9_BT91_CONSTANTS_H_

static const int N = 500;
enum inp {
	tu_so, 
	mau_so
};

enum out {
	tong,
	tich,
	nghich_dao,
	rut_gon
};

static const char input[][10] = { "tu so", "mau so" };
static const char output[][15] = {
	"tong",
	"tich",
	"nghich dao",
	"rut gon"
};

#endif // !BT9_BT91_CONSTANTS_H_
