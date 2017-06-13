#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.H>
#include<stdlib.h>
#include<dos.h>
#include<alloc.h>

class inicio {
	public:
	 char sonido;
	 char dibujo;
	 int poscarro;
	public:
	 void ini()
	 {
		 int gdriver=DETECT, gmode, errorcode;
		 initgraph (&gdriver, &gmode, "C:\\TURBOC3\\BGI");
		 errorcode=graphresult();
		 if (errorcode !=grOk)
		 {
		 cout<<"ERROR DE GRAFICOS "<<endl;
		 getch();
		 exit(1);

		 }
	 }
	 void menu()
	  {

	  setfillstyle(SOLID_FILL,BLACK);
	  bar(0,0,640,480);


	  setfillstyle(SOLID_FILL,WHITE);  //Para jugar
	  bar(179,220,451,302);
	  setfillstyle(SOLID_FILL,CYAN);
	  bar(184,225,446,297);
	  setcolor(WHITE);
	  settextstyle(6,0,6);
	  outtextxy(245,225,"JUGAR");

	  setfillstyle(SOLID_FILL,WHITE);
	  bar(179,402,451,464);
	  setfillstyle(SOLID_FILL,CYAN);
	  bar(184,407,446,459);
	  setcolor(WHITE);
	  settextstyle(6,0,5);
	  outtextxy(188,400,"INSTRUCCIONES");

	  setfillstyle(SOLID_FILL,WHITE);              //Para Salir
	  bar(226,336,414,397);
	  setfillstyle(SOLID_FILL,CYAN);
	  bar(231,341,409,392);
	  setcolor(WHITE);
	  settextstyle(6,0,5);
	  outtextxy(275,335,"SALIR");

	  sonidomenu ();

		do
		{
		dibujo=getch();
		switch(dibujo)
		 {
			case 'a': case 'A':

			setfillstyle(SOLID_FILL,LIGHTGRAY);
			bar(184,225,446,297);
			setcolor(WHITE);
			settextstyle(6,0,6);
			outtextxy(245,225,"JUGAR");
			delay(260);
			juego();

			break;

			case 's': case 'S':
			setfillstyle(SOLID_FILL,LIGHTGRAY);
			bar(231,341,409,392);
			setcolor(WHITE);
			settextstyle(6,0,5);
			outtextxy(275,335,"SALIR");
			exit (1);
			break;

			case 'd': case 'D':
			setfillstyle(SOLID_FILL,CYAN);
			bar(184,407,446,459);
			setcolor(WHITE);
			settextstyle(6,0,5);
			outtextxy(188,400,"INSTRUCCIONES");
			setfillstyle(SOLID_FILL,BLACK);
			bar(0,0,640,480);
			setcolor(WHITE);
			settextstyle(6,0,1);
			outtextxy(0,0,"El juego consiste en no tocar los obstaculos que te encuentres en el camino");
			setcolor(WHITE);
			settextstyle(6,0,1);
			outtextxy(0,15,"para moverte dentro de este utilizaras las letras 'k' para posicionarte en medio,");
			setcolor(WHITE);
			settextstyle(6,0,1);
			outtextxy(2,30,"'j' para estar al lado derecho de tu pantalla, 'l' para estar en el lado izquierdo de tu");
			setcolor(WHITE);
			settextstyle(6,0,1);
			outtextxy(2,45,"pantalla, para volver al menu principal presiona 'f");
			break;

			case 'f': case 'F':
			menu();
			break;
				}
					}while(dibujo != 's');
			}
			void juego()
			{

			//int tecla=getch();
		 //switch(tecla)
		 //{
			cleardevice();
			setfillstyle(SOLID_FILL,BLACK);
			bar(0,0,640,680);

			setfillstyle(SOLID_FILL,CYAN);
			bar(0,0,21,480); //indica lugar en carrera

			setfillstyle(SOLID_FILL,BLACK);
			bar(30,0,228,480); //Izquierda

			setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera
			bar(233,0,421,480);

			setfillstyle(SOLID_FILL,BLACK);
			bar(420,0,640,480);  //derecha

			setfillstyle(SOLID_FILL,YELLOW);
			bar(317,0,322,480);
			setfillstyle(SOLID_FILL,YELLOW);
			bar(329,0,334,480);  //Linea de carretera

			setfillstyle(SOLID_FILL,RED);     // unoooo jaja
			bar(170,181,200,293);
			delay(260);
			// setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 // bar(233,0,415,480);
			setfillstyle(SOLID_FILL,BLACK);
			bar(30,0,228,480); //Izquierda


			setfillstyle(SOLID_FILL,RED);         //dos
			bar(278,181,352,207);
			bar(331,181,352,249);
			bar(278,224,352,249);
			bar(278,224,301,293);
			bar(278,260,352,293);
			delay(260);
			 setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 bar(233,0,421,480);
		 setfillstyle(SOLID_FILL,YELLOW);
			bar(317,0,322,480);
			setfillstyle(SOLID_FILL,YELLOW);
			bar(329,0,334,480);  //Linea de carretera

		 setfillstyle(SOLID_FILL,RED);     // tres
		 bar(416,181,492,211);
		 bar(468,181,492,290);
		 bar(416,263,492,293);
		 bar(443,227,492,250);
		 delay(260);
		 setfillstyle(SOLID_FILL,BLACK);
		 bar(420,0,640,480);  //derecha
		 setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 bar(233,0,421,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(317,0,322,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(329,0,334,480);  //Linea de carretera

		 setfillstyle(SOLID_FILL,WHITE);
		 bar(131,16,262,36);
		 bar(131,16,176,118);
		 bar(131,101,265,118);
		 bar(209,62,265,83);
		 bar(240,62,265,129);

		 bar(287,16,395,34);//o
		 bar(287,16,309,118);
		 bar(287,95,395,119);
		 bar(372,16,395,119);

		 bar(414,16,440,93);//signos
		 bar(414,108,440,132);

		 bar(457,16,482,93);
		 bar(457,108,482,132);  //signos de admiracion
		 delay(260);
		 setfillstyle(SOLID_FILL,BLACK);
		 bar(30,0,228,480); //Izquierda
		 setfillstyle(SOLID_FILL,BLACK);
		 bar(420,0,640,480);  //derecha
		 setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 bar(233,0,421,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(317,0,322,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(329,0,334,480);  //Linea de carretera


		 carro2 ();   //enmedio  a derecha
		 int tecla;
		 int posy=0;
		 do
		 {
		 if(!kbhit())
		 {
		 posy++;


		 setfillstyle(SOLID_FILL,WHITE);
		 bar(235,23+posy,292,46+posy);
		 delay(0);

		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(235,16+posy,292,39+posy);
		 delay(20);

		 setfillstyle(SOLID_FILL,WHITE);
		 bar(364,33+posy,413,53+posy);
		 delay(0);

		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(364,26+posy,413,46+posy);
		 delay(20);

		 if(posy+46 == 340 && poscarro == 3)
		 {
			gameover();
			sonidogameover();

		 }
		 if(posy+53 == 340 && poscarro == 1)
		 {
		 gameover();
		 sonidogameover();
		 }
		 if(posy+46 == 480)
		 {
			juego2();
		 }









		//	delay(30);
			//	setfillstyle(SOLID_FILL,WHITE);
		 //	bar(292,23+posy,343,46+posy);
			 //	delay(0);

		//	setfillstyle(SOLID_FILL,LIGHTGRAY);
			//	 bar(292,16+posy,343,39+posy);
			//	 delay(20);




		 }
		 else
		 {


		 tecla = getch();
		 switch(tecla)
		 {
		 case 'k': case 'K':
		 setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 bar(233,0,421,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(317,0,322,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(329,0,334,480);  //Linea de carretera
		 carro1 ();
		 break;


		case 'j': case 'J':
		setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		bar(233,0,421,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(317,0,322,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(329,0,334,480);  //Linea de carretera
		carro2 ();
		break;

		case 'h' : case 'H':
		setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		bar(233,0,421,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(317,0,322,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(329,0,334,480);  //Linea de carretera
		carro3 ();
		break;








		 case 's': case 'S':
		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(231,341,409,392);
		 setcolor(WHITE);
		 settextstyle(6,0,5);
		 outtextxy(275,335,"SALIR");
		 exit (1);
		 break;

		 }
		 }
		 }while(tecla != 'k','j','h');

			}
			void carro1 () //derecha
			{
			poscarro = 1;

			setfillstyle(SOLID_FILL,RED);
			bar(374,392,388,398),

			setfillstyle(SOLID_FILL,BLACK);
			bar(369,370,376,386);

			setfillstyle(SOLID_FILL,BLACK);
			bar(386,370,392,386);

			setfillstyle(SOLID_FILL,BLACK);
			bar(375,376,378,386);

			setfillstyle(SOLID_FILL,BLACK);
			bar(383,376,387,386);

			setfillstyle(SOLID_FILL,BLACK);
			bar(369,386,393,392);

			setfillstyle(SOLID_FILL,BLACK);
			bar(374,363,387,386);

			setfillstyle(SOLID_FILL,RED);
			bar(376,363,379,376);

			setfillstyle(SOLID_FILL,RED);
			bar(384,363,387,376);

			setfillstyle(SOLID_FILL,RED);
			bar(376,376,386,380);

				setfillstyle(SOLID_FILL,BLACK);
			bar(370,350,392,352);

			setfillstyle(SOLID_FILL,BLACK);
			bar(377,346,385,363);

			setfillstyle(SOLID_FILL,BLACK);
			bar(379,337,382,346);

			setfillstyle(SOLID_FILL,BLACK);
			bar(365,347,370,354);

			setfillstyle(SOLID_FILL,BLACK);
			bar(390,347,395,354);

			setfillstyle(SOLID_FILL,BLACK);
			bar(374,339,389,342);

			setfillstyle(SOLID_FILL,RED);
			bar(366,339,375,345);

			setfillstyle(SOLID_FILL,RED);
			bar(387,339,395,344);

			setfillstyle(SOLID_FILL,RED);
			bar(369,365,375,368);

			setfillstyle(SOLID_FILL,RED);
			bar(387,365,392,367);

			setfillstyle(SOLID_FILL,BLACK);
			bar(366,387,372,395);

			setfillstyle(SOLID_FILL,BLACK);
			bar(391,387,396,395);

			setfillstyle(SOLID_FILL,BLACK);
			bar(379,363,383,371);
					}
			 void carro2 () //medio
			 {
			 poscarro = 2;
			setfillstyle(SOLID_FILL,RED);
			bar(308,365,331,393);

			setfillstyle(SOLID_FILL,BLACK);
			bar(308,368,331,393);

			setfillstyle(SOLID_FILL,RED);
			bar(313,364,325,376);

			setfillstyle(SOLID_FILL,BLACK);
			bar(317,364,322,373);

				setfillstyle(SOLID_FILL,BLACK);
			bar(316,347,323,363);

			setfillstyle(SOLID_FILL,BLACK);
			bar(304,348,310,355);

				setfillstyle(SOLID_FILL,BLACK);
			bar(329,348,334,355);

			setfillstyle(SOLID_FILL,BLACK);
			bar(309,351,331,353);

			setfillstyle(SOLID_FILL,BLACK);
			bar(310,340,330,342);

			setfillstyle(SOLID_FILL,RED);
			bar(305,340,314,345);

			setfillstyle(SOLID_FILL,RED);
			bar(326,340,334,345);

			setfillstyle(SOLID_FILL,BLACK);
			bar(318,338,321,346);

			setfillstyle(SOLID_FILL,RED);
			bar(313,394,326,400);

			setfillstyle(SOLID_FILL,BLACK);
			bar(305,388,311,396);

			setfillstyle(SOLID_FILL,BLACK);
			bar(329,388,334,396);
				}
		 void carro3 ()  //izquierda
		 {
		 poscarro = 3;

			setfillstyle(SOLID_FILL,RED);
			bar(248,365,271,392);
			setfillstyle(SOLID_FILL,BLACK);
			bar(248,368,271,392);
			setfillstyle(SOLID_FILL,BLACK);
			bar(245,387,251,395);
			setfillstyle(SOLID_FILL,BLACK);
			bar(269,387,274,394);

			setfillstyle(SOLID_FILL,RED);
			bar(253,393,266,398);

			setfillstyle(SOLID_FILL,BLACK);
			bar(257,346,263,364);

			setfillstyle(SOLID_FILL,BLACK);
			bar(244,347,249,354);
			bar(270,347,274,354);
			bar(248,350,271,352);
			bar(259,337,262,346);
			bar(252,339,269,341);
			bar(257,362,263,372);
			setfillstyle(SOLID_FILL,RED);
			bar(245,339,254,344);
			setfillstyle(SOLID_FILL,RED);
			bar(266,339,274,344);
			bar(254,363,257,375);
			bar(254,372,265,375);
			bar(263,363,265,375);









		}


		void gameover()
		{
		cleardevice();

		setfillstyle(SOLID_FILL,BLACK);
		bar(0,0,640,480);
		//	  setfillstyle(SOLID_FILL,LIGHTGRAY);
		//	  bar(93,170,548,287);
		setcolor(WHITE);
		settextstyle(6,0,6);
		outtextxy(180,232,"GAME OVER");
		sonidogameover();
		getch();
		exit(1);
		}

		void sonidogameover()
		{
		sound(783.99);
		delay(120);
		nosound();

		sound(739.99);
		delay(120);
		nosound();

		sound(698.46);
		delay(120);
		nosound();

		sound(659.26);
		delay(360);
		nosound();

		sound(698.46);
		delay(120);
		nosound();

		sound(739.99);
		delay(120);
		nosound();

		sound(466.16);
		delay(120);
		nosound();

		sound(440.00);
		delay(120);
		nosound();

		sound(415.30);
		delay(120);
		nosound();

		sound(392.00);
		delay(360);
		nosound();

		sound(415.30);
		delay(120);
		nosound();

		sound(440.00);
		delay(120);
		nosound();

		sound(392.00);
		delay(120);
		nosound();

		sound(369.99);
		delay(120);
		nosound();

		sound(349.23);
		delay(120);
		nosound();

		sound(329.63);
		delay(360);
		nosound();

		sound(349.23);
		delay(120);
		nosound();

		sound(369.99);
		delay(120);
		nosound();

		sound(392.00);
		delay(240);
		nosound();

		sound(392.00);
		delay(120);
		nosound();



		}

		void sonidomenu()
		{
		sound(1975.53);
		delay(100);
		nosound();

		sound(2349.32);
		delay(100);
		nosound();

		sound(2637.02);
		delay(100);
		nosound();

		sound(2349.32);
		delay(100);
		nosound();

		sound(3135.96);
		delay(140);
		nosound();

		sound(2959.96);
		delay(100);
		nosound();

		sound(2637.02);
		delay(100);
		nosound();

		sound(2349.32);
		delay(220);
		nosound();

		sound(1975.53);
		delay(100);
		nosound();

		sound(1567.98);
		delay(140);
		nosound();

		sound(1567.98);
		delay(10);
		nosound();

		sound(1760.00);
		delay(10);
		nosound();

		sound(1975.53);
		delay(10);
		nosound();

		sound(2093.00);
		delay(10);
		nosound();

		sound(1975.53);
		delay(100);
		nosound();

		sound(2349.32);
		delay(100);
		nosound();

		sound(2637.02);
		delay(100);
		nosound();

		sound(2349.32);
		delay(100);
		nosound();

		sound(3135.96);
		delay(160);
		nosound();

		sound(2959.96);
		delay(100);
		nosound();

		sound(2637.02);
		delay(100);
		nosound();

		sound(2349.32);
		delay(15);
		nosound();

		sound(2673.02);
		delay(10);
		nosound();

		sound(2349.32);
		delay(10);
		nosound();

		sound(2093.00);
		delay(10);
		nosound();

		sound(1975.53);
		delay(10);
		nosound();

		sound(2093.00);
		delay(10);
		nosound();

		sound(1760.00);
		delay(10);
		nosound();

		}


		void juego2()
			{

			//int tecla=getch();
		 //switch(tecla)
		 //{
			cleardevice();
			setfillstyle(SOLID_FILL,BLACK);
			bar(0,0,640,680);

			setfillstyle(SOLID_FILL,CYAN);
			bar(0,0,21,480); //indica lugar en carrera

			setfillstyle(SOLID_FILL,BLACK);
			bar(30,0,228,480); //Izquierda

			setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera
			bar(233,0,421,480);

			setfillstyle(SOLID_FILL,BLACK);
			bar(420,0,640,480);  //derecha

			setfillstyle(SOLID_FILL,YELLOW);
			bar(317,0,322,480);
			setfillstyle(SOLID_FILL,YELLOW);
			bar(329,0,334,480);  //Linea de carretera

		 if(poscarro == 3)
		 {
			carro3();
		 }
		 else if(poscarro == 2)
		 {
			carro2 ();   //enmedio  a derecha
		 }
		 else if(poscarro == 1)
		 {
			carro1();
		 }
		 int tecla;
		 int posy=0;
		 int obstaculo1=0;
		 int obstaculo2=0;
		 int posrand1 = random(3)+1;
		 int posrand2 = random(3)+1;
		 if(posrand1 == 1)
			obstaculo1 = 364;
		 else if(posrand1 == 2)
			obstaculo1 = 300;
		 else if(posrand1 == 3)
			obstaculo1 = 235;

			if(posrand2 == 1)
				obstaculo2 = 364;
			else if(posrand2 == 2)
				obstaculo2 = 300;
			else if(posrand2 == 3)
				obstaculo2 = 235;

		 do
		 {
		 if(!kbhit())
		 {
		 posy++;


		 setfillstyle(SOLID_FILL,WHITE);
		 bar(obstaculo1,23+posy,obstaculo1+57,46+posy);
		 delay(0);

		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(obstaculo1,16+posy,obstaculo1+57,39+posy);
		 //delay(5);

		 setfillstyle(SOLID_FILL,WHITE);
		 bar(obstaculo2,33+posy,obstaculo2+49,53+posy);
		 delay(0);

		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(obstaculo2,26+posy,obstaculo2+49,46+posy);
		 delay(10);

		 if(posy+46 == 340 && poscarro == posrand1)
		 {
			gameover();
			sonidogameover();

		 }
		 if(posy+53 == 340 && poscarro == posrand2)
		 {
		 gameover();
		 sonidogameover();
		 }
		 if(posy+46 == 480)
		 {
			juego2();
		 }









		 }
		 else
		 {


		 tecla = getch();
		 switch(tecla)
		 {
		 case 'k': case 'K':
		 setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		 bar(233,0,421,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(317,0,322,480);
		 setfillstyle(SOLID_FILL,YELLOW);
		 bar(329,0,334,480);  //Linea de carretera
		 carro1 ();
		 break;


		case 'j': case 'J':
		setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		bar(233,0,421,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(317,0,322,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(329,0,334,480);  //Linea de carretera
		carro2 ();
		break;

		case 'h' : case 'H':
		setfillstyle(SOLID_FILL,LIGHTGRAY);//Carretera GRIS
		bar(233,0,421,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(317,0,322,480);
		setfillstyle(SOLID_FILL,YELLOW);
		bar(329,0,334,480);  //Linea de carretera
		carro3 ();
		break;








		 case 's': case 'S':
		 setfillstyle(SOLID_FILL,LIGHTGRAY);
		 bar(231,341,409,392);
		 setcolor(WHITE);
		 settextstyle(6,0,5);
		 outtextxy(275,335,"SALIR");
		 exit (1);
		 break;

		 }
		 }
		 }while(tecla != 'k','j','h');

			}



			}; //fin de clase
			 void main()
		{
		 inicio i;
		 i. ini();
		 cleardevice();
		 i.menu();
		 getch();

				}
