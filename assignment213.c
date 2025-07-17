#include<stdio.h>
#include<string.h>

struct student{
	
	int roll;
	char name[50];
	float percentage;
};

int main(){
	
	struct student s[50];
	int size,i;
	printf("\n Enter a number of student=");
	scanf("%d",&size);
	
     for(i=0;i<size;i++)
	{
		
		printf("\nEnter the roll no. = "); 
        scanf("%d",&s[i].roll); 
        printf("\nEnter the name = "); 
        scanf("%s",&s[i].name); 
        printf("\nEnter the percentage = "); 
        scanf("%f",&s[i].percentage); 
	}
	
    for(i=0;i<size;i++){
	

        printf("\nRoll no. = %d",s[i].roll); 
        printf("\nName = %s",s[i].name); 
        printf("\npercentage = %f",s[i].percentage); 
        return 0;
}
}
