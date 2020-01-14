#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdlib.h>
#include "DspFaust.h"

using namespace std;
int main()
{
	 float enc[64][3];
    const char* encAdd[64];
	 enc[0][0]=258;
	 enc[0][1]=222;
	 enc[0][2]=-76;
	 enc[1][0]=356;
	 enc[1][1]=222;
	 enc[1][2]=-76;
	 enc[2][0]=307;
	 enc[2][1]=222;
	 enc[2][2]=-76;
	 enc[3][0]=182;
	 enc[3][1]=222;
	 enc[3][2]=-76;
	 enc[4][0]=420;
	 enc[4][1]=222;
	 enc[4][2]=-76;	 
	 enc[5][0]=82;
	 enc[5][1]=222;
	 enc[5][2]=-76;
	 enc[6][0]=532;
	 enc[6][1]=222;
	 enc[6][2]=-76;
	 enc[7][0]=208;
	 enc[7][1]=222;
	 enc[7][2]=-76;
	 enc[8][0]=394;
	 enc[8][1]=222;
	 enc[8][2]=-76;
	 enc[9][0]=140;
	 enc[9][1]=222;
	 enc[9][2]=-76;
	 enc[10][0]=480;
	 enc[10][1]=222;
	 enc[10][2]=-76;
	 enc[11][0]=12;
	 enc[11][1]=222;
	 enc[11][2]=-76;
	 enc[12][0]=596;
	 enc[12][1]=222;
	 enc[12][2]=-76;
	 enc[13][0]=208;
	 enc[13][1]=298;
	 enc[13][2]=-76;
	 enc[14][0]=394;
	 enc[14][1]=298;
	 enc[14][2]=-76;
	 enc[15][0]=256;
	 enc[15][1]=298;
	 enc[15][2]=-76;
	 enc[16][0]=358;
	 enc[16][1]=298;
	 enc[16][2]=-76;
	 enc[17][0]=307;
	 enc[17][1]=298;
	 enc[17][2]=-76;
	 enc[18][0]=208;
	 enc[18][1]=158;
	 enc[18][2]=-76;
	 enc[19][0]=394;
	 enc[19][1]=158;
	 enc[19][2]=-76;
	 enc[20][0]=258;
	 enc[20][1]=158;
	 enc[20][2]=-76;
	 enc[21][0]=352;
	 enc[21][1]=158;
	 enc[21][2]=-76;
	 enc[22][0]=308;
	 enc[22][1]=158;
	 enc[22][2]=-76;
	 enc[23][0]=16;
	 enc[23][1]=432;
	 enc[23][2]=-76;
	 enc[24][0]=590;
	 enc[24][1]=432;
	 enc[24][2]=-76;
	 enc[25][0]=82;
	 enc[25][1]=384;
	 enc[25][2]=-76;
	 enc[26][0]=532;
	 enc[26][1]=398;
	 enc[26][2]=-76;
	 enc[27][0]=136;
	 enc[27][1]=346;
	 enc[27][2]=-76;
	 enc[28][0]=478;
	 enc[28][1]=358;
	 enc[28][2]=-76;
	 enc[29][0]=182;
	 enc[29][1]=310;
	 enc[29][2]=-76;
	 enc[30][0]=420;
	 enc[30][1]=316;
	 enc[30][2]=-76;
	 enc[31][0]=16;
	 enc[31][1]=22;
	 enc[31][2]=-76;
	 enc[32][0]=592;
	 enc[32][1]=18;
	 enc[32][2]=-76;
	 enc[33][0]=82;
	 enc[33][1]=64;
	 enc[33][2]=-76;
	 enc[34][0]=532;
	 enc[34][1]=55;
	 enc[34][2]=-76;
	 enc[35][0]=138;
	 enc[35][1]=106;
	 enc[35][2]=-76;
	 enc[36][0]=478;
	 enc[36][1]=96;
	 enc[36][2]=-76;
	 enc[37][0]=182;
	 enc[37][1]=138;
	 enc[37][2]=-76;
	 enc[38][0]=420;
	 enc[38][1]=136;
	 enc[38][2]=-76;
	 enc[39][0]=178;
	 enc[39][1]=446;
	 enc[39][2]=-76;
	 enc[40][0]=450;
	 enc[40][1]=446;
	 enc[40][2]=-76;
	 enc[41][0]=308;
	 enc[41][1]=446;
	 enc[41][2]=-76;
	 enc[42][0]=184;
	 enc[42][1]=266;
	 enc[42][2]=-76;
	 enc[43][0]=440;
	 enc[43][1]=266;
	 enc[43][2]=-76;
	 enc[44][0]=308;
	 enc[44][1]=266;
	 enc[44][2]=-76;
	 enc[45][0]=180;
	 enc[45][1]=10;
	 enc[45][2]=-76;
	 enc[46][0]=450;
	 enc[46][1]=10;
	 enc[46][2]=-76;
	 enc[47][0]=306;
	 enc[47][1]=10;
	 enc[47][2]=-76;
	 enc[48][0]=236;
	 enc[48][1]=364;
	 enc[48][2]=-76;
	 enc[49][0]=378;
	 enc[49][1]=364;
	 enc[49][2]=-76;
	 enc[50][0]=308;
	 enc[50][1]=364;
	 enc[50][2]=-76;
	 enc[51][0]=250;
	 enc[51][1]=342;
	 enc[51][2]=-76;
	 enc[52][0]=308;
	 enc[52][1]=342;
	 enc[52][2]=-76;
	 enc[53][0]=368;
	 enc[53][1]=342;
	 enc[53][2]=-76;
	 enc[54][0]=256;
	 enc[54][1]=326;
	 enc[54][2]=-76;
	 enc[55][0]=358;
	 enc[55][1]=326;
	 enc[55][2]=-76;
	 enc[56][0]=308;
	 enc[56][1]=326;
	 enc[56][2]=-76;
	 enc[57][0]=276;
	 enc[57][1]=84;
	 enc[57][2]=-76;
	 enc[58][0]=330;
	 enc[58][1]=84;
	 enc[58][2]=-76;
	 enc[59][0]=260;
	 enc[59][1]=112;
	 enc[59][2]=-76;
	 enc[60][0]=340;
	 enc[60][1]=112;
	 enc[60][2]=-76;
	 enc[61][0]=302;
	 enc[61][1]=106;
	 enc[61][2]=-76;
	 enc[62][0]=284;
	 enc[62][1]=126;
	 enc[62][2]=-76;
	 enc[63][0]=324;
	 enc[63][1]=126;
	 enc[63][2]=-76;


encAdd[0]="/vumeter/hmeter_0";
encAdd[1]="/vumeter/hmeter_1";
encAdd[2]="/vumeter/hmeter_2";
encAdd[3]="/vumeter/hmeter_3";
encAdd[4]="/vumeter/hmeter_4";
encAdd[5]="/vumeter/hmeter_5";
encAdd[6]="/vumeter/hmeter_6";
encAdd[7]="/vumeter/hmeter_7";
encAdd[8]="/vumeter/hmeter_8";
encAdd[9]="/vumeter/hmeter_9";
encAdd[10]="/vumeter/hmeter10";
encAdd[11]="/vumeter/hmeter11";
encAdd[12]="/vumeter/hmeter12";
encAdd[13]="/vumeter/hmeter13";
encAdd[14]="/vumeter/hmeter14";
encAdd[15]="/vumeter/hmeter15";
encAdd[16]="/vumeter/hmeter16";
encAdd[17]="/vumeter/hmeter17";
encAdd[18]="/vumeter/hmeter18";
encAdd[19]="/vumeter/hmeter19";
encAdd[20]="/vumeter/hmeter20";
encAdd[21]="/vumeter/hmeter21";
encAdd[22]="/vumeter/hmeter22";
encAdd[23]="/vumeter/hmeter23";
encAdd[24]="/vumeter/hmeter24";
encAdd[25]="/vumeter/hmeter25";
encAdd[26]="/vumeter/hmeter26";
encAdd[27]="/vumeter/hmeter27";
encAdd[28]="/vumeter/hmeter28";
encAdd[29]="/vumeter/hmeter29";
encAdd[30]="/vumeter/hmeter30";
encAdd[31]="/vumeter/hmeter31";
encAdd[32]="/vumeter/hmeter32";
encAdd[33]="/vumeter/hmeter33";
encAdd[34]="/vumeter/hmeter34";
encAdd[35]="/vumeter/hmeter35";
encAdd[36]="/vumeter/hmeter36";
encAdd[37]="/vumeter/hmeter37";
encAdd[38]="/vumeter/hmeter38";
encAdd[39]="/vumeter/hmeter39";
encAdd[40]="/vumeter/hmeter40";
encAdd[41]="/vumeter/hmeter41";
encAdd[42]="/vumeter/hmeter42";
encAdd[43]="/vumeter/hmeter43";
encAdd[44]="/vumeter/hmeter44";
encAdd[45]="/vumeter/hmeter45";
encAdd[46]="/vumeter/hmeter46";
encAdd[47]="/vumeter/hmeter47";
encAdd[48]="/vumeter/hmeter48";
encAdd[49]="/vumeter/hmeter49";
encAdd[50]="/vumeter/hmeter50";
encAdd[51]="/vumeter/hmeter51";
encAdd[52]="/vumeter/hmeter52";
encAdd[53]="/vumeter/hmeter53";
encAdd[54]="/vumeter/hmeter54";
encAdd[55]="/vumeter/hmeter55";
encAdd[56]="/vumeter/hmeter56";
encAdd[57]="/vumeter/hmeter57";
encAdd[58]="/vumeter/hmeter58";
encAdd[59]="/vumeter/hmeter59";
encAdd[60]="/vumeter/hmeter60";
encAdd[61]="/vumeter/hmeter61";
encAdd[62]="/vumeter/hmeter62";
encAdd[63]="/vumeter/hmeter63";



    // Create the main window
    sf::RenderWindow window(sf::VideoMode(601, 451), "spaceMeter64");
    
    // Load a sprite to display
    sf::Texture image;
    if (!image.loadFromFile("./images/volume.png"))
        return EXIT_FAILURE;
    sf::Sprite bkgimage(image);
    sf::Texture texture1;
    if (!texture1.loadFromFile("./images/g4971.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite1(texture1);
    sf::Texture texture2;
    if (!texture2.loadFromFile("./images/path4488.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite2(texture2);
    sf::Texture texture3;
    if (!texture3.loadFromFile("./images/path4487.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite3(texture3);
    sf::Texture texture4;
    if (!texture4.loadFromFile("./images/path4486.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite4(texture4);
    sf::Texture texture5;
    if (!texture5.loadFromFile("./images/path4489.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite5(texture5);
    sf::Texture texture6;
    if (!texture6.loadFromFile("./images/path4490.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite6(texture6);
    sf::Texture texture7;
    if (!texture7.loadFromFile("./images/path4485.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite7(texture7);
    
    // Load a music to play
    DspFaust *dspFaust = new DspFaust(false);
    dspFaust->start();
    cout << "Faust is Running =" << dspFaust->isRunning()<< endl;
    // Start the game loop
    while (window.isOpen()){
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed){
            	 dspFaust->stop();
	             cout << "Faust is Running =" << dspFaust->isRunning()<< endl;
                window.close();
            }  
        }
        // Clear screen
        window.clear();
        window.draw(bkgimage);
        
       
      for(int i=0;i<64;i++){
       enc[i][2]=dspFaust->getParamValue(encAdd[i]);
       cout << encAdd[0]<<"=" << dspFaust->getParamValue(encAdd[0])<< endl;
      if (enc[i][2]<-50){
  			  sprite1.setPosition(sf::Vector2f(enc[i][0]-2, enc[i][1]-2));
  			  window.draw(sprite1);
  		}
  		if (enc[i][2]>-50 && enc[i][2]<-40){
  			  sprite2.setPosition(sf::Vector2f(enc[i][0]-15, enc[i][1]-15));
  			  window.draw(sprite2);
  		}
  		if (enc[i][2]>-40 && enc[i][2]<-35){
  			  sprite3.setPosition(sf::Vector2f(enc[i][0]-20, enc[i][1]-20));
  			  window.draw(sprite3);
  		}
  		if (enc[i][2]>-35 && enc[i][2]<-25){
  			  sprite4.setPosition(sf::Vector2f(enc[i][0]-25, enc[i][1]-25));
  			  window.draw(sprite4);
  		}
  		if (enc[i][2]>-25 && enc[i][2]<-20){
  			  sprite5.setPosition(sf::Vector2f(enc[i][0]-35, enc[i][1]-35));
  			  window.draw(sprite5);
  		}
  		if (enc[i][2]>-20 && enc[i][2]<-10){
  			  sprite6.setPosition(sf::Vector2f(enc[i][0]-45, enc[i][1]-45));
           window.draw(sprite6);
  		}
  		if (enc[i][2]>-10){
  			 sprite7.setPosition(sf::Vector2f(enc[i][0]-64, enc[i][1]-64));
  			 window.draw(sprite7);
  		}
      } 
      window.display();
 
    }
    return EXIT_SUCCESS;
}
