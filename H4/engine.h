#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
   int horsepower;
   double dispalcement;
public:
    Engine();
    Engine(int hp=0, double disp =0.0);
    int getHorsepower()const;
    void setHorsepower(int hp);
    double getDisplacement()const;
    void setDisplacement(double disp);


};

#endif // ENGINE_H
