#include <phukdlib_leonardo.h>
#define kbd_es_es

void setup() {
    Keyboard.begin();
}

void loop() {
    delay(5000);
    CommandAtRunBarMSWIN("iexplore -k https://fakeupdate.net/win10ue/");
    delay(5000);
    Keyboard.press(KEY_F11);
    delay(100);
    Keyboard.releaseAll();
    while (1)
        ;
}
