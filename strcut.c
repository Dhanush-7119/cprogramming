#include <stdio.h>

struct student {
    char name[50];
    int marks[4];
    float total;
    float aggregate;
    char grade;
};

int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    for (i = 0; i < n; i++)
	 {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (j = 0; j < 4; j++) {
            printf("Enter the marks of subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].aggregate = s[i].total / 4;
    }
    for (i = 0; i < n; i++) 
	{
        if (s[i].aggregate >= 75) 
		{
            s[i].grade = 'D';
        } else if (s[i].aggregate >= 60) 
		{
            s[i].grade = 'F';
        } else if (s[i].aggregate >= 50) 
		{
            s[i].grade = 'S';
        } else if (s[i].aggregate >= 40) 
		{
            s[i].grade = 'T';
        } else 
		{
            s[i].grade = 'F';
        }
    }
    printf("\n\nName\t\tTotal\tAggregate\tGrade\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%.2f\t%.2f\t\t%c\n", s[i].name, s[i].total, s[i].aggregate, s[i].grade);
    }

    return 0;
}


