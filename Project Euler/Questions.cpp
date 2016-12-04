#include "Questions.h"
#include "Question_1.h"
#include "Question_2.h"
#include "Question_3.h"
#include "Question_4.h"
#include "Question_5.h"
#include "Question_6.h"
#include "Question_7.h"
#include "Question_8.h"
#include "Question_9.h"
#include "Question_10.h"
#include "Question_11.h"
#include "Question_12.h"
#include "Question_13.h"
#include "Question_14.h"
#include "Question_15.h"
#include "Question_16.h"
#include "Question_17.h"
#include "Question_18.h"
#include "Question_67.h"

namespace Questions {
	unsigned long long Switch (int question) {
		switch (question) {
			case 1:
				return Question_1::Answer ();
			case 2:
				return Question_2::Answer ();
			case 3:
				return Question_3::Answer ();
			case 4:
				return Question_4::Answer ();
			case 5:
				return Question_5::Answer ();
			case 6:
				return Question_6::Answer ();
			case 7:
				return Question_7::Answer ();
			case 8:
				return Question_8::Answer ();
			case 9:
				return Question_9::Answer ();
			case 10:
				return Question_10::Answer ();
			case 11:
				return Question_11::Answer ();
			case 12:
				return Question_12::Answer ();
			case 13:
				return Question_13::Answer ();
			case 14:
				return Question_14::Answer ();
			case 15:
				return Question_15::Answer ();
			case 16:
				return Question_16::Answer ();
			case 17:
				return Question_17::Answer ();
			case 18:
				return Question_18::Answer ();
			case 67:
				return Question_67::Answer ();
			default:
				return 0;
		}
	}
}