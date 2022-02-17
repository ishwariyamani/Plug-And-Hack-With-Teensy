#include <phukdlib.h>
void setup() {
  delay(3000); //sleep 3 sec
  CommandAtRunBarMSWIN("powershell.exe"); //send keys win+R then type powershell.exe
  delay(2000);//sleep 2 sec
  Keyboard.print("start chrome https://health-cambridge-href-selected.trycloudflare.com");//typing in powershell
  delay(2000);
  Keyboard.set_key1(KEY_ENTER); //send keys Enter
  Keyboard.send_now();    
  Keyboard.set_key1(0);//send keys 0 to stop looping
  Keyboard.send_now();  
}
void loop(){}
