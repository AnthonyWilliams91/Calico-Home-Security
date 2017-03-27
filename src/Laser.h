/**
  Calico Home Security System, Laser.h
  Purpose: Manages the Laser and creates a Laser object

  @author Chris Nash, Jason Bruderer, David Tille, Tyler Jacobs
  @version To be Determined
*/
#ifndef Laser_h
#define Laser_h

#include "Arduino.h"
#include "Component.h"
#include "Properties.h"

class Laser : public Component {
public:
  Laser(int pin);
  Laser();
  void on();
  void off();
  void toggle();
private:
  boolean _isOn;
};

#endif
