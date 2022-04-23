/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for add a new student*/
void option8(Node **header){
    Node *traverse = *header;
    Node *newStd = malloc(sizeof(Node));
    int i = 0;
    char *name;
    int id;
    char currentChar;
    printf("Enter the Student's Name: ");
    getchar();
    currentChar = getchar();
    while(currentChar!='\n'){ /*Get new student name*/
        newStd->Student.student_name[i] = currentChar;
        currentChar = getchar();
        i++;
    }
    
    printf("Enter the Student's ID Number: "); /*Get new student ID*/
    scanf("%i",&id);
    while(ID_isduplicate(header,id)==1){
        printf("Student ID Number entered was a duplicate.\n");
        printf("Enter the Student's ID Number: ");
        scanf("%i",&id);
    }
    
        /*Get new student's scores*/
        newStd->Student.student_ID = id;
        printf("Enter first Quizzes score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat1.score1));
        printf("Enter second Quizzes score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat1.score2));
        printf("Enter third Quizzes score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat1.score3));
        printf("Enter first Midterms score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat2.score1));
        printf("Enter second Midterms score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat2.score2));
        printf("Enter third Midterms score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat2.score3));
        printf("Enter first Homework score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat3.score1));
        printf("Enter second Homework score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat3.score2));
        printf("Enter third Homework score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat3.score3));
        printf("Enter first Final score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat4.score1));
        printf("Enter second Final score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat4.score2));
        printf("Enter third Final score (use -1 if there is no score): ");
        scanf("%f",&(newStd->Student.Cat4.score3));
        /*Calculate for student cumulative scores*/
        newStd->Student.Cat1.Cumulative = avgCalc(&(newStd->Student.Cat1));
        newStd->Student.Cat2.Cumulative = avgCalc(&(newStd->Student.Cat2));
        newStd->Student.Cat3.Cumulative = avgCalc(&(newStd->Student.Cat3));
        newStd->Student.Cat4.Cumulative = avgCalc(&(newStd->Student.Cat4));
        newStd->next = 0x0;
        insertNode(header,newStd);
        /*Print insert result*/
        printf("%s, Student ID# %i has been added with the following information:\n",newStd->Student.student_name,newStd->Student.student_ID);
        printHeader();
        printStd(&newStd);
}
