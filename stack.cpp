#include <stdlib.h>
#include <stdio.h>
typedef int item; // kieu du lieu
typedef struct Note
{
	item Data;
	Note * Next; // link
};
typedef struct stack
{
	Note *top;
};
void init(stack &s);// tao stack rong
int isempty(stack s);//kiem trA STACk rong
int len(stack s);//do dai stack
void Push(stack &s, item x);//them phan tu vao stack
int peak(stack s);// lay phan tu dau stack
int pop(stack &s);//loai phan tu khoi stack
void input(stack &s);// nhap satck
void output(stack s);// xuat stack
Note*notepad(item x);//tao 1 note
void init (stack &s)//tao stack rong
{
	s.top = NULL;
}
int isempty(stack s)
{
	return(s.top == NULL);
}
int len(stack s)
{
	Note *p = s.top;
	int i =0;
	while(p != NULL)
	{
		i++;
		p = p->Next;
	}
	return i;
}
Note *notepad(item x)
{
	Note *p = (Note *)malloc(sizeof(Note));
	p->Next = NULL;
	p->Data = x;
	return p;
}
void Push( stack &s , item x)
{
	Note *p = notepad(x);
	p-> Next = s.top;
	s.top = p;
}
int peak(stack s)
{
	return s.top ->Data;
}
int pop(stack &s)
{
	if(!isempty(s))
	{
		item x = s.top ->Data;
		s.top = s.top -> Next;
		return x;
	}
}
void input(stack &s)
{
	int i =0;
	item x;
	do
	{
		i++;
		printf("nhap phan tu thu %d", i);
		scanf("%d", &x);
		if( x != 0)
			Push(s,x);

	}
	while(x != 0);
}
void output(stack s)
{
	Note *p = s.top;
	while( p != NULL)
	{
		printf("%d ", p -> Data);
		p = p->Next;
	}
	printf("\n");
}
int main()
{
	stack s;
	init (s);
	input(s);
	output(s);
	int seclect;
	printf("seclect math with Data stack");
	printf("\n 1 test stack empty \n2 long stack\n 3 add stack\n 4 delete stack \n 5 output stack\n 6 exit");
	do
	{
		printf("\n selec :");
		scanf("%d", &seclect);
		switch(seclect)
		{
			case 1:
			{
				if(isempty(s))
					printf("stack empty\n");
				else
					printf("stack no empty\n");
				break;
			}
			case 2:
			{
				printf("long stack : %d\n", len(s));
				break;
			}
			case 3:
			{
				item x;
				printf("enter add stack :");
				scanf("%d", &x);
				Push(s,x);
				break;
			}
			case 4:
			{
				pop(s);
				break;
			}
			case 5:
			{
				output(s);
				break;
			}
			case 6 :
			break;
		}
	}while(seclect != 6);
	return 0;
}