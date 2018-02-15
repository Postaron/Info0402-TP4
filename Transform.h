#ifndef TRANSFORM_H_
#define TRANSFORM_H_

class Transform {
public:
	virtual void Rotate() = 0;
	virtual void Translate() = 0;
	virtual void Scale() = 0;
	virtual ~Transform() = 0;
};

#endif /* TRANSFORM_H_ */
