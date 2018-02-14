#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	int x, y;

public:
	Point();
	Point(int x, int y);
	virtual ~Point();
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
};

#endif /* POINT_H_ */
