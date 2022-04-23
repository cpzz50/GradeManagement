/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for print a single student*/
void printStd(Node **p,int print_final){
    Node *std = *p;
    int id_indent = 6;
    int score_indent = 8;
    int i;
    int id_length = 0;
    char *name;
    int id = std->Student.student_ID;
    name = std->Student.student_name;
    /*Print Name*/
    printf("%s",name);
    for(i = 0; i<21; i++){
        if(*(name+i)=='\000'){
            printf(" ");
        }
    }
    
    /*Calculate how much indend needed and print ID*/
    while(id/10 != 0){
        id_length++;
        id /= 10;
    }
    for(i = 0;i<(id_indent-id_length); i++){
        printf(" ");
    }
    /*Print scores for this student*/
    printf("%d\t",std->Student.student_ID);
    printSingleScore(std->Student.Cat1.score1,4);
    printSingleScore(std->Student.Cat1.score2,4);
    printSingleScore(std->Student.Cat1.score3,4);
    printSingleScore(std->Student.Cat1.Cumulative,4);
    
    printSingleScore(std->Student.Cat2.score1,4);
    printSingleScore(std->Student.Cat2.score2,4);
    printSingleScore(std->Student.Cat2.score3,4);
    printSingleScore(std->Student.Cat2.Cumulative,4);
    
    printSingleScore(std->Student.Cat3.score1,4);
    printSingleScore(std->Student.Cat3.score2,4);
    printSingleScore(std->Student.Cat3.score3,4);
    printSingleScore(std->Student.Cat3.Cumulative,4);
    
    printSingleScore(std->Student.Cat4.score1,4);
    printSingleScore(std->Student.Cat4.score2,4);
    printSingleScore(std->Student.Cat4.score3,4);
    printSingleScore(std->Student.Cat4.Cumulative,4);
    
    printSingleScore(std->Student.Current_Grade,4);
    if(print_final == 1){
        printSingleScore(std->Student.Final_Grade,4);
    }else{
        printf("     n/a\n");
    }
}
