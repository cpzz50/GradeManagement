/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used to print the linked list into a file*/
void printFile(Node **header,char *arg2){
    FILE *out;
    Node *traverse = *header;
    char *fileName = arg2;
    int count = 0;
    out=fopen(fileName,"w"); /*open the file*/
    fputs("Quizzes Midterms Homework Final\n",out);
    while(traverse != NULL){
        fprintf(out,"%s\n%i\n",traverse->Student.student_name,traverse->Student.student_ID);
        fprintf(out,"%.1f %.1f %.1f\n",traverse->Student.Cat1.score1,traverse->Student.Cat1.score2,traverse->Student.Cat1.score3);
        fprintf(out,"%.1f %.1f %.1f\n",traverse->Student.Cat2.score1,traverse->Student.Cat2.score2,traverse->Student.Cat2.score3);
        fprintf(out,"%.1f %.1f %.1f\n",traverse->Student.Cat3.score1,traverse->Student.Cat3.score2,traverse->Student.Cat3.score3);
        fprintf(out,"%.1f %.1f %.1f\n",traverse->Student.Cat4.score1,traverse->Student.Cat4.score2,traverse->Student.Cat4.score3);
        traverse = traverse->next;
        count ++;
    }
    fprintf(out,"\n\n");
    fclose(out); /*close file*/
    printf("A total of %i student records were written to file %s",count,fileName);
    

}
