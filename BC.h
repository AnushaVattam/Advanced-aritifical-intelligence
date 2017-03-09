
#include<iostream>

using namespace std;

class BC
{
    /*****backward chaining *******/
/* Install your IF clauses in sequence in the first case
   statement of the main program
   example: if((a1==2) && (a2==6)) s=1;
                      if(strcmp(j,“NO") != 0) s=1;
   the then part of the above construction always
   contains s=1;
   install your the clauses in sequence in the second
   case statement of the main program
   example strcpy(po,"YES");


/*  conclusion list */


string conclt[35];
/*  variable list */
string varlt[35];
/*  clause vairable list */
string clvarlt[250];

//string /* qualify */ qu[4], /* degree*/ de[4];
string treatment;
 string poison;
string /* discovery */  /* position */ v1,v2,v3,v4,v5,v6,v7,v8,v9,v10;
string v11,v12,v13,v14,v15,v16,v17,v18,v19,v20;
string v21,v22,v23,v24,v25,v26,v27,v28,v29,v30;
string v[40];
string buff[128];
string FC(string);
bool x;
string var_array[35] = {"","patient_alive",
"common_symptoms",
"fever",
"cough",
"thirst",
"weakness",
"fatigue",
"swelling",
"loss_of _consciousness",
"convulsions",
"diarrehea",
"vomiting",
"abdominal_pain",
"drowsiness",
"weak_nervous_system",
"excssive_tearing",
"high_heart_rate",
"respiration_problem",
"paleness",
"other_symptoms",
"nose_bleed",
"bp",
"sweating",
"blood_vomiting",
"nausea",
"paralysis",
"high_fever",
"chest_pain",
"poor_vision",
"poison"};





    public:
        BC();
        string b_c();
        void determine_member_concl_list(void);
        void push_on_stack(void);
        void instantiate(void);
        virtual ~BC();
    protected:
    private:
};

