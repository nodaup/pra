/*


(a) std::cin >> int input_value;                    (b) int i = { 3.14 };
(c) double salary = wage = 9999.99;                 (d) int i = 3.14;

(a) 变量需先定义再使用，应改为：
	int input_value = 0; //初始化变量防止未知错误
	std::cin >> input_value;
(b) int为整型，3.14为浮点型，类型不匹配，需要类型转换(此处未自动进行类型转换)，应改为：
	double i ={3.14};
(c) 定义方式错误，应该为 double salary wage = 9999.99;
(d) int为整型，3.14为浮点型，类型不匹配，需要类型转换(此处自动进行类型转换)，i字面值保存为3，若要保留小数点后应改为：
	double i ={3.14};

*/