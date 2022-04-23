/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF 
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE 
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
Name: Jiayuan Zhang
*/



#include "lab4.h"
/*This function is used for read the student informations in the file and insert into linked list*/
int read2List(Node *header,char *arg1){
    FILE *in;
    char buff[40];
    int i = 0;
    int comma = 0;
    in=fopen(arg1,"r+"); 
    
    fgets(buff, 40, in);
    fgets(buff, 40, in);
    while(buff[0] != '\n'){
        Node *p = malloc(sizeof(Node));
	/*Read name*/
        while(buff[i] != '\n'){
            if(buff[i] == ','){
                comma = 1;
            }
            if((comma == 1)&&(buff[i+2] == ' ')){
                p->Student.student_name[i] = buff[i];
                p->Student.student_name[i+1] = buff[i+1];
                break;
            }
            p->Student.student_name[i] = buff[i];
            i++;
        }
        p->Student.student_name[i+1] = '\0';
        comma = 0;
        i = 0;
        
        /*Read ID*/
        fgets(buff, 40, in);
        p->Student.student_ID = atoi(buff);
    
	/*Reaad Scores*/
        fscanf(in, "%f", &(p->Student.Cat1.score1));
        fscanf(in, "%f", &(p->Student.Cat1.score2));
        fscanf(in, "%f", &(p->Student.Cat1.score3));
        fscanf(in, "%f", &(p->Student.Cat2.score1));
        fscanf(in, "%f", &(p->Student.Cat2.score2));
        fscanf(in, "%f", &(p->Student.Cat2.score3));
        fscanf(in, "%f", &(p->Student.Cat3.score1));
        fscanf(in, "%f", &(p->Student.Cat3.score2));
        fscanf(in, "%f", &(p->Student.Cat3.score3));
        fscanf(in, "%f", &(p->Student.Cat4.score1));
        fscanf(in, "%f", &(p->Student.Cat4.score2));
        fscanf(in, "%f", &(p->Student.Cat4.score3));

	/*Calculate Cumulative Scores*/
        p->Student.Cat1.Cumulative = avgCalc(&(p->Student.Cat1));
        p->Student.Cat2.Cumulative = avgCalc(&(p->Student.Cat2));
        p->Student.Cat3.Cumulative = avgCalc(&(p->Student.Cat3));
        p->Student.Cat4.Cumulative = avgCalc(&(p->Student.Cat4));
        p->Student.Current_Grade = finalCalc(&p);
        insertNode(header,p);
        fgets(buff, 40, in);
        fgets(buff, 40, in);
    }
    fscanf(in, "%s",buff);
    fscanf(in, "%s",buff);
    
    return 0;
}
