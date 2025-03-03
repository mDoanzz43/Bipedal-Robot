#include <Servo.h>
// Tạo đối tượng Servo
// Right
Servo Hip_Roll_right;   // Khớp hông xoay ngang 
Servo Hip_Pitch_right;  // Khớp hông xoay dọc
Servo Knee_right;       // Khớp gối
Servo Ankle_right;      // Khớp cổ chân
// Left
Servo Hip_Roll_left;
Servo Hip_Pitch_left;
Servo Knee_left;
Servo Ankle_left;

void setup() {
  // Pinout
  Hip_Roll_right.attach(A3); 
 // Hip_Pitch_right.attach(A2);
  Knee_right.attach(A1);
  Ankle_right.attach(A0);

  Hip_Roll_left.attach(A4); 
  //Hip_Pitch_left.attach(A5);
  Knee_left.attach(9);
  Ankle_left.attach(10);

  // Xoay servo về vị trí mặc định ban đầu 
  Hip_Roll_right.write(90);     
  //Hip_Pitch_right.write(90);    
  Knee_right.write(90);             
  Ankle_right.write(90);

  Hip_Roll_left.write(90);
  //Hip_Pitch_left.write(90);
  Knee_left.write(90);
  Ankle_left.write(90);
  delay(2000);


// Robot nhún nhảy
  for (int repeat = 0; repeat < 4; repeat++) {
    Ankle_left.write(70);
    Ankle_right.write(120);
    delay(500);
    Ankle_left.write(90);
    Ankle_right.write(90);
    delay(500);
    
  }
  // Robot thực hiện động tác cúi người 
  for (int repeat = 0; repeat < 2; repeat++) {
    for (int i = 90; i <= 145; i += 15) { 
      Knee_right.write(i); 
      Knee_left.write(180-i);        
      delay(500);               
    }
    for (int i = 145; i >= 90; i -= 15) { 
      Knee_right.write(i);
      Knee_left.write(180-i);
      delay(500);
    }
  }
  // Sau khi thực hiện cúi đầu đảm bảo robot quay về trạng thái ban đầu
  Knee_right.write(90);
  Knee_left.write(90);    
  delay(1000);
  // Robot thực hiện động tác di chuyển bên trái và bên phải  
  for (int repeat = 0; repeat < 3; repeat++) {
    Hip_Roll_right.write(65);
    delay(500);
    Hip_Roll_right.write(90);
    delay(500);
  }
  delay(2000);
  for (int repeat = 0; repeat < 3; repeat++) {
    Hip_Roll_left.write(115);
    delay(500);
    Hip_Roll_left.write(90);
    delay(500);
  }
  // Bước đi: Chưa tối ưu do đang test dở :
  Hip_Roll_right.write(110);
  delay(1000);
  Hip_Roll_left.write(110);
  delay(1000);
  Ankle_right.write(75);
  delay(1000);
  Ankle_right.write(60);
  delay(1000);
  Ankle_right.write(45);
  delay(1000);
  Knee_left.write(75);
  delay(500);
  Knee_left.write(60);
  delay(500);
  Hip_Roll_right.write(90);
  delay(1000);
  Ankle_right.write(60);
  delay(1000);
  Ankle_right.write(75);
  delay(1000);
  Hip_Roll_left.write(90);
  delay(1000);
  Ankle_right.write(90);
  delay(1000);
  Knee_left.write(90);
  delay(1000);

  Hip_Roll_left.write(70);
  delay(1000);
  Hip_Roll_right.write(70);
  delay(1000);
  Ankle_left.write(115);
  delay(1000);
  Ankle_left.write(130);
  delay(1000);
  Ankle_left.write(145);
  delay(1000);
  Knee_right.write(115);
  delay(500);
  Knee_right.write(130);
  delay(500);
  Hip_Roll_left.write(90);
  delay(1000);
  Ankle_left.write(130);
  delay(1000);
  Ankle_left.write(115);
  delay(1000);
  Hip_Roll_right.write(90);
  delay(1000);
  Ankle_left.write(90);
  delay(1000);
  Knee_right.write(90);
  delay(1000);
}

void loop() {
}

/*
Giới Hạn hoạt động các khớp
Knee_right -> 180: nhấc chân lên trước
Knee_left  -> 180: nhấc chân về sau 

Ankle_left  -> 180: xoay cổ chân trái sang phải 
Ankle_right -> 180: xoay cổ chân phải sang phải 

Hip_Roll_left  -> 180: Xoay khớp hông ra ngoài
Hip_Roll_right -> 180: Xoay khớp hông ra vào trong

Hip_Holl_Pitch = knee

*/