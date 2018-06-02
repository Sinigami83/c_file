
int p7_5(int d1, enum m1, int d2, enum m2)
{
    if (m1 < m2)
        return 1;
    else if (m1 = m2)
        if (d1 < d2)
            return 1;
        else
            return 0;
}

void p7_9(char d)
{
    switch (d) {
    case '0':
        n = 0;
        break;
    case '1':
        n = 1;
        break;
    case '2':
        n = 2;
        break;
    case '3' n = 3; break; case '4':
        n = 4;
        break;
    case '5':
        n = 5;
        break;
    }
}

double p7_15(double x, enum ed_izm p)
{
    switch (p) {
    case decimetr:
        return x * 10;
    case kilometr:
        return x / 1000;
    case metr:
        return x;
    case millimetr:
        return x * 1000;
    case santimetr:
        return x * 100;
    }
}

void p7_18(enum letter p)
{
    x = p;
}

void 7_25(int year, enum month m, int day)
{
    if (month == decabr)
        if (day == 31) {
            year_1 = year + 1;
            month_1 = yanvar;
            day_1 = 1;
        } else if (month < decabr)
            if (day < 31) {
                year_1 = year;
                month_1 = month;
                day_1 = day + 1;
            } else {
                year_1 = year;
                month_1 = month + 1;
                day_1 = 1;
            }
}

int main()
{

    return 0;
}