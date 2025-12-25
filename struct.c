//structure is a user defined datatypes - allows you to store multiple variables and of different datatypes under one name

//struct structure_name{
//	data_type member1;
//	data_type member2;
//	data_type member3;
//}
#include<stdio.h>

struct student{
	int roll;
	float marks;
	char grade;
};
int main(){
    struct student s1;
    struct student s2;
    struct student s3;
    
    s1.roll = 101;
    s1.marks = 82.20;
    s1.grade = 'A';
    
    s2.roll = 102;
    s2.marks = 40.20;
    s2.grade = 'C';
    
    
    s3.roll = 103;
    s3.marks = 70.20;
    s3.grade = 'B';
    
    printf("-----Student s1 Details-----\n");
    
    printf("Roll no = %d\n",s1.roll);
    printf("Marks = %.2f\n",s1.marks);
    printf("Grade = %c\n",s1.grade);
    
     printf("-----Student s2 Details-----\n");
    
    printf("Roll no = %d\n",s2.roll);
    printf("Marks = %.2f\n",s2.marks);
    printf("Grade = %c\n",s2.grade);
    
    printf("-----Student s3 Details-----\n");
    
    printf("Roll no = %d\n",s3.roll);
    printf("Marks = %.2f\n",s3.marks);
    printf("Grade = %c\n",s3.grade);
    
    
    return 0;
}
