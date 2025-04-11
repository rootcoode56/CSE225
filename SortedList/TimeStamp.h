#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class timeStamp {
private:
    int seconds;
    int minutes;
    int hours;

public:
    timeStamp();
    timeStamp(int ss, int mm, int hh);

    // Function to print time values
    void printTime() const;

    // Overloading > operator for comparison
    bool operator>(const timeStamp& other) const;

    // Overloading < operator for comparison
    bool operator<(const timeStamp& other) const;

    // Overloading == operator for comparison
    bool operator==(const timeStamp& other) const;
};

#endif // TIMESTAMP_H_INCLUDED
