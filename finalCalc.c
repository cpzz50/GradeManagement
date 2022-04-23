/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/

#include "lab4.h"
/*This function is used to calculate the final grade for single student*/
float finalCalc(Node **p){
    Node *std = *p;
    float finalGrade = 0.0;
    if(std->Student.Cat1.Cumulative == -1) {
        finalGrade += 100 * 0.15;
    }
    else finalGrade += std->Student.Cat1.Cumulative * 0.15;
    
    if(std->Student.Cat2.Cumulative == -1) finalGrade += 100 * 0.3;
    else finalGrade += std->Student.Cat2.Cumulative * 0.3;
    
    if(std->Student.Cat3.Cumulative == -1) finalGrade += 100 * 0.2;
    else finalGrade += std->Student.Cat3.Cumulative * 0.2;
    
    if(std->Student.Cat4.Cumulative == -1) finalGrade += 100 * 0.35;
    else finalGrade += std->Student.Cat4.Cumulative * 0.35;
    return finalGrade;
}
