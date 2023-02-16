#ifndef BT9_BT94_CONSTANTS_H_
#define BT9_BT94_CONSTANTS_H_

const int MAX_N = 200;

enum ErrorCode { noError, improper_form, date_not_valid };
const char *const error_message[] = {
	"",
	"Ngay nhap vao khong dung dinh dang. Vui long nhap lai.\n",
	"Ngay nhap vao khong ton tai. Vui long nhap lai.\n"
};

enum QuestionName { printList, previousDay, followingDay };
const char *const output[] = {
	"Danh sach cac ngay theo thu tu tu qua khu den tuong lai:\n",
	"Ngay hom qua N1 cua ngay dau danh sach: ",
	"Ngay hom sau N2 cua ngay cuoi danh sach: ",
};

#endif // !BT9_BT94_CONSTANTS_H_
