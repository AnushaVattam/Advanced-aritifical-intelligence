

    /*** FORWARD CHAINING ***/
/************************/
/* Install your IF clauses in squence in the middle of
the program within the first case statement.
EXAMPLE: IF ((A1==2) && (A2==6) || (A3 == 'YES')) S-1;
IF (J=='NO') S-1;

The THEN part of the above construction always contains
S-1. Install your THEN clauses in sequence in the middle
of the progrram within the second case statement. */

#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class FC
{


int flag;
string cndvar[35];
string varlt[35], /* variable list*/ clvarlt[220]; /* clause var list */
string c, v /* condition variable */  ; /*variable */
string fedint[10], interest[10], stock[10], dollar[10], fedmon[10];
string po[10], /* position */  qu[10]; /* qualify */
string poison, treatment;
int instlt[35];         /* instantiated list*/
int f, i, j, k, s, fp   /* front pointer */;
int  bp  /* back pointer */,  gr /* grade */,  sn; /* statement number */
int cn;  /* clause number */


    public:
        FC();
        virtual ~FC();
        string f_C(string);
        void search(void);
        void check_instantiation(void);
        void instantiate(void);
    protected:
    private:
};


