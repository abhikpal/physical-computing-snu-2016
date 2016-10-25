const int pins[] = {9, 10, 11};
int source[] = {0, 0, 0};


void setup() {
    for(int i = 0; i < 3; i++) {
      pinMode(pins[i], OUTPUT);
    }

    set_color(255, 255, 255);
    delay(2000);
} 

void loop() {
    set_color(random(0, 255), random(0, 255), random(0, 255));
    delay(500);
}

void set_color(int r, int g, int b) {
    int target[] = {r, g, b};


    float step_size[3];
    for(int p = 0; p < 3; p++) {
        step_size[p] = abs(float(source[p]) - float(target[p]))/100.0;
    }
  
    for(int i = 0; i < 100; i++) {
        for(int p = 0; p < 3; p++) {
            if(source[p] < target[p]) {
                analogWrite(pins[p], int(source[p] + i*step_size[p]));
            }
            if(source[p] > target[p]) {
                analogWrite(pins[p], int(source[p] - i*step_size[p]));
            }
        delay(10);
        }
    }

    for(int p = 0; p < 3; p++) {
        analogWrite(pins[p], target[p]);
        source[p] = target[p];
    }
    delay(10);
} 
