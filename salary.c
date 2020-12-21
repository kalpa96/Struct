#include<stdio.h>

struct employee{
	char name[30];
	int hrsOfWork;
	int salary;
};

int main(){
	struct employee e[]={
	{"Amal",8,10000},
	{"Kamal",12,15000},
	{"Nimal",10,20000},
	{"Sunil",12,25000},
	{"Bimal",8,30000},
	{"Vimal",10,35000},
	{"Namal",12,30000},
	{"Sarath",8,25000},
	{"Saman",10,20000},
	{"Kasun",8,15000}
	};

	int i, j, k;
	
	for(j=0; j<10; j++){
		if(e[j].hrsOfWork==8){
			e[j].salary = e[j].salary + 500*30;
		}
		else if(e[j].hrsOfWork==10){
			e[j].salary = e[j].salary + 1000*30;
		}
		else if(e[j].hrsOfWork==12){
			e[j].salary = e[j].salary + 1500*30;
		}
	}
	printf("\nSalaries after the updated..\n");
	printf("------------------------------\n");
	for(k=0; k<10; k++){
		printf("%s's salary is %d\n", e[k].name, e[k].salary);
	}
	
	return 0;
}