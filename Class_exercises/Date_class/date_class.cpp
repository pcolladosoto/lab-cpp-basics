bool leap_year(int year) {
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    return true;
  else
    return false;
  // return !(year % 4) && (year % 100) || !(year % 400);
}

bool valid_date(int day, int month, int year) {
  if (month > 12 || month < 1 || year < 1500)
    return false;
  else {
    if (day > 31 || day < 1)
      return false;
    else if (month == 2) //February
      if (day > 28 && !leap_year(year))
        return false;
      else if (day > 29)
        return false;
    else if (month == 4 || month == 6 || month == 9 || month == 11) // 30-day months
      if (day > 30)
        return false;
  }
  return true;
}

void assign_date(int d, int m, int y) {
  if (!valid_date(d, m, y)) {
    //ERROR -> Assign a default!
    day = 28; month = 4; year = 9;  //Ortega's B-day!
  }
  else {
    day = d; month = m; year = y;
  }
}

void get_date(int& d, int& m, int& y) {
  d = day; m = month; y = year;
}
