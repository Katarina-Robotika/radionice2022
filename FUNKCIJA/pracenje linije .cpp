void RobotLine::pratiLiniju(){
 if (line(8))
     go(-90, 90);
   else if (line(0))
    go(90, -90);
   else if (line(7))
    go(0, 100);
   else if (line(1))
    go(100, 0);
   else if (line(6))
    go(30, 80);
   else if (line(2))
    go(80, 30);
   else if (line(5))
    go(40, 70);
   else if (line(3))
    go(70, 40);
   else if (line(4))
    go(70, 70);
   else
    go(70, 70);
   
   
}

void RobotLine::pratiLinijuBrzo(){
  if (line(0) && line(8)) {
    go(50, 50);
    delayMs(200);}
    
 if (line(8))
     go(-100, 100);
   else if (line(0))
    go(100, -100);
   else if (line(7))
    go(0, 100);
   else if (line(1))
    go(100, 0);
   else if (line(6))
    go(50, 100);
   else if (line(2))
    go(100, 50);
   else if (line(5))
    go(100, 70);
   else if (line(3))
    go(100, 70);
   else if (line(4))
    go(100, 100);
   else
    go(100, 100);
   
   
}
