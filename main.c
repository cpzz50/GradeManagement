/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/


#include "lab4.h"
/*This program is used to manage student scores*/
int main(int argc,char *argv[])
{   
    void(*fp[10])(Node**) = {option1, option2, option3, option4, option5, option6, option7, option8, option9,option10};
    struct Node *header;
    int test = 1;
    int i = 0;
    int op;
    read2List(&header,argv[1]); /*Read data to linked list*/
    sortByID(&header); /*Sort the data*/
    /*Print options and call option functions*/
    op = printOpt();
    while(test != 0){
        switch(op){
            case 1:
                fp[0](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 2:
                fp[1](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 3:
                fp[2](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 4:
                fp[3](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 5:
                fp[4](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 6:
                fp[5](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 7:
                fp[6](&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 8:
                fp[7](&header);
                sortByID(&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 9:
                fp[8](&header);
                sortByID(&header);
                printf("\n\n");
                op = printOpt();
                break;
            case 10:
                printFile(&header,argv[2]);
                fp[9](&header);
                printf("\n\n");
                test = 0;
                break;
            default:
                printf("\n\n");
                op = printOpt();
                break;
        }
    }
    return 0;
}
