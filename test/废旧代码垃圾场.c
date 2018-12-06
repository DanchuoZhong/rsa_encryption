/*这是个废弃的试验场
//函数功能：对文件按字节加密
//传入参数：暂无
//返回值：无
//创建时间：2018/11/18 13：22
//创建人：钟彤卓
//最后一次修改时间：2018/11/18 23:00
//其他注意事项：
*/
/*
void Lock()
{
//unsigned int p[4] = { 3,5,11,7 };
//unsigned int q[4] = { 89,67,31,43 };
unsigned int y[4]={176,264,300,252};
unsigned int n[4]={267,335,341,301};
unsigned int e[4] = { 17,5,7,11 };
unsigned int d[4]={145,53,43,23};

char ReadFile[4][20] = {"a1.bin","a2.bin" ,"a3.bin" ,"a4.bin" };
char CodeFile[4][20]= { "b1.bin","b2.bin" ,"b3.bin" ,"b4.bin" };
char WriteFile[4][20] = { "c1.bin","c2.bin" ,"c3.bin" ,"c4.bin" };
FILE* r_fp;
FILE* w_fp;
unsigned char c = EOF;
for (int i = 0; i < 4; i++)
{
c = EOF;
r_fp = fopen(ReadFile[i], "rb");
if (r_fp == NULL) { printf("没这文件\n"); return; };
w_fp = fopen(CodeFile[i], "wb");
while (fread(&c, sizeof(c), 1, r_fp) != 0)
{
printf("%d\t", c);
c = EncryptChar(c, e[0], n[0]);
printf("%d\t", c);
fwrite(&c, sizeof(c), 1, w_fp);
}
fclose(r_fp);
fclose(w_fp);
printf("\n");

r_fp = fopen(CodeFile[i], "rb");
w_fp = fopen(WriteFile[i], "wb");
c = EOF;
while (fread(&c, sizeof(c), 1, r_fp) != 0)
{
printf("%d\t", c);
c = DecryptChar(c, d[0], n[0]);
printf("%d\t", c);
fwrite(&c, sizeof(c), 1, w_fp);
}
fclose(r_fp);
fclose(w_fp);
}
}
*/


/*
//函数功能：由输入决定读/写文件
//传入参数：
//返回值：
//创建时间：2018/11/18 13：22
//创建人：钟彤卓
//最后一次修改时间：2018/11/18 13：22
//其他注意事项：大小限制在1024
*/
int SwitchTest()
{
	int choice;
	scanf("%d", &choice);
	getchar();
	char s[1024];
	FILE *fp;
	switch (choice)
	{
		case 0:
			gets(s);
			fp = fopen("a.bin", "wb");
			fwrite(s, 1024, 1, fp);
			fclose(fp);
			break;
		case 1:
			fp = fopen("a.bin", "rb");
			fread(s, 1024, 1, fp);
			puts(s);
			fclose(fp);
			break;
	}
}