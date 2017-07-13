#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define COL 8		//一行显示十六进制的个数

void print_s(char *a, int col){
	if(col == COL){
		printf("%c%c%c%c%c%c%c%c\n",
		isgraph(a[0]) ? a[0] : ' ', 
		isgraph(a[1]) ? a[1] : ' ',
		isgraph(a[2]) ? a[2] : ' ',
		isgraph(a[3]) ? a[3] : ' ',
		isgraph(a[4]) ? a[4] : ' ',
		isgraph(a[5]) ? a[5] : ' ',
		isgraph(a[6]) ? a[6] : ' ',
		isgraph(a[7]) ? a[7] : ' '
		);	
	}else{
		for(int i = 0; i < col; ++i){
			printf("%c",
			isgraph(a[i]) ? a[i] : ' '
			);
		}
		printf("\n");
	}
}
void print_x(char *a, int col){
	if(col == COL){
		printf("%02X %02X %02X %02X %02X %02X %02X %02X  |  ",
		(unsigned char)a[0], 
		(unsigned char)a[1], 
		(unsigned char)a[2], 
		(unsigned char)a[3], 
		(unsigned char)a[4], 
		(unsigned char)a[5], 
		(unsigned char)a[6], 
		(unsigned char)a[7]);
	}else{
		int i = 0;
		for(i; i < col; ++i)
			printf("%02X ",(unsigned char)a[i]);
		for(i; i < COL; ++i){
			printf("   ");
		}
		printf(" |  ");
	}
}
int main(int argc, char *argv[]){
	//初始
	char *path = "tmp.txt";
	if(argv[1] != NULL)
		path = argv[1];
	FILE *f1 = fopen(path, "rb");
	if(f1 == NULL){
		printf("Opening the file is failed!\n");
		exit(1);
	}
	char a[COL];
	size_t n;
	//转换
	while(feof(f1) == 0){
		n = fread(a, sizeof(char), COL, f1);
		print_x(a, n);
		print_s(a, n);
	}
	//收尾
	fclose(f1);
	return 0;
}
