#ifndef DEF_POINTCOLOR
#define DEF_POINTCOLOR

#include <string.h>
#include "Point.h"

class PointColor : public Point {
	
  private:
  std::string m_color;

  public:
  PointColor();
  PointColor(float x, float y, std::string c);
  ~PointColor();
  PointColor(Point& p, std::string c);

  //Méthodes :
  std::string getColor();
  void setColor(std::string c);
  void afficher();
  

};





#endif
