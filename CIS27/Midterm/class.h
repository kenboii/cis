#ifndef FLOAT_VALUES_H
#define FLOAT_VALUES_H

class Float_Values {

    public:
        Float_Values();
        ~Float_Values();
        void sumAllNumbers();
        void highestValue();
        void lowestValue();
        void meanValue();
        void modeValue();
        void medianValue();
        void bubbleSort();

    private:
    static const int ARRAY_SIZE = 10;
    float arr[ARRAY_SIZE];

};

#endif