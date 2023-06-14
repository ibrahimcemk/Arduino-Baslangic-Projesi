#define aktif_led 8

  //burada define (tanımlama) komuduyla beraber aktif_led isimini 8.port a bağlanan led olduğunu belirtmiş oluruz.

void setup() {

  // Çalıştırmadan önce kodu buradan kurun
  // void setup(){ la kod istemini başlatır kod sonunda "}" işaretiyle kapatırız.
  
pinMode(aktif_led,OUTPUT);

   // pinMode(aktif_led,OUTPUT); işlemiyle beraber, pin'in aktif_led.port(çıkış/giriş) pinine bağlı noktalı virgülle ";" belirtiriz.

}

void loop() {

  // void loop() işlem tekrarıdır bunu yazdıktan sonra kod istemini belirli bir döngüye bağlarız.

digitalWrite(aktif_led,HIGH);
delay(500);
digitalWrite(aktif_led,LOW);
delay(500);

  // Ana kodu buraya yazarız ve çalıştırınca kendi içinde döngüye girer.
  // digitalWrite(aktif_led,HIGH); işleminde aktif_led.pin'e yüksek akış gönderip led'i yakmış oluruz 
  // delay(100); işleminde kaç ms'de yandığını belirtir.
  // digitalWrite(aktif_led,LOW); işleminde aktif_led "8.pin'e" düşük voltaj gönderip led'i söndürürüz.
  // tekrardan delay(100); yaptığımızda kaç ms'de söndüğünü görürüz ve kodu istemini sonlandıranana kadar işlem tekrar eder.

}
  // Arduino Uno,direnç,pin ve çalışma yaptığımız board'la düzgün bağlatında olduğunuzdan emin oldun.
  // Jumper kabloyu taktığınız pinin karşılığında başka bir jumper kabloyu "GND" pinine takınız. 