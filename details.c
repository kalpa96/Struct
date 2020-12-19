#include<stdio.h>

struct student{
    char name[50],address[60];
    int no,id,age;
    float marks;
} s[10];

void search_details(struct student s[]){
 	int i;
 	printf("Please enter if you want to user's id number= ");
 	scanf("%d",&s[i].id);
 	printf("%d\t%s\t%d\t%s\n",s[i+1].id,s[i+1].name,s[i+1].age,s[i+1].address,s[i+1].marks);
}

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i=0;i<11;++i) {
        s[i].no = i+1;
        printf("\nStudent 0%d\n", s[i].no);
        printf("Enter ID number : ");
        scanf("%d",&s[i].id);
        printf("Enter name : ");
        scanf("%s",&s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);
        printf("Enter address : ");
        scanf("%s",&s[i].address);
        printf("Enter marks : ");
        scanf("%f",&s[i].marks);
    }
    printf("\nDisplaying Information:\n");

    // displaying information
    for (i=0;i<11;i++){
		printf("you can search students details\n");
		search_details(s);
		printf("\n\n");
    }
    return 0;
}