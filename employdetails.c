#include <stdio.h>
 
struct employee{
    char    name[30];
    int     empAGE;
    int     empMOBILENO;
    float   salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("AGE ?:");            scanf("%d",&emp.empAGE);
    printf("MOBILE NO. ?:");            scanf("%d",&emp.empMOBILENO);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    printf("\nEntered detail is:");
    printf("\nName: %s"   ,emp.name);
    printf("\nAGE: %d"     ,emp.empAGE);
    printf("\nMOBILE NO.: %d"     ,emp.empMOBILENO);
    printf("\nSalary: %f\n",emp.salary);
    return 0;
}
