#pragma once



class DateTime {
private:
	int _day;
	int _month;
	int _year;
public:
	DateTime() {}
	DateTime(int day, int month, int year) {
		setDay(day);
		setMonth(month);
		setYear(year);
	}

	void setDay(int day) {
		if (day > 0 && day < 32)_day = day;
		else throw exception();
	}

	void setMonth(int month) {
		if (month > 0 && month < 13)_month = month;
		else throw exception();
	}


	void setYear(int year) {
		if (year > 1800 && year < 2100)_year = year;
		else throw exception();
	}
	int getDay() { return _day; }
	int getMonth() { return _month; }
	int getYear() { return _year; }

	void operator=(DateTime other) {
		this->setDay(other._day);
		this->setMonth(other._month);
		this->setYear(other._year);
	}



};

class Penaly {
	static int _count;
	int _id;
	map<string, int> _list;
	DateTime _dateTime;
public:
	Penaly() = delete;
	Penaly(int id, int price, string text, DateTime dateTime) {
		_id = id;
		setPenaly(text, price);
		_dateTime = dateTime;
	}
	void setPenaly(string text,int price) {
		_count++;
		string newText = to_string(_count);
		newText += " ";
		newText += text;
		_list[newText] = price;
	}

};
int Penaly::_count =0;