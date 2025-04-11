#include <iostream>
#include "sortedtype.h"
#include "timeStamp.h"

int main() {
    SortedType<timeStamp> timeList;

    // Inserting time values
    timeList.InsertItem(timeStamp(23, 34, 15));
    timeList.InsertItem(timeStamp(2, 13, 13));
    timeList.InsertItem(timeStamp(12, 45, 43));
    timeList.InsertItem(timeStamp(17, 36, 25));
    timeList.InsertItem(timeStamp(20, 2, 52));

    // Deleting the timestamp 25 36 17
    timeStamp toDelete(17, 36, 25);
    timeList.DeleteItem(toDelete);

    // Printing the list
    timeStamp currentTime;
    int length = timeList.LengthIs();
    timeList.ResetList();
    for (int i = 0; i < length; ++i) {
        timeList.GetNextItem(currentTime);
        currentTime.printTime();
    }

    return 0;
}
