#include "FC.h"

FC::FC()
{
    //ctor
}

FC::~FC()
{
    //dtor
}




string FC::f_C()
{
    /******** INITIALIZATION SECTION ***********/
    fp=1;
    bp=1;

    for (i=1;i < 218; i++)
        clvarlt[i] = "";
    for (i=1;i < 35; i++)
        cndvar[i] = "";
    for (i=1;i < 35; i++)
        instlt[i] = 0;
    for (i=1;i < 35; i++)
        varlt[i] = "";
    for (i=1;i < 35; i++)
    {
        cndvar[i] = "";
        varlt[i] = "";
        instlt[i] = 0;
    }

    /* enter variables which are in the IF part, 1 at a time in
    the exact order that they occur. Up to 3 variables per
    IF statement. Do not duplicate any variable names. Any
    name is used only once. If no more variables left, just
    hit return key */
    /****** comment 367 *************/
    varlt[1] = "poison";
    /*strcpy(varlt[2], "FT");
    strcpy(varlt[3], "FM");
    strcpy(varlt[4], "IN");
    strcpy(varlt[5], "ST");*/

    printf("*** VARIABLE LIST ***\n");
    for (i=1;i < 35; i++)
        cout << "\n ENTER VARIABLE " << "  "<< i << "  " << varlt[i];

//    getchar();

    /* enter variables as they appear in the IF clauses, Up to 3
    variables per IF statement. If no more variables left, just
    hit return key */
    /****** comment 407, 408 *************/
    /*strcpy(clvarlt[1], "IN");
    strcpy(clvarlt[5], "IN");
    strcpy(clvarlt[9], "DO");
    strcpy(clvarlt[13], "DO");
    strcpy(clvarlt[17], "FT");
    strcpy(clvarlt[18], "FM");*/

    for(i=1;i<218;i+=7)
    {
    	clvarlt[i] = "poison";
	}
    printf("*** CLAUSE-VARIABLE LIST ***\n");
    for (i = 1; i < 31; i++)
    {
        printf("** CLAUSE %d\n", i);
        for (j = 1; j < 8; j++)
        {
            k = 7 * (i - 1) + j;
            cout << "\n VARIABLE " << "  " << j << "  " << clvarlt[k];
        }

        /*if (i==4)
        {
            printf("HIT RETURN TO CONTINUE");
            getchar();
        }*/
    }

    /****** INFERENCE SECTION *****************/
    cout << "\n\n ENTER CONDITION VARIABLE? ";
    cin >> c;
    /* place condition variable c on condition var queue cndvar */
    cndvar[bp] = c;
    /* move backpointer (bp) to back */
    bp = bp + 1;
    /* set the condition variable pointer consisting of the
    statement number (sn) and the clause number (cn) */
    sn = 1;
	cn = 1;
    /* find the next statement number containing the condition variable
    which is in front of the queue (cndvar), this statement number
    is located in the clause variable list (clvarlt) */
    /* start at the beginning */
    f=1;
b496: search();
    /* point to first clause in statement */
    cn=1;
    if (sn != 0)
        /* more statements */
    {
        /* locate the clause */
        i = 7 * (sn-1) + cn;
        /* clause variable */
        v = clvarlt[i];
        /* are there any more clauses for this statement */
        while (v != "")
            /* more clauses */
        {
            /* check instantiation of this clause */
            check_instantiation();
            cn = cn+1;
            /* check next clause */
            i = 7 * (sn-1) + cn;
            v = clvarlt[i];
        }

        /* no more clauses - check IF part of statement */
        s = 0;
        /* sample IF-THEN statements from the position knowledge base */
        switch(sn)
        {
            /* statement 1 */
            /***** comment 1500 *****/


        case 1: if(poison == "Chloro-Phenoxy") s=1;
            break;
            /* statement 2 */
            /***** comment 1510 *****/
        case 2: if(poison == "Red_Squill") s=1;
            break;

        case 3: if(poison == "Carbanilate") s=1;
            break;

        case 4: if(poison == "Quinine") s=1;
            break;

        case 5: if(poison == "Nitric_Acid_Fumes") s=1;
            break;

        case 6: if(poison == "Ether") s=1;
            break;

        case 7: if(poison == "Sarin") s=1;
            break;

        case 8: if(poison == "Posion_IVY") s=1;
            break;

        case 9: if(poison == "Ricin") s=1;
            break;

        case 10: if(poison == "Campylo_Baster") s=1;
            break;

        case 11: if(poison == "Salmonella") s=1;
            break;

        case 12: if(poison == "Tetrodoxcin") s=1;
            break;

        case 13: if(poison == "Cadmium") s=1;
            break;

        case 14: if(poison == "Mercury") s=1;
            break;

        case 15: if(poison == "Arrow_Frog_Posion") s=1;
            break;

        case 16: if(poison == "Polonium") s=1;
            break;

        case 17: if(poison == "Carbon_Monoxide") s=1;
            break;

        case 18: if(poison == "Lead") s=1;
            break;

        case 19: if(poison == "Mustard_Gas") s=1;
            break;

        case 20: if(poison == "Nicotinic") s=1;
            break;

        case 21: if(poison == "Muscarinic") s=1;
            break;

        case 22: if(poison == "Cynaide") s=1;
            break;

        case 23: if(poison == "Opium") s=1;
            break;

        case 24: if(poison == "Arsenic") s=1;
            break;

        case 25: if(poison == "Fish_Poisoning") s=1;
            break;

        case 26: if(poison == "Mushroom") s=1;
            break;

        case 27: if(poison == "Neon") s=1;
            break;

        case 28: if(poison == "Aconite") s=1;
            break;

        case 29: if(poison == "Carbolic_Acid") s=1;
            break;

        case 30: if(poison == "Oxaclic_Acid") s=1;
            break;
            /***** comment 1610 *****/
        }

        /* see if the THEN part should be inovked, i.e., s=1 */
        if (s != 1)
        {
            f = sn + 1;
            goto b496;
        }

        /* invoke THEN part */
        switch (sn)
        {
            /*********** comment 1500 ***********/
            /* put variable on the conclusion variable queue */
        case 1:
            treatment = "alkalization may be helpful";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 2:
            treatment = "regulatory information and ecological toxicity";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 3:
            treatment = "often give fluids and antibiotics";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 4:
            treatment = "charcoal haemoperfusion";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 5:
            treatment = "Magnesia or soap dissolved in water";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 6:
            treatment = "stimulating treatment";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 7:
            treatment = "muscarinic acetylcholine receptors";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 8:
            treatment = "hydrocortisone cream";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 9:
            treatment = "proteinsynthesis";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 10:
            treatment = "oral rehydration therapy";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 11:
            treatment = "antibiotics and Iv fluids";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 12:
            treatment = "intervation with fluids,pressors";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 13:
            treatment = "chelation theraphy, mechanical ventilation";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 14:
            treatment = "white of eggs, mild drinks";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 15:
            treatment = "cardiorespiratory support";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 16:
            treatment = "Gasric aspiration or lavage";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 17:
            treatment = "100 percent oxygen therapy";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 18:
            treatment = "alkalization may be helpful";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 19:
            treatment = "common salt";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 20:
            treatment = "general muscular relxation or lavage";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 21:
            treatment = "xanomelina drug";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 22:
            treatment = "xxxx";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 23:
            treatment = "ground mustard  or grease in warm water";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 24:
            treatment = "give prompt emetic of mustard and salt";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 25:
            treatment = "enemtic promptly evacuate stomach";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 26:
            treatment = "give Epsom salts, evacuate stomach and bowels";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 27:
            treatment = "oxygen";
            cout << "\n Treatment is:" << treatment;
            v = treatment;
            instantiate();
            break;

        case 28:
            treatment = "hypodermic injections of ether ";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

        case 29:
            treatment = "give flour and water";
            cout << "\n Treatment is:" << treatment;
            v = treatment;
            instantiate();
            break;

        case 30:
            treatment = "Limewater, magnesia,chalk, plaster from the wall";
            cout << "\n Treatment is: " << treatment;
            v = treatment;
            instantiate();
            break;

            /*********** comment 1510 ***********/
            /* put variable on the conclusion variable queue */

       /* case 31:
            strcpy(po, "YES");
            printf("PO=YES\n");
            break;*/
            /*********** comment 1610 ***********/
        }
        f = sn + 1;
        goto b496;
    }

    /* no more clauses in the clause variable list (clvarlt)
    containing the variable in front of the queue (cndvar(fp))
    then remove front variable (cndvar(fp)) and replace it by
    the next variable (cndvar(fp+1)). If no more variables are
    at the front of the queue, stop. */
    /* next queue variable */
    fp=fp+1;
    if (fp < bp)
    {
        /* check out the condition variable */
        f = 1;
        goto b496;
    }
    /* no more conclusion variables on queue */
    return treatment;
}

//==========================================================================
/* Routine to instantiate a variable (v) if it isn't already.
The instantiate indication (instlt) is a 0 if not, a 1 if it is.
The vriable list (varlt) contains the variable (v) */
void FC::check_instantiation()
{
    i=1;

    /* find variable in the variable list */
    while ((v != varlt[i]) && (i <=35)) i = i+1;

    /* check if already instantiated */
    if (instlt[i] != 1)
    {
        /* mark instantiated */
        instlt[i] = 1;
        /* the designer of this knowledge base places the input
        statements to instantiate the variables in this case
        statement */

        switch (i)
        {
            /* input statements for sample position knowledge base */
        case 1:
            /*cout << "Enter Poison ";
            cin >> poison;*/
            break;

        case 2:
        	break;

        case 3:
        	break;

        case 4:
        	break;

        case 5:
        	break;

        case 6:
        	break;

        case 7:
        	break;

        case 8:
        	break;

        case 9:
        	break;

        case 10:
        	break;

        case 11:
        	break;

        case 12:
        	break;

        case 13:
        	break;

        case 14:
        	break;

        case 15:
        	break;

        case 16:
        	break;


        case 17:
        	break;

        case 18:
        	break;


        case 19:
        	break;

        case 20:
        	break;

        case 21:
        	break;

        case 22:
        	break;

        case 23:
        	break;

        case 24:
        	break;

        case 25:
        	break;

        case 26:
        	break;


        case 27:
        	break;

        case 28:
        	break;

        case 29:
        	break;

        case 30:
        	break;
        /*case 2:
            printf("RISE OR FALL FOR FT? ");
            gets(fedint);
            break;
        case 3:
            printf("ADD OR SUBTRACT FOR FM? ");
            gets(fedmon);
            break;
        case 4:
            printf("RISE OR FALL FOR IN? ");
            gets(interest);
            break;
        case 5:
            printf("RISE OR FALL FOR ST? ");
            gets(stock);
            break;*/
        }
    }
    /* end of input statements for the position knowledge base */
}

//==========================================================================
/* Search clause variable list for a varialbe (clvarlt) equal to the
one in front of the conclusion queue (cndvar). Return the statement
number (sn). If there is no match, i.e., sn=0, the first statement
for the space is f. */
void FC::search()
{
    flag = 0;
    sn = f;

    while ((flag == 0) && (sn < 35))
    {
        cn=1;
        k = (sn-1)*7+cn;
        while ((clvarlt[k] != cndvar[fp]) && (cn < 8))
        {
            cn = cn+1;
            k = (sn-1)*7+cn;
        }

        if (clvarlt[k] == cndvar[fp]) flag = 1;
        if (flag == 0) sn = sn+1;
    }
    if (flag == 0) sn=0;
}

//==========================================================================
/* Routine to instantiate a varialbe (v) and then place it on the
back of the queu (cndvar[bp]), if it is not already there. */
void FC::instantiate()
{
    i=1;
    /* find varialbe in the varialbe list (varlt) */
    while ((v != varlt[i]) && (i < 35)) i=i+1;

    /* instantiate it */
    instlt[i] = 1;
    i = 1;

    /* determine if (v) is or already has been on the queue (cndvar) */
    while ((v != cndvar[i]) && (i < 35)) i=i+1;
    /* variable has not been on the queue. Store it in the back of the queue */
    if (v != cndvar[i])
    {
        cndvar[bp] = v;
        bp=bp+1;
    }
}
