#include <stdio.h>

int main() {
    int empId, deptNo;
    char desigCode;

    // Accepting input from user
    printf("Enter Employee Id: ");
    scanf("%d", &empId);
    printf("Enter Department No: ");
    scanf("%d", &deptNo);
    printf("Enter Designation Code: ");
    scanf(" %c", &desigCode);

    // Displaying output based on input
    switch(deptNo) {
        case 10:
            printf("Employee with employee id %d is working in \"Marketing\" department as ", empId);
            break;
        case 20:
            printf("Employee with employee id %d is working in \"Management\" department as ", empId);
            break;
        case 30:
            printf("Employee with employee id %d is working in \"Sales\" department as ", empId);
            break;
        case 40:
            printf("Employee with employee id %d is working in \"Designing\" department as ", empId);
            break;
        default:
            printf("Invalid Department Number\n");
            return 0;
    }

    switch(desigCode) {
        case 'M':
            printf("\"Manager\"\n");
            break;
        case 'S':
            printf("\"Supervisor\"\n");
            break;
        case 's':
            printf("\"Security Officer\"\n");
            break;
        case 'C':
            printf("\"Clerk\"\n");
            break;
        default:
            printf("Invalid Designation Code\n");
    }

    return 0;
} 
