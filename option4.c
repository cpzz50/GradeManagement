/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for recalculate scores for certain student by input student ID*/
void option4(Node **header){
    Node *p = *header;
    int id;
    printf("What is the Student ID for the scores you want to recalculate?\n");
    printf("Student ID: ");
    scanf("%d",&id);
    while(p->Student.student_ID != id){
        p = p->next;
    }
    /*Calculate*/
    printf("Recalculating grades for %s , Student ID Number: %d\n",p->Student.student_name,id);
    p->Student.Cat1.Cumulative = avgCalc(&(p->Student.Cat1));
    p->Student.Cat2.Cumulative = avgCalc(&(p->Student.Cat2));
    p->Student.Cat3.Cumulative = avgCalc(&(p->Student.Cat3));
    p->Student.Cat4.Cumulative = avgCalc(&(p->Student.Cat4));
    p->Student.Current_Grade = finalCalc(&p);
    
    /*Print*/
    printf("Quizzes Cumlative:  %.2f\n",p->Student.Cat1.Cumulative);
    printf("Midterms Cumlative:  %.2f\n",p->Student.Cat2.Cumulative);
    printf("Homework Cumlative:  %.2f\n",p->Student.Cat3.Cumulative);
    printf("Final Cumlative: %.2f\n",p->Student.Cat4.Cumulative);
    printf("Current Grade is:  %.2f\n",p->Student.Current_Grade);
    if(p->Student.Final_Grade == 0.0) printf("Student's Final Grade was deleted\n");
    else printf("Final Grade is:  %.2f\n",p->Student.Final_Grade);
    
}
