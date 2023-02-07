//wap to read from and write into a file
#include<stdio.h>
void main()
{
	FILE *fp;
	char str[32],*p;
	printf("\nenter any string::");
	gets(str);
	fp=fopen("G:/abc5.txt","w");
	fputs(str,fp);
	printf("\ndata is written into the file");
	fclose(fp);
	printf("\nreading data ....");
	fp=fopen("G:/abc5.txt","r");
	while((p=fgets(str,40,fp))!='\0')
	{
	printf("\n%s",str);
    }
    fclose(fp);
}
/*fp=fopen("G:/abc4.txt","r");
	while((p=fgets(str,40,fp))!='\0')
	{
	printf("%s",str);
    }
    fclose(fp);*/
    /*fp=fopen("G:/abc3.txt","w");
	fputc('c',fp);
	fp=fopen("G:/abc3.txt","r");
	c=getc(fp);
	printf("%c",c);
	fclose(fp);*/
