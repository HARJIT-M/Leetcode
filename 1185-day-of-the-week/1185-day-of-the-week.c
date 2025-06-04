char* dayOfTheWeek(int day, int month, int year) {
    char* days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    if (month < 3) {
        month += 12;
        year -= 1;
    }

    int q = day;
    int m = month;
    int K = year % 100;
    int J = year / 100;

    int h = (q + (13 * (m + 1)) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    return days[h];
}
