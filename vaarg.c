#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* ANSI��׼��ʽ��������ʽ�������ڵ�ʡ�Ժű�ʾ��ѡ���� */  

int demo(char *msg, ...)  
{  
	va_list argp;		/* ���屣�溯�������Ľṹ */  
	int argno = 0;	/* ��¼�������� */  
	char *para;			/* ���ȡ�����ַ������� */  
	
	/* argpָ����ĵ�һ����ѡ������msg�����һ��ȷ���Ĳ��� */  
	va_start(argp, msg);  
	
	while (1) 
	{  
		para = va_arg(argp, char *);			/* ȡ����ǰ�Ĳ���������Ϊchar *. */  
		if (strcmp(para, "/0") == 0)  	/* ���ÿմ�ָʾ����������� */                  
			break; 
			 
		printf("Parameter #%d is: %s\n", argno, para);  
		argno++;  
	}  
	va_end(argp);		/* ��argp��ΪNULL */  
	return 0;  
}

void main(void)  
{  
	demo("DEMO", "This", "is", "a", "demo!" ,"end", "/0");
}  