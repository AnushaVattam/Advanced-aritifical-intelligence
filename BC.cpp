
#include<iostream>
#include<string.h>
#include <cstdlib>
#include "BC.h"

using namespace std;



BC::BC()
{
    //ctor
}

BC::~BC()
{
    //dtor
}

/*****backward chaining *******/
/* Install your IF clauses in sequence in the first case
   statement of the main program
   example: if((a1==2) && (a2==6)) s=1;
                      if(strcmp(j,NO") != 0) s=1;
   the then part of the above construction always
   contains s=1;
   install your the clauses in sequence in the second
   case statement of the main program
   example strcpy(po,"YES");


/*  conclusion list */
string varble;
/* instantiated list */
int instlt[35];
/* statement stack */
int statsk[35];
int /* clause stack */ clausk[32], sn, f, i, j, s, k, /*stack pointer */ sp;

float /* grade */ gr, /*experience */ ex;

string BC::b_c()
{


        /***** initialization section ******/
        /* stack space is 10 we initially place stack space at 10+1 */
        sp=32;
        for (i=1; i<32; i++)
        {
                conclt[i] = "";
                varlt[i] = "";
                instlt[i]=0;
                statsk[i]=0;
                clausk[i]=0;
        }
        for (i=1; i<249; i++)  clvarlt[i] = "";
        for (i=1; i<40; i++)  v[i] = "";
		/* enter conclusions which are the variables in the then part,
1 at
        a time.  enter the conclusions in exact order starting at the 1st
        if-then.  after last conclusion hit return key for rest of
        conclusions */

        /*** comment 305 *****/
       /* for(i=1;i<32;i++)
        {
        	strcpy(conclt[i],"poison");
		}*/
		for(i=1;i<32;i++)
		{
			conclt[i] = "poison";
		}
        cout << "\n *** CONCLUSION LIST ***";
        for(i=1; i<32; i++)
			cout << "\n CONCLUSION  " << i << "  " << conclt[i];




        //cout << "HIT RETURN TO CONTINUE";
       // gets(buff);
        /* enter variables which are in the if part, 1 at a time in the
exact
        order that they occur, up to 3 variables per if statement.  do not
        duplicate any variable names.  any name is used only once.  if no
        more variables left just hit return key. */

        cout << "\n*** VARIABLE LIST *";
        /**** comment 367 *****/

        for(i=1;i<32;i++)
        {
        	varlt[i] = var_array[i];
		}


        for(i=1; i<32; i++) cout << "\n VARIABLE  " <<  i << "  " <<  varlt[i];

        //cout << "HIT RETURN KEY TO CONTINUE";


        /* enter variables as they appear in the if clauses.  a maximum
of 3
        variables per if statement.  if no more variables hit return
key. */
        cout << "\n *** CLAUSE VARIABLE LIST ***";
        /***** comment 407 through 409 ***/


		clvarlt[1] = "patient_alive";
		clvarlt[9] = "patient_alive";
		clvarlt[10] = "common_symptoms";
		clvarlt[11] = "fever";
		clvarlt[12] = "cough";
		clvarlt[13] = "thirst";
		clvarlt[17] = "patient_alive";
		clvarlt[18] = "common_symptoms";
		clvarlt[19] = "fever";
		clvarlt[20] = "cough";
		clvarlt[21] = "thirst";
		clvarlt[25] = "patient_alive";
		clvarlt[26] = "common_symptoms";
		clvarlt[27] = "fever";
		clvarlt[28] = "cough";
		clvarlt[29] = "weakness";
		clvarlt[33] = "patient_alive";
		clvarlt[34] = "common_symptoms";
		clvarlt[35] = "fever";
		clvarlt[36] = "cough";
		clvarlt[37] = "weakness";
		clvarlt[38] = "fatigue";
		clvarlt[41] = "patient_alive";
		clvarlt[42] = "common_symptoms";
		clvarlt[43] = "fever";
		clvarlt[44] = "cough";
		clvarlt[45] = "weakness";
		clvarlt[46] = "fatigue";
		clvarlt[49] = "patient_alive";
		clvarlt[50] = "common_symptoms";
		clvarlt[51] = "fever";
		clvarlt[52] = "swelling";
		clvarlt[53] = "loss_of_consciousness";
		clvarlt[57] = "patient_alive";
		clvarlt[58] = "common_symptoms";
		clvarlt[59] = "fever";
		clvarlt[60] = "swelling";
		clvarlt[61] = "loss_of_consciousness";
		clvarlt[65] = "patient_alive";
		clvarlt[66] = "common_symptoms";
		clvarlt[67] = "fever";
		clvarlt[68] = "swelling";
		clvarlt[69] = "convulsions";
		clvarlt[73] = "patient_alive";
		clvarlt[74] = "common_symptoms";
		clvarlt[75] = "fever";
		clvarlt[76] = "swelling";
		clvarlt[77] = "convulsions";
		clvarlt[81] = "patient_alive";
		clvarlt[82] = "common_symptoms";
		clvarlt[83] = "diarrehea";
		clvarlt[84] = "vomiting";
		clvarlt[85] = "abdominal_pain";
		clvarlt[89] = "patient_alive";
		clvarlt[90] = "common_symptoms";
		clvarlt[91] = "diarrehea";
		clvarlt[92] = "vomiting";
		clvarlt[97] = "patient_alive";
		clvarlt[98] = "common_symptoms";
		clvarlt[99] = "drowsiness";
		clvarlt[100] = "weak_nervous_systems";
		clvarlt[105] = "patient_alive";
		clvarlt[106] = "common_symptoms";
		clvarlt[107] = "drowsiness";
		clvarlt[108] = "weak_nervous_system";
		clvarlt[113] = "patient_alive";
		clvarlt[114] = "common_symptoms";
		clvarlt[115] = "drowsiness";
		clvarlt[116] = "abdominal_pain";
		clvarlt[121] = "patient_alive";
		clvarlt[122] = "common_symptoms";
		clvarlt[123] = "drowsiness";
		clvarlt[124] = "abdominal_pain";
		clvarlt[125] = "excessive_teraing";
		clvarlt[129] = "patient_alive";
		clvarlt[130] = "common_symptoms";
		clvarlt[131] = "drowsiness";
		clvarlt[132] = "abdominal_pain";
		clvarlt[133] = "excessive_tearing";
		clvarlt[137] = "patient_alive";
		clvarlt[138] = "common_symptoms";
		clvarlt[139] = "fatigue";
		clvarlt[140] = "high_heart_rate";
		clvarlt[141] = "respiration_problem";
		clvarlt[145] = "patient_alive";
		clvarlt[146] = "common_symptoms";
		clvarlt[147] = "fatigue";
		clvarlt[148] = "high_heart_rate";
		clvarlt[153] = "patient_alive";
		clvarlt[154] = "common_symptoms";
		clvarlt[155] = "fatigue";
		clvarlt[156] = "high_heart_rate";
		clvarlt[157] = "respiration_problem";
		clvarlt[161] = "patient_alive";
		clvarlt[162] = "common_symptoms";
		clvarlt[163] = "fatigue";
		clvarlt[164] = "high_heart_rate";
		clvarlt[165] = "paleness";
		clvarlt[166] = "fever";
		clvarlt[169] = "patient_alive";
		clvarlt[170] = "common_symptoms";
		clvarlt[171] = "fatigue";
		clvarlt[172] = "high_heart_rate";
		clvarlt[173] = "paleness";
		clvarlt[174] = "thirst";
		clvarlt[177] = "patient_alive";
		clvarlt[178] = "common_symptoms";
		clvarlt[179] = "other_symptoms";
		clvarlt[180] = "nose_bleed";
		clvarlt[181] = "bp";
		clvarlt[182] = "sweating";
		clvarlt[183] = "respiration_problem";
		clvarlt[185] = "patient_alive";
		clvarlt[186] = "common_symptoms";
		clvarlt[187] = "other_symptoms";
		clvarlt[188] = "nose_bleed";
		clvarlt[189] = "bp";
		clvarlt[190] = "sweating";
		clvarlt[191] = "respiration_problem";
		clvarlt[193] = "patient_alive";
		clvarlt[194] = "common_symptoms";
		clvarlt[195] = "other_symptoms";
		clvarlt[196] = "nose_bleed";
		clvarlt[197] = "bp";
		clvarlt[198] = "blood_vomiting";
		clvarlt[201] = "patient_alive";
		clvarlt[202] = "common_symptoms";
		clvarlt[203] = "other_symptoms";
		clvarlt[204] = "nose_bleed";
		clvarlt[205] = "nausea";
		clvarlt[206] = "paralysis";
		clvarlt[209] = "patient_alive";
		clvarlt[210] = "common_symptoms";
		clvarlt[211] = "other_symptoms";
		clvarlt[212] = "nose_bleed";
		clvarlt[213] = "nausea";
		clvarlt[217] = "patient_alive";
		clvarlt[218] = "common_symptoms";
		clvarlt[219] = "high_fever";
		clvarlt[220] = "chest_pain";
		clvarlt[221] = "poor_vision";
		clvarlt[225] = "patient_alive";
		clvarlt[226] = "common_symptoms";
		clvarlt[227] = "high_fever";
		clvarlt[228] = "chest_pain";
		clvarlt[229] = "vomiting";
		clvarlt[233] = "patient_alive";
		clvarlt[234] = "common_symptoms";
		clvarlt[235] = "high_fever";
		clvarlt[236] = "chest_pain";
		clvarlt[237] = "vomiting";
		clvarlt[238] = "paleness";
		clvarlt[241] = "patient_alive";
		clvarlt[242] = "common_symptoms";
		clvarlt[243] = "high_fever";
		clvarlt[244] = "chest_pain";
		clvarlt[245] = "vomiting";
		clvarlt[246] = "paleness";




        for(i=1; i<32; i++)
        {
                cout << "\n\n ** CLAUSE  " << i;
                for(j=1; j<9; j++)
                { k = 8 * (i-1) + j;
                  cout << "\n VARIABLE  " << j << "  " << clvarlt[k]; }

        }



                /****** inference section *****/
        cout << "\n ** ENTER CONCLUSION ? ";
		cin >> varble;
        /* get conclusion statement number (sn) from the conclusion list
           (conclt) */
        /* first statement starts search */
b520: f=1;
          determine_member_concl_list();
          if (sn != 0){
                  /* if sn = 0 then no conclusion of that name */ do
                  /* push statement number (sn) and clause number=1 on
goal
                     stack which is composed of the statement stack
(statsk)
                     and clause stack (clausk) */
                  {
                          push_on_stack();
                          do
                          {
                           /* calculate clause location in clause-variable
                              list */
b545: i= (statsk[sp] -1) *8 + clausk[sp];
          /* clause variable */
          varble = clvarlt[i];
          if(varble != "") {
                  /*is this clause variable a conclusion? */
                  f = 1;
                  determine_member_concl_list();
                  if(sn != 0)
                          /* it is a conclusion push it */
                          goto b520;
                  /* check instantiation of this clause */
                  instantiate();
                  clausk[sp] = clausk[sp] + 1;
          }
                          } while(varble != ""); /*do-while*/
                          /*no more clauses check if part of statement */
                          sn = statsk[sp];
                          s = 0;
                          /**** if then statements ****/
                          /* sample if parts of if then statements from
                             the position knowledge base */

                          switch (sn) {
                                  /* if part of statement 1 */
                                  /****** comment 1500 ****/
                          case 1: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[3] =="YES") && (v[4] == "YES" )&&(v[5] == "YES")&&(v[6] == "YES")) s = 1;
								break;

						  case 2: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[3] =="YES") && (v[4] == "YES" )&&(v[5] == "YES")&&(v[6] == "NO")) s=1;
								break;

						  case 3: if ((v[1] == "YES") &&(v[2] == "YES")&&
  									 (v[3] =="YES") && (v[4] == "NO" )&&(v[7] == "YES")) s=1;
								break;

						  case 4: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[8] =="YES") && (v[9] == "YES")&&(v[10] == "YES")) s=1;
	 							break;

						  case 5: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[8] =="YES") && (v[9] == "YES" )&&(v[10] == "NO")) s=1;
								break;

						  case 6: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[8] =="YES") && (v[9] == "NO")&&(v[11] == "YES")&&(v[12] == "YES")) s=1;
								break;

						  case 7: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[8] =="YES") && (v[9] == "NO")&&(v[11] == "NO")&&(v[13]=="YES")) s=1;
								break;

						  case 8: if ( (v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[14] =="YES") && (v[15] == "YES")  ) s=1;
								break;

						  case 9: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									 (v[14] =="YES") && (v[15] == "NO" )) s=1;
								break;


						  case 10: if ((v[1] == "YES") &&(v[2] == "YES") &&
  	                  				  (v[14] == "YES") && (v[16] == "YES" ) &&(v[17] == "YES")) s=1;
								break;

						  case 11: if ((v[1] == "YES") &&(v[2] == "YES") &&
  									  (v[14] =="YES") && (v[16] == "YES" ) &&(v[17] == "NO")) s=1;
								break;

						  case 12: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									 (v[18] =="YES") && (v[19] == "YES" )&&(v[20] == "YES")) s=1;
								break;

						  case 13: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[18] =="YES") && (v[19] == "NO" )) s=1;
								break;

						  case 14: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="YES") && (v[22] == "YES" ) && (v[23] == "YES" )) s=1;
								break;

						  case 15: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="YES") && (v[22] == "YES" ) && (v[23] == "NO" )) s=1;
								break;

						  case 16: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="YES") && (v[22] == "NO" ) && (v[24] == "YES" )) s=1;
								break;

						  case 17: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="YES") && (v[22] == "NO" ) && (v[24] == "NO" ) && (v[25] == "YES" )) s=1;
								break;


						  case 18: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="YES") && (v[22] == "NO" ) && (v[24] == "NO" ) && (v[25] == "NO" )) s=1;
								break;

						  case 19: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="NO") && (v[26] == "YES" ) && (v[27] == "YES" )) s=1;
								break;

						  case 20: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="NO") && (v[26] == "YES" ) &&(v[27] == "NO" ))  s=1;
								break;

 						  case 21: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="NO") && (v[26] == "YES" ) &&(v[28] == "YES" ))  s=1;
								break;

						  case 22: if ((v[1] == "YES") &&( v[2] == "YES") &&
  									  (v[21] =="NO") && (v[26] == "YES" ) &&(v[28] == "NO" ))  s=1;
								break;

						  case 23: if ((v[1] == "YES") &&( v[2] == "NO") &&
 								  	  (v[29] =="YES") && (v[30] == "YES" ) &&(v[31] == "YES" )  &&(v[32] == "YES" ) &&(v[33] == "YES"))   s=1;
								break;


						  case 24: if ((v[1] == "YES") &&( v[2] == "NO") &&
									  (v[29] =="YES") && (v[30] == "YES" ) &&(v[31] == "YES" )  &&(v[32] == "NO" ) &&(v[33] == "YES"))   s=1;
								break;

						  case 25: if ((v[1] == "YES") &&( v[2] == "NO") &&
									  (v[29] =="YES") && (v[30] == "YES" ) &&(v[31] == "NO" )  &&(v[34] == "YES" ) )   s=1;
								break;

						  case 26: if ((v[1] == "YES") &&( v[2] == "NO") &&
									  (v[29] =="YES") && (v[30] == "NO" ) &&(v[35] == "YES" )  &&(v[36] == "YES" ) )   s=1;
								break;

						  case 27: if ((v[1] == "YES") &&( v[2] == "NO") &&
								  	  (v[29] =="YES") && (v[30] == "NO" ) &&(v[35] == "YES" )  &&(v[36] == "NO" ) )   s=1;
								break;




                                  /******** comment 1570 ********/
                                  /* if part of statement 5 */

                                  /********* comment 1680 ******/
                          }
                          /* see if the then part should be inv[oked */
                          if( s != 1) {
                                  /* failed..search rest of statements for
                                     same conclusion */
                                  /* get conclusion */
                                  i = statsk[sp];
                                  varble = conclt[i];
                                  /* search for conclusion starting at the
                                     next statement number */
                                  f = statsk[sp] + 1;
                                  determine_member_concl_list();
                                  sp = sp+1;
                          }
                          /* pop old conclusion and put on new one */
                  } while((s != 1) && (sn !=0));  /* outer do-while loop */
                  if(sn != 0){
                          /* if part true invoke then part */
                          /* then part of if-then statements from the
                             position knowledge base */
                          switch (sn) {
                                  /* then part of statement 1 */
                                  /******* comment 1500 *******/
                          case 1: poison = "Aconite";
                                  cout << "\n" << poison;
                                  break;
                                  /* then part of statement 2 */
                                  /****** comment 1510 ******/

                          case 2: poison = "OXALIC ACID";
                                  cout << "\n" << poison;
                                  break;

                          case 3: poison = "Neon";
                                  cout << "\n" << poison;
                                  break;

                          case 4: poison = "Carbon Monoxide";
                                  cout << "\n" << poison;
                                  break;

                          case 5: poison = "Mustard Gas";
                                  cout << "\n" << poison;
                                  break;

                          case 6: poison = "Nicotinic";
                                  cout << "\n" << poison;
                                  break;

                          case 7: poison = "Muscarinic";
                                  cout << "\n" << poison;
                                  break;

                          case 8: poison = "Tetrodoxin";
                                  cout << "\n" << poison;
                                  break;

                          case 9: poison = "Cadmium";
                                  cout << "\n" << poison;
                                  break;

                          case 10: poison = "Arrow Frog Poison";
                                  cout << "\n" << poison;
                                  break;

                          case 11: poison = "Mercury,Polonium";
                                  cout << "\n" << poison;
                                  break;

						  case 12: poison = "Campylo_Baster";
                                  cout << "\n" << poison;
                                  break;

                          case 13: poison = "Salmonella";
                                  cout << "\n" << poison;
                                  break;

                          case 14: poison = "Chloro-Phenoxy";
                                  cout << "\n" << poison;
                                  break;

                          case 15: poison = "Red_Squill";
                                  cout << "\n" << poison;
                                  break;

                          case 16: poison = "Carbanilate";
                                  cout << "\n" << poison;
                                  break;

                          case 17: poison = "Quinine";
                                  cout << "\n" << poison;
                                  break;

                          case 18: poison = "Nitric_Acid_Fumes";
                                  cout << "\n" << poison;
                                  break;

                          case 19: poison = "Ether";
                                  cout << "\n" << poison;
                                  break;

                          case 20: poison = "Sarin";
                                  cout << "\n" << poison;
                                  break;

						  case 21: poison = "Poison_IVY";
                                  cout << "\n" << poison;
                                  break;

                          case 22: poison = "Ricin";
                                  cout << "\n" << poison;
                                  break;

                          case 23: poison = "Cyanide";
                                  cout << "\n" << poison;
                                  break;

                          case 24: poison = "Opium";
                                  cout << "\n" << poison;
                                  break;

                          case 25: poison = "Arsenic";
                                  cout << "\n" << poison;
                                  break;

                          case 26: poison = "Fish_Poisoning";
                                  cout << "\n" << poison;
                                  break;

                          case 27: poison = "Mushroom";
                                  cout << "\n" << poison;
                                  break;



                                  /****** comment 1680 ********/
                          }
                          /* pop the stack */
                          sp=sp+1;
                          if(sp >= 31)
                                  /* finished */
                                  cout << "\n *** SUCCESS";
                          else {
                                  /* stack is not empty */
                                  /* get next clause then continue */
                                  clausk[sp] = clausk[sp]+1;
                                  goto b545;
                          }
                  }
        }
}

void determine_member_concl_list() {
/* routine to determine if a variable (varble) is a member of the
   conclusion list (conclt).  if yes return sn != 0.
   if not a member sn=0;
*/
        /* initially set to not a member */
        sn = 0;
        /* member of conclusion list to be searched is f */
        i = f;
        while((varble != conclt[i]) && (i<31))
                /* test for membership */
                i=i+1;
        if (varble == conclt[i]) sn = i;  /* a member */
}

void push_on_stack()
/* routine to push statement number (sn) and a clause number of 1 onto the
conclusion stack which consists of the statement stack (statsk) and the
clause stack (clausk)..to push decrement stack pointer (sp) */
{
        sp=sp-1;
        statsk[sp] = sn;
        clausk[sp] = 1;
}

void instantiate()
/* routine to instantiate a variable (varble) if it isn't already.  the
instantiate indication (instlt) is a 0 if not, a 1 if it is.  the
variable list (varlt) contains the variable (varble). */
{
        i=1;
        string z;
        /* find variable in the list */
        while((varble != varlt[i]) && (i<31)) i=i+1;
        if((varble == varlt[i]) && (instlt[i] != 1))
                /*found variable and not already instantiated */
        {
                instlt[i]=1; /*mark instantiated */
                /* the designer of the
               knowledge base places the input statements to
               instantiate the variables below in the case statement */
                switch (i)
                {
                        /***** input statement *****/
                        /* input statements for sample position knowledge
                           base */
                        /***** comment 1700 ******/
                case 1:
                		cout << "\n INPUT YES or NO for patient_alive? ";
                		cin >> v[1];

                		cout << "\n INPUT YES or NO for common symptoms? ";
                		cin >> v[2];
                		int ch;
                		if(v[2]=="YES")
                		{
                			cout << "\n Choose one of the following";
                			cout << "\n 1 High Fever \n 2 Fatigue \n 3 Drowsiness \n 4 Diarrehea \n 5 Fever ";
                			cin >> ch;
                			switch(ch)
                			{
                				case 1: cout << "\n INPUT YES or NO for high_fever? ";
                        				cin >> v[3];
                        				cout << "\n INPUT YES or NO for chest_pain? ";
                        				cin >> v[4];
                        				if(v[4]=="YES")
										{
											cout << "\n INPUT YES or NO for vomiting? ";
                        					cin >> v[5];
                        					cout << "\n INPUT YES or NO for paleness? ";
   											cin >> v[6];

										}
										else
										{
											cout << "\n INPUT YES or NO for convulsions? ";
											cin >> v[7];
										}
									break;

								case 2 : cout << "\n INPUT YES or NO for fatigue? ";
                        				 cin >> v[8];
                        				 cout << "\n INPUT YES or NO for high heart rate? ";
                        				 cin >> v[9];
                        				 if(v[9]=="YES")
                        				 {
                        				 	cout << "\n INPUT YES or NO for respiration problem? ";
                        					cin >> v[10];
										 }
										 else
										 {
										 	cout << "\n INPUT YES or NO for paleness? ";
                        					cin >> v[11];
                        					if(v[11]=="YES")
                        					{
                        						cout << "\n INPUT YES or NO for fever? ";
                        						cin >> v[12];
											}
											else
											{
												cout << "\n INPUT YES or NO for thirst? ";
                        						cin >> v[13];
											}
										 }
									break;

								case 3: cout << "\n INPUT YES or NO for Drowsiness? ";
										cin >> v[14];
										int ch1;
										cout << "\n Choose among following";
										cout << "\n 1 Weak Nervous System \n 2 Abdominal Pain";
										cin >> ch1;
										switch(ch1)
										{
											case 1 : cout << "\n INPUT YES or NO for Weak Nervous System? ";
													 cin >> v[15];
												break;
											case 2 : cout << "\n INPUT YES or NO for Abdominal Pain? ";
													 cin >> v[16];

													 cout << "\n INPUT YES or NO for Excessive Tearing? ";
													 cin >> v[17];


												break;
										}
									break;


								case 4: cout << "\n INPUT YES or NO for Diarrehea? ";
										cin >> v[18];
										cout << "\n INPUT YES or NO for vomiting? ";
										cin >> v[19];
										if(v[19]=="YES")
										{
											cout << "\n INPUT YES or NO for Abdominal pain? ";
											cin >> v[20];

										}
									break;

								case 5: cout << "\n INPUT YES or NO for Fever? ";
										cin >> v[21];
										if(v[21]=="YES")
										{
											cout << "\n INPUT YES or NO for Cough? ";
											cin >> v[22];
											if(v[22]=="YES")
											{
												cout << "\n INPUT YES or NO for Thrist? ";
												cin >> v[23];
											}
											else
											{
												cout << "\n INPUT YES or NO for Weakness? ";
												cin >> v[24];
												if(v[24]=="NO")
												{
													cout << "\n INPUT YES or NO for Fatigue? ";
													cin >> v[25];
												}
											}
										}
										else
										{
											cout << "\n INPUT YES or NO for Swelling? ";
											cin >> v[26];
											cout << "\n INPUT YES or NO for Loss Of Consciousness? ";
											cin >> v[27];
											cout << "\n INPUT YES or NO for Convulsions? ";
											cin >> v[28];
										}
									break;

							}
						}
						else
						{
							cout << "\n INPUT YES or NO for Other Symptoms? ";
							cin >> v[29];
							if(v[29]=="YES")
							{
								cout << "\n INPUT YES or NO for Nose Bleeding? ";
								cin >> v[30];
								if(v[30]=="YES")
								{
									cout << "\n INPUT YES or NO for BP? ";
									cin >> v[31];
									if(v[31]=="YES")
									{
										cout << "\n INPUT YES or NO for Sweating? ";
										cin >> v[32];
										if(v[32]=="YES")
										{
											cout << "\n INPUT YES or NO for Respiration Problems? ";
											cin >> v[33];
										}
									}
									else
									{
										cout << "\n INPUT YES or NO for Blood Vomiting? ";
										cin >> v[34];
									}
								}
								else
								{
									cout << "\n INPUT YES or NO for Nausea? ";
									cin >> v[35];
									cout << "\n INPUT YES or NO for Paralysis? ";
									cin >> v[36];
								}
							}
						}
						break;



                /*case 2: break;




                if(z=="YES") {
                        case 3: cout << "\n INPUT YES or NO for fever? ";
                                cin >> v[3];
                                break;

                        case 4: cout << "\n INPUT YES or NO for cough? ";
                                cin >> v[4];
                                break;

                        case 5: cout << "\n INPUT YES or NO for thirst? ";
                                cin >> v[5];
                                break;

                        case 6: cout << "\n INPUT YES or NO for weakness? ";
                                cin >> v[6];
                        break;

            	case 7: cout << "\n INPUT YES or NO for fatigue? ";
                        cin >> v[7];
                        break;

                case 8: cout << "\n INPUT YES or NO for swelling? ";
                        cin >> v[8];
                        break;

                case 9: cout << "\n INPUT YES or NO for loss of consciousness? ";
                        cin >> v[9];
                        break;

                case 10: cout << "\n INPUT YES or NO for conv[ulsions? ";
                        cin >> v[10];
                        break;

                case 11: cout << "\n INPUT YES or NO for diarrehea? ";
                        cin >> v[11];
                        break;

                case 12: cout << "\n INPUT YES or NO for vomiting? ";
                        cin >> v[12];
                        break;

                case 13: cout << "\n INPUT YES or NO for abdominal pain? ";
                        cin >> v[13];
                        break;

                case 14: cout << "\n INPUT YES or NO for drowsiness? ";
                        cin >> v[14];
                        break;

                case 15: cout << "\n INPUT YES or NO for weak nervous system? ";
                        cin >> v[15];
                        break;

                case 16: cout << "\n INPUT YES or NO for excessive tearing? ";
                        cin >> v[16];
                        break;

            	case 17: cout << "\n INPUT YES or NO for hifh heart rate? ";
                        cin >> v[17];
                        break;

                case 18: cout << "\n INPUT YES or NO for respiration problem? ";
                        cin >> v[18];
                        break;

                case 19: cout << "\n INPUT YES or NO for paleness? ";
                        cin >> v[19];
                        break;}
            else{

                case 20:
						cout << "\n INPUT YES or NO for Other Symptoms? ";
                        cin >> v[20];
                        break;

                case 21: cout << "\n INPUT YES or NO for nose bleeding? ";
                        cin >> v[21];
                        break;

                case 22: cout << "\n INPUT YES or NO for bp? ";
                        cin >> v[22];
                        break;

                case 23: cout << "\n INPUT YES or NO for sweating? ";
                        cin >> v[23];
                        break;



                case 24: cout << "\n INPUT YES or NO for blood vomiting? ";
                        cin >> v[24];
                        break;

                case 25: cout << "\n INPUT YES or NO for nausea? ";
                        cin >> v[25];
                        break;

                case 26: cout << "\n INPUT YES or NO for paralysis? ";
                        cin >> v[26];
                        break;

            	case 27: cout << "\n INPUT YES or NO for highfev[er? ";
                        cin >> v[27];
                        break;

                case 28: cout << "\n INPUT YES or NO for chest pain? ";
                        cin >> v[28];
                        break;

                case 29: cout << "\n INPUT YES or NO for poor vision? ";
                        cin >> v[29];
                        break;

                case 30:
                        break;}*/
                        /***** comment 1715 ****/

                }

                /* end of inputs statements for sample position knowledge
                   base */
        }




}







