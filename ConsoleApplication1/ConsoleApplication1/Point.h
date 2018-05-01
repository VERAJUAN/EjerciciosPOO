#ifndef POINT
#define POINT

namespace cpp_math {
	class Point {
	private:
		float* mX;
		float* mY;
		float* mZ;
	public:
		Point();
		Point(float x, float y, float z);
		Point::Point(const Point& point);
		Point& Point::operator=(const Point& other);
		float Point::getX();
		float Point::getY();
		float Point::getZ();
		void Point::setX(float x);
		void Point::setY(float y);
		void Point::setZ(float z);
		void Point::setXY(float x, float y);
		void Point::setYZ(float y, float z);
		void Point::setXYZ(float x, float y, float z);
		Point Point::getAddiction(const Point& p);
		Point Point::getSubtraction(const Point& p);
		Point& Point::add(const Point&p);
		Point& Point::subtract(const Point& p);
		float Point::distance(const Point& p);
		~Point();
	};
}



#endif // !POINT