#include<stdio.h>
struct student
{
    int roll_no,marks;
    char name[10];
}
    stud[100],t;

void main()
{
    int i,j,n;


    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %s %d",&stud[i].roll_no,stud[i].name,&stud[i].marks);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].marks<stud[j+1].marks)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }
    printf("Roll\t|%cName\t|%cMarks\n");
    printf("-------------------------\n");
    for(i=0;i<n;i++)
    {


        printf("%4d | %s\t| %d\n",stud[i].roll_no,stud[i].name,stud[i].marks);
    }
}
