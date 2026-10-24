
class Solution {
public:
    int dateno(string date) {
        int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        // Days in all previous years
        int total = 0;

        for (int y = 1971; y < year; y++) {
            if (y % 400 == 0 ||
                (y % 4 == 0 && y % 100 != 0)) {
                total += 366;
            } else {
                total += 365;
            }
        }

        // Days in previous months of this year
        for (int i = 0; i < month - 1; i++) {
            total += days[i];

            if (i == 1 &&
                (year % 400 == 0 ||
                 (year % 4 == 0 && year % 100 != 0))) {
                total++;
            }
        }

        // Days in the current month
        total += day;

        return total;
    }

    int daysBetweenDates(string date1, string date2) {
        int f = dateno(date1);
        int s = dateno(date2);

        return abs(f - s);
    }
};
