#include<stdio.h>
#include<stdlib.h>

int BUFFER_SIZE=5;
int buffer[5];
int in=0,out=0;
int counter=0;

void producer();
void consumer();
void display_buffer();

int main(){
	int choice;
	while(1){
		printf("----MENU---\n");
		printf("1.Produce Item\n");
		printf("2.Consume Item\n");
		printf("3.Exit\n");
		printf("BUFFER_SIZE: 5\n");
		printf("---------------");
		printf("In : %d | Out : %d | Counter : %d\n",in,out,counter);
		printf("Enter choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1: producer();display_buffer();break;
			case 2: consumer();display_buffer();break;
			case 3: exit(0);
			default : printf("Invalid choice\n");
		}

	}

	return 0;
}

void producer(){
	int next_produced;
	if(((in+1)%BUFFER_SIZE)==out){
		printf("Producer is full Cannot Produce \n");
	}
	else{
		printf("Enter the value to be produced: ");
		scanf("%d",&next_produced);
		buffer[in]=next_produced;
		in =(in+1)%BUFFER_SIZE;
		counter++;
	}
}



void consumer(){
	int next_consumed;
	if(in==out){
		printf("Buffer is empty");
		return;
	}
	else{
		next_consumed=buffer[out];
		out=out+1;
		counter--;
		printf("Value Consumed : %d \n",next_consumed);
	}

}



void display_buffer(){
	for(int i=0;i<BUFFER_SIZE;i++){
		printf("%d | ",buffer[i]);
	}
}
