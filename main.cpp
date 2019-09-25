#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<iostream>
#include<process.h>
using namespace std;

void gotoxy(int x, int y){


	COORD coord;
	coord.X =x;
	coord.Y =y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void){
	string search;
	int offset;
	string line;
	char contain[1000];
	int b;
	int a;
	FILE *P;
	int menu=1;

	int r, q;
	gotoxy(85,12);
	system ("COLOR 72");
	printf("Loading...");
	gotoxy(35,15);
	for(r=1;r<=95;r++){
		for(q=0;q<=20000000;q++);
		printf("%c",177);
	}
	system ("cls");

	while(1){

				FILE *p;
					if((p=fopen("menu/welcome2.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,p)!=NULL)
          			puts(contain);
           			fclose(p);

		scanf("%d",&menu);
		system ("cls");
		if(menu==1){


	while(1){

								FILE *p;
								if((p=fopen("menu/welcome.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    								while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

		scanf("%d",&b);
		system ("cls");

		if(b==1||b==2||b==3||b==4||b==5||b==6||b==7||b==8){

			switch (b){

				case 1:
					system ("COLOR BC");
					FILE *p;
					if((p=fopen("menu/Ba.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,p)!=NULL)
          			puts(contain);
           			fclose(p);

					scanf("%d",&a);//read pointer function code include here
						system ("cls");
						switch (a){
							case 1:{
								FILE *p;
								if((p=fopen("bangladesh/historyofbangladesh.txt","r"))==NULL)
       								{
        						    printf("\nUnable to open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
          						 	 //ifstream Myfile;
          						 	 //Myfile.open("bangladesh/historyofbangladesh.txt");
          						 	 //cout <<"Type the name which you went to search"<<endl;
          						 	 //cin >> search;
          						 	 //if (Myfile.is_open()){
          						 	 //	while (!Myfile.eof()){
          						 	 //		getline(Myfile,line);
          						 	 //		if((offset = line.find(search, 0))!=string::npos){
          						 	 //			cout <<"This is here"<<search<<endl;

									//			}
									//		}
									//			Myfile.close();
									//		}
									//		else{
									//			cout <<"Could not open this file"<<search<<endl;
									//			system("PAUSE");
									//			return 0;
									//		}

           							 fclose(p);


   								 break;

							}

							case 2:{
								FILE *p;
								if((p=fopen("bangladesh/Libwarbang.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

   								 break;

							}
							case 3:{
								FILE *p;
								if((p=fopen("bangladesh/areaofbang.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

   								 break;

							}
							case 4:{
								FILE *p;
								if((p=fopen("bangladesh/culture.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

   								 break;

							}
							case 5:{
								FILE *p;
								if((p=fopen("bangladesh/govtinfo.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

   								 break;

							}
							case 6:{
								FILE *p;
								if((p=fopen("bangladesh/divitionbang.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");
        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)
          						 	 puts(contain);
           							 fclose(p);

   								 break;

							}
						}
					break;


				case 2:
					system ("COLOR BD");
					FILE *D;
					if((D=fopen("menu/D.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,D)!=NULL)
          			puts(contain);
           			fclose(D);

					scanf("%d",&a);

					system ("cls");

					switch(a){
						case 1:
							{
								FILE *p;
								if((p=fopen("Dhaka/historyofdhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 2:
							{
								FILE *p;
								if((p=fopen("Dhaka/roadinfoofdhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 3:
							{
								FILE *p;
								if((p=fopen("Dhaka/busandtraininfofodhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 4:
							{
								FILE *p;
								if((p=fopen("Dhaka/HospitalinfoOfDhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 5:
							{
								FILE *p;
								if((p=fopen("Dhaka/EducationalInfoOfDhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 6:
							{
								FILE *p;
								if((p=fopen("Dhaka/historyofdhaka.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 7:
							{
								FILE *p;
								if((p=fopen("Dhaka/police.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

					}


					break;


				case 3:
					system ("COLOR BC");
					FILE *R;
					if((R=fopen("menu/R.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,R)!=NULL)
          			puts(contain);
           			fclose(R);

					scanf("%d",&b);

					system ("cls");

					switch(b){

							case 1:
							{
								FILE *p;
								if((p=fopen("Rajshahi/HistoryofRajshahi.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 2:
							{
								FILE *p;
								if((p=fopen("Rajshahi/RoadnTrainInfoRajshahi.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 3:
							{
								FILE *p;
								if((p=fopen("Rajshahi/HospitalInfoOfRajshahi.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 4:
							{
								FILE *p;
								if((p=fopen("Rajshahi/BusnTrainStationofRajshahi.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
							case 5:
							{
								FILE *p;
								if((p=fopen("Rajshahi/HistoricalPlaceOfRajshahi.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
							case 6:
							{
								FILE *p;
								if((p=fopen("Rajshahi/policei.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
							case 7:
							{
								FILE *p;
								if((p=fopen("Rajshahi/edu.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
					}

					break;

				case 4:
					system ("COLOR CB");

					FILE *C;
					if((C=fopen("menu/C.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,C)!=NULL)
          			puts(contain);
           			fclose(C);

					scanf("%d",&b);

					system ("cls");

					switch (b){

						case 1:
							{
								FILE *p;
								if((p=fopen("Chittagong/HistoryOfCitg.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 2:
							{
								FILE *p;
								if((p=fopen("Chittagong/RoadnRiverofCitg.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 3:
							{
								FILE *p;
								if((p=fopen("Chittagong/HistoricalPlaceofCitg.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 4:
							{
								FILE *p;
								if((p=fopen("Chittagong/HospitalInfoOfCitg.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 5:
							{
								FILE *p;
								if((p=fopen("Chittagong/BusnTrainInfoCitg.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 6:
							{
								FILE *p;
								if((p=fopen("Chittagong/EducationnPoliceInfo.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 7:
							{
								FILE *p;
								if((p=fopen("Chittagong/Edu.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}


					}

					break;

				case 5:
					system ("COLOR BD");

					FILE *Bari;
					if((Bari=fopen("menu/Bari.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,Bari)!=NULL)
          			puts(contain);
           			fclose(Bari);


					scanf("%d",&b);

					system ("cls");

					switch(b){

							case 1:
							{
								FILE *p;
								if((p=fopen("Barishal/historyofbarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 2:
							{
								FILE *p;
								if((p=fopen("Barishal/RoadnRiverofBarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 3:
							{
								FILE *p;
								if((p=fopen("Barishal/HistoricalPlaceofBarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 4:
							{
								FILE *p;
								if((p=fopen("Barishal/HospitalInfoOfBarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 5:
							{
								FILE *p;
								if((p=fopen("Barishal/BusnTraininfoofBarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

							case 6:
							{
								FILE *p;
								if((p=fopen("Barishal/PolicenEducationalInfoofBarishal.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
							case 7:
							{
								FILE *p;
								if((p=fopen("Barishal/edu.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

					}

					break;


				case 6:
					system ("COLOR DF");


					FILE *S;
					if((S=fopen("menu/S.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,S)!=NULL)
          			puts(contain);
           			fclose(S);

					scanf("%d",&b);

					system ("cls");

					switch (b){

						case 1:
							{
								FILE *p;
								if((p=fopen("Sylhet/Historyofsylhet.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 2:
							{
								FILE *p;
								if((p=fopen("Sylhet/HistoricalPlaceofSylhet.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 3:
							{
								FILE *p;
								if((p=fopen("Sylhet/BusnTrainStationOfSylhet.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 4:
							{
								FILE *p;
								if((p=fopen("Sylhet/PoliceStationNEducationofsylhet.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 5:
							{
								FILE *p;
								if((p=fopen("Sylhet/HospitalInformationOfSylhet.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 6:
							{
								FILE *p;
								if((p=fopen("Sylhet/edu.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

					}

					break;


				case 7:
					system ("COLOR BD");


                    FILE *K;
					if((K=fopen("menu/K.txt","r"))==NULL)
       				{
        			printf("\n Unable t open file Address.txt");
        				exit(1);
      				}
    				while(fgets(contain,1000,K)!=NULL)
          			puts(contain);
           			fclose(K);

					scanf("%d",&b);

					system ("cls");

					switch (b){
						case 1:
							{
								FILE *p;
								if((p=fopen("Khulna/HistoryOfKhulna.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 2:
							{
								FILE *p;
								if((p=fopen("Khulna/HistoricalPlaceofKhulna.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 3:
							{
								FILE *p;
								if((p=fopen("Khulna/BusNTrainStationOfKhulna.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 4:
							{
								FILE *p;
								if((p=fopen("Khulna/PoliceStationOfKhulna.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
						case 5:
							{
								FILE *p;
								if((p=fopen("Khulna/HospitalInformationOfKhulna.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}

						case 6:
							{
								FILE *p;
								if((p=fopen("Khulna/edu.txt","r"))==NULL)
       								{
        						    printf("\nUnable t open file Address.txt");

        						    exit(1);
      							  }
    							while(fgets(contain,1000,p)!=NULL)

          						 	 puts(contain);
           							 fclose(p);


   								 break;
							}
					}

					break;



			case 8://This Case for Exit

				exit(0);
			}

		}
		else{
		system("cls");
		printf("\n\t\t\t\t\t\t Your Select Wrong Option,Please Select a Correct Option\n\t\t\t\t______________________________________________________________________________________________________\n");
		}



 }

}
else if (menu==2){
    exit(0);
}
else{

	printf("\n\n\t\t\t\t\t\t Sorry You Press Wrong Option!Please Press Right Option.");
}
}
	return 0;
}
