/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for print a single score to screen with corrent indent*/
int printSingleScore(float score,int score_indent){
    int int_score = (int)score;
    int digit = 0;
    int i;
    if(score == -1){
        printf("    n/a ");
    }else{
        while(int_score/10 != 0){
            digit++;
            int_score /= 10;
        }
        for(i = 0;i<(score_indent-digit);i++){
            printf(" ");
        }
        printf("%.2f",score);
    }
    return 0;
}
