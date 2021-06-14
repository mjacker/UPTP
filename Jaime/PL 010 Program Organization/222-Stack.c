//#include <stdboll.h> /* C99 only*/
#include <stdio.h>
#define STACK_SIZE 5
#define bool int
#define TRUE 1
#define FALSE 0

/*external variables*/
int contents[STACK_SIZE];
int top;

//Definiciones
void stack_overflow(void);
void stack_underflow(void);

void make_empty(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(int i) {
	if(is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void) {
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

//Definir funciones de stack_overflow y underflow
void stack_overflow(void) {
	printf("No se puede cargar, el vector ya se encuentra lleno. \n");
}

void stack_underflow(void)
{
	printf("No se puede quitar un elemento, el vector se encuentra vacio. \n");
}


void printS(void){
	int i;
	if (is_empty())
		printf("\n\n\t{ ");
	else	
		printf("\n\n\t{ ");
		for (i = 0; i < top;i++)
		{
			printf("%d, ", contents[i]);
		}
		printf("}\n\n");
}


int main(void) {
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	
	printS();
	
	printf("Retorna: %d", pop());
	
	printS();
	
	push(70);
	
	printS();
	
	make_empty();
	
	printS();
	
	pop();
	
}
