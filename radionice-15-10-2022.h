#pragma once
#include "helper.h"
void RobotLine::radionica() {
  if (setup()) {
    armOpen();
  }
  // ZADATAK: uvedite varijablu brojača.
  // HINT: static int nazivVarijable = vrijednost;
  static int broj = 0;

  // VARIJABLA ZA PRETVORBU BROJA U TEKST
  char simbol[10 + sizeof(char)];


  if (leftFront() < 200 and broj == 2) {

    delayMs(500);

  }

  if (leftFront() < 120 and broj == 3) {
    go(50, 50);
    delayMs(500);
    go(-90, 90);
    delayMs(500);
    go(20, 20);
    delayMs(500);
    stop();
    end();
    delayMs(10000);
  }
  // ZADATAK: skretanje s povećanjem brojača
  if (front() < 120) {
    go(-90, 90);
    delayMs(500);
    broj++;
  }
  if (rightFront() > 120)
    go(80, 20);
  else
    go(20, 80);

  // PRETVORBA VARIJABLE BROJAČA U TEKST
  sprintf(simbol, "%d", broj);
  // ZADATAK
  display(simbol);

}
