 #pragma once
 #include "helper.h"


void RobotLine::radionica(){
  pratiZid();
  if(lineAny()){
    stop();
    end();
  }
}
