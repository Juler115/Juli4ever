#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include<ctime>
#include "Juli.h"
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <stdio.h>
#define HAVE_STRUCT_TIMESPEC
#include <thread>
#include <chrono> 
#include <codecvt>

extern map<string,string> Datos;	
extern vector<string>DatMusic;
extern bool Usados[5];
extern Julieta Juli;
extern thread hilo;
extern thread hilo2;

void Act();
bool check();
void dat();
string Bienvenida();
void Hablar();
void Hablar_Op(int);
void Conocer();
void Cumple();
void FavComi();
void FavPasat();
void Aspiraciones();
void CACumple();
void CAFavComi();
void CAFavPasat();
void CAAspiraciones();
void Cambio();
void Cambi(int);
void Modi(string, string);
void pause_thread(int);
void stopMusic();
void musica();
void Music(string);
void Gustar();
void Musica();
void CAAfecto();
void JuMusica(int);
void Jugar();
void JugarOp(int);
void TyV();