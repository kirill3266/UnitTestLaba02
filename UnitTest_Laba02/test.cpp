#include "pch.h"
#include "../FuckingUnit/Header.cpp"

TEST(String, String1) {
	char* stroka = "wqoihrgqoe hvqklehboiqebqe 1oe ihqovh";
	ASSERT_EQ(string(stroka,3),1);
}

TEST(String, String2) {
	char* stroka = "";
	ASSERT_EQ(string(stroka, 4), 0);
}

TEST(String, String3) {
	char* stroka = "awwv avqdwva iooiyoi akfhhok";
	ASSERT_EQ(string(stroka, 7), 2);
}