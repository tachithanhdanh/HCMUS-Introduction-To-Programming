#include <stdio.h>

constexpr int N = 1001;

void bai_5_1();
FILE* openFile(const char *mode);
void readFile(int &n, int a[]);
void writePrimeNumbersToFile(const int &, const int []);
void writePalindromeNumbersToFile(const int &, const int[]);
bool isPrime(int num);
bool isPalindrome(int num);

FILE* openFile(const char *mode) {
	char filename[101] = {};
	printf("Nhap ten tap tin: ");
	scanf(" %[^\n]s", filename);
	FILE *fp = fopen(filename, mode);
	if (fp == nullptr) {
		puts("File not found!");
	}
	return fp;
}

void readFile(int &n, int a[]) {
	printf("5.1.1. Doc noi dung vao trong mang mot chieu.\n");
	FILE *fp = openFile("r");
	if (fp == nullptr) {
		return;
	}
	fscanf(fp, "%d", &n);
	for (int i = 0; i < n; ++i) {
		fscanf(fp, "%d", &a[i]);
	}
	fclose(fp);
	return;
}

void writePrimeNumbersToFile(const int& n, const int a[]) {
	printf("5.1.2. Ghi noi dung ra mot tap tin khac voi dieu kien chi ghi so nguyen to.\n");
	FILE *fp = openFile("w");
	if (fp == nullptr) {
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (isPrime(a[i])) {
			fprintf(fp, "%d\n", a[i]);
		}
	}
	fclose(fp);
	return;
}

void writePalindromeNumbersToFile(const int &n, const int a[]) {
	printf("5.1.3 Ghi noi dung ra mot tap tin khac voi dieu kien chi ghi so doi xung.\n");
	FILE *fp = openFile("w");
	if (fp == nullptr) {
		return;
	}
	for (int i = 0; i < n; ++i) {
		if (isPalindrome(a[i])) {
			fprintf(fp, "%d\n", a[i]);
		}
	}
	return;
}

bool isPrime(int num) {
	if (num < 2) return false;
	if (num == 2 || num == 3 || num == 5 || num == 7) return true;
	if (num % 2 == 0) return false;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

bool isPalindrome(int num) {
	int s[20] = {};
	int size = 0;
	while (num) {
		s[size++] = num % 10;
		num /= 10;
	}
	if (!size) return true;
	int i = 0, j = size - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		++i, --j;
	}
	return true;
}

void bai_5_1() {
	puts("Bai 5.1.");
	int n;
	static int a[N];
	readFile(n, a);
	writePrimeNumbersToFile(n, a);
	writePalindromeNumbersToFile(n, a);
	return;
}

#define MAXCHARS 1024

char *fgetline(FILE * fp, char *str, int maxSize) {
	int ch, len;
	if (feof(fp)) return NULL;
	str[0] = 0; len = 0;
	do {
		ch = fgetc(fp);
		if (ch == '\n' || ch == EOF) break;
		if (len < maxSize - 1) {
			str[len] = ch;
			len++;
		}
	} while (1);
	str[len] = 0;
	return str;
	
}

#define szCode 8
#define szName 25
#define szDate 11

struct student {
	char Code[szCode];
	char Name[szName];
	char BirthDate[szDate];
	double Grade1, Grade2, Grade3;
	double GPA;
};
typedef struct student STUDENT;

int getStudent(FILE * fp, STUDENT & sv) {
	double s1, s2, s3; int ch;
	fgetline(fp, sv.Code, szCode);
	fgetline(fp, sv.Name, szName);
	fgetline(fp, sv.BirthDate, szDate);
	if (fscanf(fp, " %lf %lf %lf", &s1, &s2, &s3) <= 0) return 0;
	ch = fgetc(fp);//Lay ki tu '\n' 
	sv.Grade1 = s1; sv.Grade2 = s2; sv.Grade3 = s3; sv.GPA = (s1 + s2 + s3) / 3;
	return 1;
}

#define maxStudent 100
void getAllStudents(FILE * fp, STUDENT svList[], int &n) {
	STUDENT sv; n = 0;
	while (!feof(fp)) {
		if (n < maxStudent && getStudent(fp, sv)) {
			svList[n] = sv;
			n++;
		}
		else break;
	}
}

void swap(STUDENT &sv1, STUDENT &sv2) {
	STUDENT sv_temp = sv2; 
	sv2 = sv1;
	sv1 = sv_temp;
	return;
}

void sort(STUDENT svlist[], const int &n) {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (svlist[i].GPA > svlist[j].GPA) {
				swap(svlist[i], svlist[j]);
			}
		}
	}
	return;
}

void bai_5_2() {
	STUDENT lst[maxStudent]; int n;
	FILE * fp = fopen("Student.txt", "r");
	if (fp == NULL) return;
	getAllStudents(fp, lst, n);
	fclose(fp);
	fp = fopen("SortedStudent.txt", "w");
	sort(lst, n);
	for (int i = 0; i < n; ++i) {
		fprintf(fp, "%s\n%s\n%s\n%lf %lf %lf\n%lf\n", lst[i].Code, lst[i].Name, lst[i].BirthDate, lst[i].Grade1, lst[i].Grade2, lst[i].Grade3, lst[i].GPA);
	}
	fclose(fp);
	return;
}

void bai_5_3();
void readDataToMatrix(int a[N][N], int& n, int& m, FILE* fp);
void sortMatrixAndWrite(int a[N][N], int n, int m);
void sumOfEvenNumbersInMatrix(int a[N][N], int n, int m, FILE* fp);
void swap(int &a, int &b);

void bai_5_3() {
	printf("Bai 5.3\n");
	static char filename[N] = {};
	FILE *fp;
	do {
		printf("Nhap ten file can doc: ");
		scanf(" %[^\n]s", filename);
		fp = fopen(filename, "r+");
		if (fp == nullptr) {
			printf("File khong ton tai, vui long nhap lai!\n");
		}
	} while (fp == nullptr);
	static int a[N][N];
	int n, m;
	readDataToMatrix(a, n, m, fp);
	//sortMatrixAndWrite(a, n, m);
	sumOfEvenNumbersInMatrix(a, n, m, fp);
	return;
}

void readDataToMatrix(int a[N][N], int &n, int &m, FILE *fp) {
	fscanf(fp, "%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			fscanf(fp, "%d", &a[i][j]);
		}
	}
	return;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

void sortMatrixAndWrite(int a[N][N], int n, int m) {
	for (int i = 0; i < n * m; ++i) {
		for (int j = i + 1; j < n * m; ++j) {
			if (a[i / n][i % m] > a[j / n][j % m]) {
				swap(a[i / n][i % m], a[j / n][j % m]);
			}
		}
	}
	static char filename[N] = {};
	printf("Nhap ten file can xuat ra: ");
	scanf(" %[^\n]s", filename);
	FILE *fp = fopen(filename, "w");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			fprintf(fp, "%d%c", a[i][j], " \n"[j == m - 1]);
		}
	}
	return;
}

void sumOfEvenNumbersInMatrix(int a[N][N], int n, int m, FILE *fp) {
	fseek(fp, 0, SEEK_END);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] % 2 == 0) {
				sum += a[i][j];
			}
		}
	}
	fprintf(fp, "\nTong cac phan tu chan trong ma tran la: %d\n", sum);
	return;
}

int main(void) {
	//bai_5_1();
	//bai_5_2();
	bai_5_3();
	return 0;
}