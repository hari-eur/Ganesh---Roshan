#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DEPARTMENTS 10
#define MAX_STUDENTS 100

struct Student_Details 
{
    char name[50];
    char mailID[50];
    char mobileNumber[50];
    char percentage[50];
};

struct Department 
{
    char deptName[50];
    struct Student_Details students[MAX_STUDENTS];
    int numStudents;
    float totalAverage;
};

main() 
{
    int numInputs;
    printf("Number of Inputs: ");
    scanf("%d", &numInputs);
    
    struct Department departments[MAX_DEPARTMENTS];
    int numDepartments = 0;

    for (int i = 0; i < numInputs; i++) 
    {
        char name[50], mailID[50], mobileNumber[50], percentage[50], deptName[50];
        printf("Enter student details (Name, mailID, mobile number, percentage, department):\n");
        scanf("%s %s %s %s %s", name, mailID, mobileNumber, percentage, deptName);

        int departmentIndex = -1;
        for (int j = 0; j < numDepartments; j++) 
	{
            if (strcmp(departments[j].deptName, deptName) == 0) 
	    {
                departmentIndex = j;
                break;
            }
        }
        if (departmentIndex == -1) 
        {
            departmentIndex = numDepartments;
            strcpy(departments[numDepartments].deptName, deptName);
            departments[numDepartments].numStudents = 0;
            departments[numDepartments].totalAverage = 0;
            numDepartments++;
        }

        struct Student_Details student;
        strcpy(student.name, name);
        strcpy(student.mailID, mailID);
        strcpy(student.mobileNumber, mobileNumber);
        strcpy(student.percentage, percentage);
        departments[departmentIndex].students[departments[departmentIndex].numStudents] = student;
        departments[departmentIndex].numStudents++;

        float totalPercentage = 0;
        for (int j = 0; j < departments[departmentIndex].numStudents; j++) 
	{
            char *percentage = departments[departmentIndex].students[j].percentage;
            int percentageValue = atoi(percentage);
            totalPercentage += percentageValue;
        }
        departments[departmentIndex].totalAverage = totalPercentage / departments[departmentIndex].numStudents;
    }

    printf("Number of branches: %d\n", numDepartments);
    printf("Average percentage per Department:\n");

    for (int i = 0; i < numDepartments; i++) 
    {
        printf("%s - %.0f%%\n", departments[i].deptName, departments[i].totalAverage);
    }
}
