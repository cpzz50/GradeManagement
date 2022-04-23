/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read2List();
void insertNode();
float avgCalc();
void option1(),option2(),option3(),option4(),option5(),option6(),option7(),option8(),option9(),option10();
void printHeader();
int ID_isduplicate();
int printOpt();
void printStd();
void sortByID();
float finalCalc();
int printSingleScore(float,int);
void printStd_recalc();
void printFile();

/*Structure used for linked list below*/
struct Cat_Grade{
    float score1;
    float score2;
    float score3;
    float Cumulative;
};
struct Data {
    char student_name[40]; 
    int student_ID;
    struct Cat_Grade Cat1;
    struct Cat_Grade Cat2;
    struct Cat_Grade Cat3;
    struct Cat_Grade Cat4;
    float Current_Grade; 
    float Final_Grade;
};
typedef struct Node { 
    struct Data Student; 
    struct Node *next;
} Node;
