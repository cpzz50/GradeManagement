/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/


#include "lab4.h"
/*This function calculates the cumulative scores for each category*/
float avgCalc(struct Cat_Grade *p){
    float cum;
    float sum = 0.0;
    int scoreNum = 0;
    if(p->score1 != -1){
        sum += p->score1;
        scoreNum++;
    }
    if(p->score2 != -1){
        sum += p->score2;
        scoreNum++;
    }
    if(p->score3 != -1){
        sum += p->score3;
        scoreNum++;
    }
    if(scoreNum != 0){
        cum = sum / scoreNum;
    }else{
        return -1;
    }
    return cum;
    
}
