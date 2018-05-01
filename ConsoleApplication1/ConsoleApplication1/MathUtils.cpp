#include "stdafx.h"
#include <iostream>
#include <cmath>

namespace cpp_math_utils {	
	bool isEqual(float f1, float f2, float epsilon = 0.000000001) {
		return fabs(f1 - f2) < epsilon;
	}
}
