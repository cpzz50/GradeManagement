/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*print single student,sued for recalculate score option*/
void printStd_recalc(Node **std){
    Node *p = *std;
    int i;
    /*Calculate cumulative*/
    p->Student.Cat2.Cumulative = avgCalc(&(p->Student.Cat2));
    p->Student.Cat3.Cumulative = avgCalc(&(p->Student.Cat3));
    p->Student.Cat4.Cumulative = avgCalc(&(p->Student.Cat4));
    p->Student.Current_Grade = finalCalc(&p);

    /*Print student informations*/
    printf("Student Name: ");
    for(i = 0; i<25; i++){
        if(p->Student.student_name[i] != '\000'){
            printf("%c",p->Student.student_name[i]);
        }else{
            printf(" ");
        }
    }
    printf("Quizzes Cumlative: ");
    if(p->Student.Cat1.Cumulative == -1){
        printf(" -1.00");
    }else{
    printSingleScore(p->Student.Cat1.Cumulative,2);
    }
    printf("\t");
    printf("Midterms Cumlative: ");
    if(p->Student.Cat2.Cumulative == -1){
        printf(" -1.00");
    }else{
    printSingleScore(p->Student.Cat2.Cumulative,2);
    }
    printf("     \t");
    printf("Homework Cumlative: ");
    if(p->Student.Cat3.Cumulative == -1){
        printf(" -1 .00");
    }else{
    printSingleScore(p->Student.Cat3.Cumulative,2);
    }
    
    printf("     \t");
    printf("Final Cumlative: ");
    if(p->Student.Cat4.Cumulative == -1){
        printf(" -1 .00");
    }else{
    printSingleScore(p->Student.Cat4.Cumulative,2);
    }
    
    
    printf("  ");
    printf("Current Grade: ");
    if(p->Student.Current_Grade == -1){
        printf(" -1.00");
    }else{
    printSingleScore(p->Student.Current_Grade,2);
    }
    printf("\n");
}
