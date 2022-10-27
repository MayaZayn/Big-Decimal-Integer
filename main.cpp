#include "A1_P1_20210046_20210508_20210524.h"

int main()
{
    BigDecimalInt num1("123456789012345678901234567890");
    BigDecimalInt num2("+113456789011345678901134567890");
    BigDecimalInt num3("-200000000000000000000000000000");
    BigDecimalInt num4 = num2 + num1;
    BigDecimalInt num5 = num2 - num1;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    //Next statement will print 236913578023691357802369135780
    cout << "num2 + num1 = " << num4 << endl;
    //Next statement will print -10000000001000000000100000000
    cout << "num2 - num1 = " << num5 << endl;
    return 0;
}
