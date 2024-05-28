# cpp-review-6

Operators include +, -, *, /, (), ^, follow order of operations (PEMDAS), use parentheses to alter
% is modulo, finds remainder
Exponent operator in cmath library, std::power(num1, num2) finds num1 to num2 power, parameters are type double
To do exponentiation with integers can create own function, can add overflow check for safety
Increment/decrement operators add/subtract 1 to variable, ++x increments x then returns x, x++ copies x then increments x then returns copy of old value, same for --x & x--, 1st version less likely to cause surprises
Comma operator lets you evaluate multiple expressions when single expression is allowed, evaluates left operand then right operand then returns result of right operand, generally better to use separate statements
Relational operators include <, >, <=, >=, ==, !=, difficult to use when comparing imprecise floating point values, for equality can design epsilon function to check whether error when comparing values is small enough
Logical operators include !, &&, ||, ! has high precedence (use before parentheses if expression is compounded), && has higher precedence than ||
De Morgan's Laws say !(x && y) = !x || !y, !(x || y) = !x && !y