#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
void main()
{
     int countr,r=0,r1,count,i=0,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\n\n\t\t   !..... C PROGRAM QUIZ GAME .....!\n\n\t\t\t   BY SANKET RAONE ");
     printf("\n\t\t__________________________________________\n");

     printf("\n\t\t\t   W E L C O M E\n ");
     printf("\n\t\t\t        T O\n ");
     printf("\n\t\t\t     THE  GAME ");
     printf("\n\t\t_________________________________________");
     printf("\n\t\t_________________________________________\n");
     printf("\n\t\t     !!!!! BECOME A GENIUS !!!!!    ") ;
     printf("\n\t\t_________________________________________");
     printf("\n\t\t_________________________________________\n");
     printf("\n\t\t    > Press S to start the game.");
     printf("\n\t\t    > press Q to quit .            ");
     printf("\n\t\t    > Press V to view the highest score  ");
     printf("\n\t\t    > Press R to reset score      ");
     printf("\n\t\t    > press H for help            ");
     printf("\n\t\t_________________________________________\n\n");
     choice=toupper(getch());
    if(choice!='S' && choice!='Q' && choice!='V' && choice!='R' && choice!='H')
    {
        printf("\n\tEnter Correct Choice ...\n");
        getch();main();
    }
    else if (choice=='Q')
	 exit(1);

    else if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
    else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{
    reset_score();
	getch();
	goto mainhome;
	}
	else if(choice=='S')
    {
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister Your Name : ");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n  Here are some tips you might wanna know before playing: ");
    printf("\n\n-----------------------------------------------------------------------------\n");
    printf("\n >> You will be asked a total of 10 Questions. Each right answer will be awarded\n\n\t10 Points!");
    printf("\n\n >> You will be given 4 options and you have to press A, B ,C or D for the right\n\n\toption.\n");
    printf("\n\n >> You will be asked questions continuously, till right answers are given\n");
    printf("\n\n >> No negative marking for wrong answers!\n");
    printf("\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n >> Press Y to start the game!\n");
    printf("\n >> Press any other key to return to the main menu!\n");
    if (toupper(getch())=='Y')
		{
		    goto modes;
        }
	else
		{
        goto mainhome;
       system("cls");

       }
       modes:
        system("cls");
        printf("\n\n\n\t\t*** Choose The Quiz You Wanna Play ***\n\n");
        printf("\n\n\t\t A.Computer Awareness Quiz ");
        printf("\n\n\t\t B.Geography Quiz ");
        printf("\n\n\t\t C.Astronomy Quiz ");
        printf("\n\n\t\t D.Sports Quiz \n\t");
        if (toupper(getch())=='A')
        {
            goto A;
        }
        else if (toupper()=='B')
        {
            goto B;
        }
        else if (toupper()=='C')
        {
            goto C;
        }
        else if (toupper()=='D')
        {
            goto D;
        }
        else
        {
            printf("\n\n\tEnter Correct Choice ...");goto modes;getch();
        }
        A:
        system("cls");
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
            case 1:
		printf("\n\n\n\tThe softwares which is used to do a perticular task are known as?");
		printf("\n\n\tA.Operating System\t\tB.Program\n\n\tC.Data\t\t\t\tD.Softwares");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Program");getch();goto score;break;}

            case 2:
		printf("\n\n\n\tIf a computer has more than one processor then it is called as?");
		printf("\n\n\tA.Uniprocess\t\tB.Multiprocessor\n\n\tC.Multithreaded\t\tD.Multiprogramming");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Multiprocessor");getch();goto score;break;}

            case 3:
		printf("\n\n\n\tWhat is the Fullform of WWW ?");
		printf("\n\n\tA.World Wide Web\t\tB.World Wide Work\n\n\tC.World Web Wide\t\tD.World Web Work");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.World Wide Web");getch();goto score;break;}

            case 4:
		printf("\n\n\n\tWhich of the following is an example of input device?");
		printf("\n\n\tA.Scanner\t\tB.Speaker\n\n\tC.CD\t\t\tD.Printer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Scanner");getch();goto score;break;}

            case 5:
		printf("\n\n\t\tWhat is the Full Form of URL?");
		printf("\n\n\t\tA.Uniform Resource Locater\n\n\t\tB.Uniform Resource Link\n\n\t\tC.Uniform Registered Link\n\n\t\tD.Unified Resource Link");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Uniform Resource Locater");getch();
		       goto score;
		       break;}

            case 6:
		printf("\n\n\n\tOne Kilobyte is equal to ?");
		printf("\n\n\tA.1000 bytes\t\t\tB.1024 bytes\n\n\tC.1024 Megabytes\t\tD.1024 Gigabytes");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.1024 bytes");getch();goto score;break;}

            case 7:
		printf("\n\n\n\tThe rules of a computer language is known as?");
		printf("\n\n\tA.Code\t\t\tB.Structure\n\n\tC.Procedure\t\tD.Syntax");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Syntax");getch();goto score;break;}

		      case 8:
		printf("\n\n\n\t\tNOS stands for ?");
		printf("\n\n\t\tA.Node Operating System\n\n\t\tB.Non Open Software\n\n\t\tC.Network Operating System\n\n\t\tD.Non Operating Softwares");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Network Operating System");getch();goto score;break;}

		    case 9:
		printf("\n\n\n\tA Compact Disc(CD) is a data storage system of type?");
		printf("\n\n\tA.Optical\t\tB.Electrical\n\n\tC.Magnetic\t\tD.Electromechanical");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Optical");getch();goto score;break;}

		     case 10:
		printf("\n\n\n\tFather of 'C language' is?");
		printf("\n\n\tA.Dennis Ritchie\t\tB.Prof John Kemany\n\n\tC.Thomas Kurtz\t\t\tD.Bill Gates");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			goto score;break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Dennis Ritchie");getch();goto score;break;}}}}

        B:

       system("cls");
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;
     switch(r)
		{
		case 1:
		printf("\n\n\tWhich is the Smallest country in the World?");
		printf("\n\n\tA.Sri Lanka\t\tB.Israel\n\n\tC.Vatican City\t\tD.Iraq");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Vatican City");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n\tSahara Desert is located in which continent ?");
		printf("\n\n\tA.Asia\t\t\tB.Africa\n\n\tC.Europe\t\tD.North America");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Africa");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n\tWhat is the Diameter of the Earth?");
		printf("\n\n\tA.10226 KM\t\tB.13990 KM\n\n\tC.12742 KM\t\tD.18527 KM");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.12742 KM");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\n\tWhich is the longest River in the world?");
		printf("\n\n\tA.Nile\t\tB.Koshi\n\n\tC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();goto score;break;}

        case 5:
		printf("\n\n\n\tWhat is the capital of Denmark?");
		printf("\n\n\tA.Copenhagen\t\tB.Helsinki\n\n\tC.Ajax\t\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       goto score;
		       break;}
            case 6:
		printf("\n\n\n\tWhich city is known at 'The City of Seven Hills'?");
		printf("\n\n\tA.Rome\t\t\tB.Vactican City\n\n\tC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              goto score;break;}

            case 7:
		printf("\n\n\n\tThe Great Victoria Desert located in?");
		printf("\n\n\tA.Canada\t\tB.West Africa\n\n\tC.Australia\t\tD.North America");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Australia");
		       getch();
		       goto score;
		       break;
		       }

		case 8:
		printf("\n\n\n\tWhich country is also known as Persia?");
		printf("\n\n\tA.Iran\t\t\tB.Iraq\n\n\tC.Istambul\t\tD.Mozambique");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Iran");goto score;
		       getch();
		       break;}

        case 9:
		printf("\n\n\n\tWhere is 'Ground Zero'?");
		printf("\n\n\tA.Greenwich\t\tB.New York\n\n\tC.Indira Point\t\tD.Shriharikota");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.New York");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\n\tWhich among the following has world's largest reserve of Uranium?");
		printf("\n\n\tA.Australia\t\tB.Canada\n\n\tC.Russia\t\tD.USA");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); goto score;break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Australia");getch();
		       goto score;
		       break;}}}

        C:
        system("cls");
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;
     switch(r)
		{
		case 1:
		printf("\n\n\tThe Big Bang Theory is related to which of the following?");
		printf("\n\n\tA.Continental Drift\t\tB.Origin of Universe\n\n\tC.Origin of Himalayas\t\tD.Eruption of Volcanoes");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Origin of Universe");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n\tHow much time does Sunrays take to reach Earth?");
		printf("\n\n\tA.8 Min\t\t\tB.9 Min\n\n\tC.10 Min\t\tD.15 Min");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.8 Min");getch();
		      goto score;
		       break;
		       }

            case 3:
		printf("\n\n\n\tWhat is the surface temperature of the Sun?");
		printf("\n\n\tA.6000 K\t\tB.6200 K\n\n\tC.5778 K\t\tD.7194 K");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.5778 K");getch();
		       goto score;
		       break;
		       }

        case 4:
		printf("\n\n\n\tWhich Planet is known as Morning star or Evening star? ");
		printf("\n\n\tA.Venus\t\t\tB.Mars\n\n\tC.Jupiter\t\tD.Saturn");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Venus");getch();
		       goto score;
		       break;}

        case 5:
		printf("\n\n\n\tAge of our Sun is about?");
		printf("\n\n\tA.4.5 Billion Years\t\tB.4.6 Billion Years\n\n\tC.4.8 Billion Years\t\tD.5 Billion Years");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.4.6 Billion Years");getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\n\tThe Milky Way is classified as?");
		printf("\n\n\tA.Spiral Galaxy\t\t\tB.Eliptical Galaxy\n\n\tC.Irregular Galaxy\t\tD.Round Galaxy");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Spiral Galaxy");
		       getch();
		       goto score;
		       break;
		       }

		case 7:
		printf("\n\n\n\tWhich one is the nearest Galaxy to Milky Way Galaxy?");
		printf("\n\n\tA.Andromeda Galaxy\t\tB.Black Eye Galaxy\n\n\tC.Antennae Galaxy\t\tD.Circinus Galaxy");
		if (toupper(getch())=='A' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Andromeda Galaxy");goto score;
		       getch();
		       break;}

        case 8:
		printf("\n\n\n\tWhich is the Brightest Star outside the Solar System?");
		printf("\n\n\tA.Sirius\t\tB.Proxima Centaury\n\n\tC.UY Scuti\t\tD.Betelgeuse");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Sirius");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n\tWhich of the following phenomena cannot be observed on the surface of the Moon?");
		printf("\n\n\tA.Rising and Setting of Sun\t\tB.Solar Eclipse\n\n\tC.Motion of Comets\t\t\tD.Twinkling of Stars");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Twinkling of Stars");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\n\tThe Star of which colour can be said to be the coolest?");
		printf("\n\n\tA.Yellow\t\tB.Blue\n\n\tC.Red\t\t\tD.White");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();goto score;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Red");getch();goto score;break;}}}

        D:
        system("cls");
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n\tWhat is the National Game of England?");
		printf("\n\n\tA.Football\t\tB.Basketball\n\n\tC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n\tWho is known as 'GOD OF CRICKET' ?");
		printf("\n\n\tA.M.S.Dhoni\t\t\tB.Virat Kohli\n\n\tC.Sachin Tendulkar\t\tD.Kapil Dev");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Sachin Tendulkar");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n\t2010 Commonwealth Games was held in ?");
		printf("\n\n\tA.Canada\t\tB.India\n\n\tC.England\t\tD.Autralia");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.India");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\n\tWho is known as 'Flying Sikh' of India?");
		printf("\n\n\tA.Ussain Bolt\t\tB.Milkha Singh\n\n\tC.Sandeep Singh\t\tD.Navjyot Singh");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is B.Milkha Singh");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n\tWho was the first Indian women to win a medal in Badminton at the Olympics");
		printf("\n\n\tA.P.V.Sindhu\t\t\tB.P.T.Usha\n\n\tC.Saina Nehwal\t\t\tD.Sania Mirza");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Saina Nehwal");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n\tWho won the first T20 World Cup?");
		printf("\n\n\tA.Sri Lanka\t\tB.India\n\n\tC.England\t\tD.Australia");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.India");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n\tNational sport of Canada is?");
		printf("\n\n\tA.Ice Hockey\t\tB.Field Hockey\n\n\tC.Vollyball\t\tD.Soccur");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Ice Hockey");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\n\tHow many players are there in each team in Baseball?");
		printf("\n\n\tA.5\t\tB.7\n\n\tC.9\t\tD.11");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.9");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n\tWhich country has won the Cricket World Cup three times in a row?");
		printf("\n\n\tA.South Africa\t\t\tB.India\n\n\tC.England\t\t\tD.Australia");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Australia");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\n\tWhich Team become the First team in the IPL to win 100 matches?");
		printf("\n\n\tA.Chennai Super Kings\t\tB.Mumbai Indians\n\n\tC.Delhi Capitals\t\tD.Royal Challengers Banglore");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();goto score;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Mumbai Indians");getch();goto score;break;}}}

        score:
    system("cls");
	score=(float)countr*10;
	if(score==100)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\n\t\t\t***** YOU WON THE GAME *****");
	    printf("\n\n\t\t Your score is %.2f",score);
	    printf("\n\n\t\t Thank You for playing!!");
	}
	else if(score>40.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\n\t\t\tYour score is %.2f",score);goto go;}
	 else
     {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN THE GAME ********\n");
	 printf("\n\n\t\t Your score is %.2f",score);
	    printf("\n\t\tThanks for your participation\n");
	    printf("\n\t\t\tTRY AGAIN");goto go;
     }
     go:
	puts("\n\n\tPress Y if you want to play again");
	puts("\n\tPress any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto modes;
    else
		{
		edit_score(score,playername);
		goto mainhome;
    }
}

void show_record()
{
    system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f," %s    \t  %f\n",&name,&scr);
	printf("\n\n\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
}

void reset_score()
{
    system("cls");
    float sc=0;
	char nm[20]={"-----"};
	FILE *f;
	f=fopen("score.txt","w");
	fprintf(f," %s    \t  %.2f\n",nm,sc);
    fclose(f);
    printf("\n\n\n\n\n\n\n\n\n\n\t\tScore has reset to 0.00");
}

void help()
{
    system("cls");
    printf("\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ------------------  Welcome to C Program Quiz Game --------------------------");
    printf("\n\n  Here are some tips you might wanna know before playing: ");
    printf("\n\n-----------------------------------------------------------------------------\n");
    printf("\n >> You will be asked a total of 10 Questions. Each right answer will be awarded\n\n\t10 Points!");
    printf("\n\n >> You will be given 4 options and you have to press A, B ,C or D for the right\n\n\toption.\n");
    printf("\n\n >> You will be asked questions continuously, till right answers are given\n");
    printf("\n\n >> No negative marking for wrong answers!\n");
    printf("\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by SANKET RAONE ********\n");
}
void edit_score(float score, char playername[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s %f",&nm,&sc);
	if (score>=sc)
	  {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"\n %s     %.2f \n",playername,sc);
	    fclose(f);
	  }
    else if(score==0)
    {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"\n %s     %.2f \n",playername,sc);
	    fclose(f);
    }
}
