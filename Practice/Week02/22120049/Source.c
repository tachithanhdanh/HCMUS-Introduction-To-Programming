/* Bai_5.1.c */
//#include <stdio.h>
//
//int main(void) {
//    double a, b;
//    printf("Nhap hai so a va b (cach nhau boi dau cach): ");
//    scanf_s("%lf%lf", &a, &b);
//    double min;
//    if (a < b) {
//        min = a;
//    } else {
//        min = b;
//    }
//    printf("so nho nhat trong hai so la %lf\n", min);
//    return 0;
//}

/* Bai_5.2.c */
//#include <stdio.h>
//
//int main(void) {
//    int x;
//    printf("Nhap so nguyen x = ");
//    scanf_s("%d", &x);
//    // Neu x chia het cho 2 thi in ra "x la so chan"
//    //     nguoc lai in ra "x la so le"
//    if (x % 2 == 0) {
//        printf("x la so chan\n");
//    } else {
//        printf("x la so le\n");
//    }
//    return 0;
//}

/* Bai_5.3.c */
//#include <stdio.h>
//
//int main(void) {
//    double a;
//    printf("Nhap a = ");
//    scanf_s("%lf", &a);
//
//    double b;
//    printf("Nhap b = ");
//    scanf_s("%lf", &b);
//
//    if (b == 0.0) {
//        printf("Khong tinh duoc thuong do mau bang 0\n");
//    } else {
//        double thuong = a / b;
//        printf("Thuong cua a chia cho b la %lf\n", thuong);
//    }
//    return 0;
//}

/* Bai_5.4.c */
//#include <stdio.h>
//
//int main(void) {
//    double a, b, c;
//    printf("nhap 3 so thuc a, b va c (cach nhau boi dau cach): ");
//    scanf_s("%lf%lf%lf", &a, &b, &c);
//
//    // gan truoc gia tri max cho a
//    double max = a;
//    
//    // neu b > max thi gan max cho b
//    if (b > max) {
//        max = b;
//    }
//
//    // neu c > max thi gan max cho c
//    if (c > max) { 
//        max = c;
//    }
//
//    // xuat so lon nhat trong 3 so
//    printf("so lon nhat trong 3 so la %lf\n", max);
//    return 0;
//}

/* Bai_5.5.c */
//#include <stdio.h>
//
//int main(void) {
//    printf("Chuong trinh giai phuong trinh bac nhat 1 an dang ax + b = 0\n");
//    double a, b;
//    printf("Nhap a = ");
//    scanf_s("%lf", &a);
//    printf("Nhap b = ");
//    scanf_s("%lf", &b);
//    
//    if (a == 0.0) {
//        if (b == 0.0) {
//            printf("Phuong trinh co vo so nghiem thuc x thoa man ax + b = 0\n");
//        } else {
//            printf("Phuong trinh vo nghiem\n");
//        }
//    } else {
//        double nghiem = -b / a;
//         doi dau - thanh dau + trong truong hop nghiem co gia tri la -0.0 de tang tinh tham my
//        if (nghiem == -0.0) nghiem = 0.0;
//        printf("Phuong trinh co nghiem duy nhat x = %.6lf\n", nghiem);
//    }
//    return 0;
//}

/* Bai_5.6.c */
//#include <stdio.h>
//#include <math.h>
//
//int main(void) {
//    double a, b, c;
//    printf("Nhap do dai ba canh cua tam giac (ngan cach nhau boi dau cach): ");
//    scanf_s("%lf%lf%lf", &a, &b, &c);
//
//    // sap xep a b c theo thu tu tang dan
//    double temp;
//    if (a > b) {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//
//    if (a > c) {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//
//    if (b > c) {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//
//    if (a > 0.0 && b > 0.0 && c > 0.0 && a + b > c && a + c > b && b + c > a) {
//        printf("Ba canh vua nhap tao thanh mot tam giac\n");
//        printf("Ba canh tren tao thanh tam giac");
//        if (a == b && b == c) {
//            printf(" deu");
//        } else {
//            double c_2 = c * c; // binh phuong cua c
//            double a_b_2 = a * a + b * b; // a ^ 2 + b ^ 2
//
//            // vuong = 1 neu la tam giac vuong, nguoc lai vuong = 0
//            int vuong = abs(c_2 - a_b_2) <= 1E-9; 
//            if (vuong) {
//                printf(" vuong");
//            } 
//
//            // can = 1 neu la tam giac can, nguoc lai can = 0
//            int can = (a == b) || (b == c);
//            if (can) {
//                printf(" can");
//            }
//        }
//    } else {
//        printf("Ba canh nay khong tao thanh mot tam giac\n");
//    }
//    return 0;
//}

/* Bai_5.7.c */
//#include <stdio.h>
//
//int main(void) {
//	double a, b, c;
//	printf("nhap 3 so a, b va c (cach nhau boi dau cach): ");
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//
//	// sap xep a b c theo thu tu tang dan
//	double temp;
//	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//
//	if (a > c) {
//		temp = a;
//		a = c;
//		c = temp;
//	}
//
//	if (b > c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("3 so a, b, c sau khi da sap xep theo thu tu tang dan: a = %lf, b = %lf, c = %lf", a, b, c);
//	return 0;
//}

/* Bai_5.8.c */
//#include <stdio.h>
//
//int main(void) {
//	double so_km;
//	printf("Nhap so km da di duoc: ");
//	scanf_s("%lf", &so_km);
//	double tien_di_taxi = 0;
//	if (so_km <= 1.0) {
//		tien_di_taxi = so_km * 5000.0;
//	} else if (1.0 < so_km && so_km <= 5.0) {
//		tien_di_taxi = 5000.0 + (so_km - 1.0) * 4500.0;
//	} else {
//		// 23000.0 = 5000.0 * 1.0 + 4500.0 * 4.0
//		tien_di_taxi = 23000.0 + (so_km - 5.0) * 3500.0;
//	}
//
//	if (so_km >= 120.0) {
//		// giam 10% so tien
//		tien_di_taxi *= 0.9;
//	}
//
//	printf("Tien di taxi = %lf\n", tien_di_taxi);
//	return 0;
//}

/* Bai_5.9.c */
//#include <stdio.h>
//
//// so tien su dung moi gio trong khung gio tu 7 - 17 gio
//#define SOTIEN1 (400 * 60)
//
//// so tien su dung moi gio trong khung gio tu 18 - 24 gio
//#define SOTIEN2 (350 * 60)
//
//// so tien su dung moi gio trong khung gio tu 1 - 6 gio
//#define SOTIEN3 (300 * 60)
//
//int main(void) {
//	int gio_bat_dau, gio_ket_thuc;
//	printf("Nhap gio bat dau su dung internet: ");
//	scanf_s("%d", &gio_bat_dau);
//	printf("Nhap gio ket thuc su dung internet: ");
//	scanf_s("%d", &gio_ket_thuc);
//	int so_gio_1, so_gio_2, so_gio_3;
//	so_gio_1 = so_gio_2 = so_gio_3 = 0;
//	// chay bien gio tu gio_bat_dau den gio_ket_thuc de kiem tra
//	for (int gio = gio_bat_dau; gio <= gio_ket_thuc; ++gio) {
//		// neu trong khoang tu gio_bat_dau den gio_ket_thuc co luc nam trong khung gio 1 thi ++so_gio_1
//		if (7 <= gio && gio <= 17) {
//			++so_gio_1;
//		}
//
//		// neu trong khoang tu gio_bat_dau den gio_ket_thuc co luc nam trong khung gio 2 thi ++so_gio_2
//		if (18 <= gio && gio <= 24) {
//			++so_gio_2;
//		}
//
//		// neu trong khoang tu gio_bat_dau den gio_ket_thuc co luc nam trong khung gio 3 thi ++so_gio_3
//		if (1 <= gio && gio <= 6) {
//			++so_gio_3;
//		}
//	}
//	
//	int so_tien_khung_1 = so_gio_1 * SOTIEN1;
//	if (so_gio_1 > 6) {
//		so_tien_khung_1 -= so_tien_khung_1 * 10 / 100;
//	}
//	int so_tien_khung_2 = so_gio_2 * SOTIEN2;
//	if (so_gio_2 > 4) {
//		so_tien_khung_2 -= so_tien_khung_2 * 12 / 100;
//	}
//	int so_tien_khung_3 = so_gio_3 * SOTIEN3;
//	if (so_gio_3 > 4) {
//		so_tien_khung_3 -= so_tien_khung_3 * 15 / 100;
//	}
//
//	int tong_so_tien = so_tien_khung_1 + so_tien_khung_2 + so_tien_khung_3;
//	printf("tong so tien truy cap internet = %d\n", tong_so_tien);
//	return 0;
//}

/* Bai_5.10.c */
//#include <stdio.h>
//
//#define GIA_TIEN_LOAI_A 250000
//#define GIA_TIEN_LOAI_B 200000
//#define GIA_TIEN_LOAI_C 150000
//
//int main(void) {
//	int so_ngay_thue;
//	char loai_phong;
//	printf("Nhap so ngay thue: ");
//	scanf_s("%d", &so_ngay_thue);
//	printf("Nhap loai phong (A, B hoac C): ");
//	scanf_s(" %c", &loai_phong, 1);
//	int so_tien_thue = 0;
//	if (loai_phong == 'A') {
//		so_tien_thue = so_ngay_thue * GIA_TIEN_LOAI_A;
//		if (so_ngay_thue > 12) {
//			so_tien_thue -= so_tien_thue * 10 / 100;
//		}
//	} else {
//		if (loai_phong == 'B') {
//			so_tien_thue = so_ngay_thue * GIA_TIEN_LOAI_B;
//		} else {
//			so_tien_thue = so_ngay_thue * GIA_TIEN_LOAI_C;
//		}
//
//		if (so_ngay_thue > 12) {
//			so_tien_thue -= so_tien_thue * 8 / 100;
//		}
//	}
//
//	printf("tien thue phong = %d\n", so_tien_thue);
//	return 0;
//}

/* Bai_5.11.c */
//#include <stdio.h>
//
//int main(void) {
//	int thang;
//	printf("Nhap thang: ");
//	scanf_s("%d", &thang);
//	switch (thang) {
//		case 1: case 2: case 3:
//			printf("thang nhap vao thuoc mua xuan\n"); break;
//		case 4: case 5: case 6:
//			printf("thang nhap vao thuoc mua ha\n"); break;
//		case 7: case 8: case 9:
//			printf("thang nhap vao thuoc mua thu\n"); break;
//		case 10: case 11: case 12:
//			printf("thang nhap vao thuoc mua dong\n"); break;
//		default:
//			printf("thang nhap vao khong hop le\n");
//	}
//	return 0;
//}

/* Bai_5.12.c */
//#include <stdio.h>
//
//int main(void) {
//	int nam;
//	printf("Nhap nam duong lich (tu 1975 tro di): ");
//	scanf_s("%d", &nam);
//
//	if (nam % 4 == 0 && nam >= 1988) {
//		printf("nam %d co to chuc Olympic va Euro\n", nam);
//	}
//
//	if (nam % 4 == 2 && nam >= 1990) {
//		printf("nam %d co to chuc World Cup\n", nam);
//	}
//
//	if (nam % 2 == 1 && nam >= 1995) {
//		printf("nam %d co to chuc SEA Games\n", nam);
//	}
//
//	return 0;
//}

/* Bai_5.13.c */
//#include <stdio.h>
//
//#define nam_hien_tai 2022
//
//int main(void) {
//    // cho ngay = -1 va thang = -1 
//    //    de trong truong hop nhap vao gia tri khong phai so nguyen thi chuong trinh se bao loi
//    int ngay = -1, thang = -1;
//    printf("Nhap ngay, thang (ngan cach nhau boi dau cach): ");
//    scanf_s("%d%d", &ngay, &thang);
//
//    // luu giu gia tri ngay thang khong hop le
//    // gia tri 0 the hien ngay/thang da nhap la hop le, gia tri 1 la khong hop le
//    int ngay_khong_hop_le = 0, thang_khong_hop_le = 0;
//
//    int so_ngay = 31;
//    if (thang < 1 || thang > 12) {
//        thang_khong_hop_le = 1;
//    } else {
//        if (thang == 2) {
//            so_ngay = 28;
//        } else if ((thang <= 7 && thang % 2 == 1) || (thang >= 8 && thang % 2 == 0)) {
//            so_ngay = 31;
//        } else {
//            so_ngay = 30;
//        }
//    }
//
//    // neu ngay nhap vao nam ngoai so ngay co trong thang luu ngay_khong_hop_le = 1
//    if (ngay < 1 || ngay > so_ngay) {
//        ngay_khong_hop_le = 1;
//    }
//
//    // Neu ngay hoac thang nhap vao khong hop le thi khong in ra ket qua ma bao loi cho nguoi dung
//    if (ngay_khong_hop_le || thang_khong_hop_le) {
//        if (ngay_khong_hop_le) {
//            printf("ngay nhap vao khong hop le\n");
//        }
//        if (thang_khong_hop_le) {
//            printf("thang nhap vao khong hop le\n");
//        }
//    } else {
//        printf("ngay ban nhap la ngay %d thang %d nam %d\n", ngay, thang, nam_hien_tai);
//        printf("thang da nhap la thang %d va thang nay co %d ngay\n", thang, so_ngay);
//
//        int ngay_hom_sau = ngay + 1;
//        int thang_cua_ngay_hom_sau = thang;
//        int nam_cua_ngay_hom_sau = nam_hien_tai;
//        // neu ngay da nhap la ngay cuoi thang
//        if (ngay == so_ngay) {
//            ngay_hom_sau = 1;
//            ++thang_cua_ngay_hom_sau;
//            // trong truong hop qua nam moi
//            if (thang_cua_ngay_hom_sau > 12) {
//                thang_cua_ngay_hom_sau = 1;
//                ++nam_cua_ngay_hom_sau;
//            }
//        }
//        printf("ngay hom sau cua ngay da nhap la ngay %d thang %d nam %d\n",
//            ngay_hom_sau, thang_cua_ngay_hom_sau, nam_cua_ngay_hom_sau);
//
//        int ngay_hom_truoc = ngay - 1;
//        int thang_cua_ngay_hom_truoc = thang;
//        int nam_cua_ngay_hom_truoc = nam_hien_tai;
//        if (ngay == 1) {
//            --thang_cua_ngay_hom_truoc;
//            // trong truong hop la ngay cua nam truoc
//            if (thang_cua_ngay_hom_truoc == 0) {
//                ngay_hom_truoc = 31;
//                thang_cua_ngay_hom_truoc = 12;
//                --nam_cua_ngay_hom_truoc;
//            } else if (thang_cua_ngay_hom_truoc == 2) {
//                ngay_hom_truoc = 28;
//            } else if ((thang_cua_ngay_hom_truoc <= 7 && thang_cua_ngay_hom_truoc % 2 == 1)
//                || (thang_cua_ngay_hom_truoc >= 8 && thang_cua_ngay_hom_truoc % 2 == 0)) {
//                ngay_hom_truoc = 31;
//            } else {
//                ngay_hom_truoc = 30;
//            }
//        }
//        printf("ngay hom truoc cua ngay da nhap la ngay %d thang %d nam %d\n",
//            ngay_hom_truoc, thang_cua_ngay_hom_truoc, nam_cua_ngay_hom_truoc);
//    }
//    return 0;
//}