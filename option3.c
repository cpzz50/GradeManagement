/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for print all students' scores*/
void option3(Node **header){
    Node *traversePtr = *header;
    printHeader();
    while(traversePtr != NULL){
        printStd(&traversePtr);
        traversePtr = traversePtr->next;
    }
}
