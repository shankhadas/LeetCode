#include <bits/stdc++.h>
using namespace std;

class GameSettings {
    static GameSettings* instance;  // static member
    int brightness;
    int height;
    int width;
    
    GameSettings():height(720), width(1080), brightness(75) {}  // private constructor
    // all constructors should be private or public(iff you want to allow inheritance)
public:
    static GameSettings* getInstance() {    // static function
        if(instance == NULL)
            instance = new GameSettings();
        return instance;
    }

    int getBrightness() { return brightness; }
    int getHeight() { return height; }
    int getWidth() { return width; }

    void setBrightness(int b) { brightness = b; }
    void setHeight(int h) { height = h; }
    void setWidth(int w) { width = w; }

    void displaySettings() {
        cout << "Brightness: " << brightness << endl;
        cout << "Height: " << height << endl;
        cout << "Width: " << width << endl;
    }
};

GameSettings* GameSettings :: instance = NULL;      // If static memeber is mentioned then need to define outside the class

void someFunction() {
    GameSettings* settings = GameSettings :: getInstance();     // here also we're getting same instance
    settings->displaySettings();
}

int main() {
    GameSettings* settings = GameSettings :: getInstance();
    settings->displaySettings();
    cout << endl;

    settings->setBrightness(100);
    someFunction();     // same instace are getting here also

    return 0;
}