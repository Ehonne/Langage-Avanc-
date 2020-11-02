#ifndef DEF_FORME
#define DEF_FORME

#include <string.h>

class Forme{
  protected:
  float m_posX;
  float m_posY;
  float m_centre;

  public:
  virtual void deplacer(float x, float y);
  virtual void pivoter(double angle)=0;
  virtual void afficherText()=0;

  std::string  getColor();
  void setColor(string c);
  
  float getposX();
  float getposY();
  float getCentre();
  void setposX(float f);
  void setposY(float f);
  void setCentre(float f);

};

#endif;
