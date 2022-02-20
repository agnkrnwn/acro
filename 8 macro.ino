
#include <Keyboard.h>    //
//---------------------------------------------------------
//                           Setup
//---------------------------------------------------------
char ctrl = KEY_LEFT_CTRL;
char enter = KEY_RETURN;
char alt = KEY_LEFT_ALT;
char shift = KEY_RIGHT_SHIFT;
char win = KEY_LEFT_GUI;

void setup() {
pinMode(2,INPUT_PULLUP);
pinMode(3,INPUT_PULLUP); 
pinMode(4,INPUT_PULLUP);  
pinMode(5,INPUT_PULLUP); 
pinMode(6,INPUT_PULLUP);  
pinMode(7,INPUT_PULLUP);
pinMode(8,INPUT_PULLUP);
pinMode(9,INPUT_PULLUP);

Serial.begin(9600);       // begin serial comms for debugging

}

//---------------------------------------------------------
//                           Loop
//---------------------------------------------------------

void loop() {
  
  
 Keyboard.begin();    
 
 //OPEN CHROME WIN R 
 
 if (digitalRead(2) == 0)  
  {
    Keyboard.press(win); 
    delay(200);
    Keyboard.press('r');
    delay(200);
    Keyboard.releaseAll();
    delay(200);
    Keyboard.print("chrome");
    delay(200);
    Keyboard.releaseAll();
    Keyboard.write(enter);
    Serial.println("opening chrome");
  }

  // NEW TAB
  else if (digitalRead(3) == 0){  
    
    Keyboard.press(ctrl);
    Keyboard.press('t');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    Serial.println("new tab open");
  }

  // CLOSE TAB
  else if (digitalRead(4) == 0){ 
    
    Keyboard.press(ctrl);
    Keyboard.press(KEY_F4);
   /// Keyboard.press('t');
    delay(100);
    Keyboard.releaseAll();
    delay(200);
    Serial.println("close curent tab");
  }

  // adress bar
  else if (digitalRead(5) == 0){ 
    
    ///Keyboard.print("https://web.whatsapp.com/");
    Keyboard.press(KEY_F6);
    delay(200);
    Keyboard.releaseAll();
    //Keyboard.write(enter);
    Serial.println("jump adress bar");
    
  }

  //LAZADAA
  else if (digitalRead(6) == 0){  
    Keyboard.print("https://sellercenter.lazada.co.id/order/query?spm=a2o7h.10604843.navi_left_sidebar.droot_normal_ordersreviews_orders.183e1e137unF6z");
    delay(200);
    Keyboard.releaseAll();
    Keyboard.write(enter);
    Serial.println("opening lazada order");
  }

  //SHOPEE
  else if (digitalRead(7) == 0){ 
    Keyboard.print("https://seller.shopee.co.id/portal/sale/mass/ship?shipping_method=24&page_size=50&type=toship");
    delay(200);
    Keyboard.releaseAll();
    Keyboard.write(enter);
    Serial.println("opening shopee order");
  }

  // LAZADA DATA CENTER
  else if (digitalRead(8) == 0){ 
    Keyboard.print("https://sellercenter.lazada.co.id/ba/livemonitor?spm=ba_lzd_pc.id-dashboard.0.0.59834564o3Dx6w");
    delay(200);
    Keyboard.releaseAll();
    Keyboard.write(enter);
    Serial.println("opening data center lazada");
  }

  // SHOPEE DATA CENTER
  else if (digitalRead(9) == 0){ 
    Keyboard.print("https://seller.shopee.co.id/datacenter/liveboard?ADTAG=mydata&type=confirm");
    delay(200);
    Keyboard.releaseAll();
    Keyboard.write(enter);
    Serial.println("opening data center shopee");
  }
Keyboard.end();                 //stops keybord

}