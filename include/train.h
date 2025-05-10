#ifndef TRAIN_H
#define TRAIN_H

class Train {
 private:
  int operationsCount;
  struct Car {
    bool light;         // состояние лампочки
    Car* nextCar;
    Car* prevCar;
  };
  Car* firstCar;

 public:
  Train();
  void addCar(bool isLightOn);  // добавить вагон с начальным состоянием лампочки
  int getLength();      // вычислить длину поезда
  int getOpCount();     // вернуть число переходов (из вагона в вагон)
  ~Train();
};

#endif  // TRAIN_H
