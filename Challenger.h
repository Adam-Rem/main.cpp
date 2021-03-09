#ifndef LESSON1_POINT_H
#define LESSON1_POINT_H

class Challenger {
public:
    void setY(int y);
    Challenger();

    int getCounter();
    void challengeValue(Challenger challenger);
    void challengeReferenced(Challenger &challenger);

private:
    int counter{1};
};

#endif //LESSON1_POINT_H
