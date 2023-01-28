#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){

int resp;	
int qtvotos = 0;
int qt1=0, qt2=0, qt3=0, qt4=0, qt5=0, qt6=0;
float percent1, percent2, percent3, percent4, percent5, percent6;
	

printf("\n entre com o numero de seu candidato(1,2,3,4) para nulo(5) para voto em branco (6) para fim (0):");
resp = getche();


while ( resp!='0'){
	
qtvotos++;
	
if (resp == '1')
qt1++;

if (resp == '2')
qt2++;

if (resp == '3')
qt3++;

if (resp == '4')
qt4++;

if (resp == '5')
qt5++;

if (resp == '6')
qt6++;

percent1 = (qt1*100.)/qtvotos;

percent2 = (qt2*100.)/qtvotos;

percent3 = (qt3*100.)/qtvotos;

percent4 = (qt4*100.)/qtvotos;

percent5 = (qt5*100.)/qtvotos;

percent6 = (qt6*100.)/qtvotos;





printf("\n entre com o numero de seu candidato:");
resp = getche();

		
}

printf("\n total de votos = %d",qtvotos);
printf("\n total de votos candidato 1 = %d, porcentagem = %5.2f",qt1,percent1);
printf("\n total de votos candidato 2 = %d, porcentagem = %5.2f",qt2,percent2);
printf("\n total de votos candidato 3 = %d, porcentagem = %5.2f",qt3,percent3);
printf("\n total de votos candidato 4 = %d, porcentagem = %5.2f",qt4,percent4);
printf("\n total de votos nulos = %d, porcentagem = %5.2f",qt5,percent5);
printf("\n total de votos em branco = %d, porcentagem = %5.2f",qt6,percent6);





















}
