#include <bits/stdc++.h>
#include "colomn.h"
using namespace std;

class matrix {
	public:
		vector<Colomn> colomns;	// 许多列，每一列有一个列名，使用方法1：传字符串给构造函数；2：调用modify_name()
		vector<string> rows;	//vector<string> 型的变量
		/**
		 * @brief 重载运算符，直接返回行列对应值
		 * @param 行名
		 * @param 列名
		 * @return 该行该列对应的值
		 */
		string operator() (string r_name, string c_name) {
			int i = 0;
			for (; i < rows.size(); i++) {
				if (rows[i] == r_name)
					break;
			}
			for (int j = 0; j < colomns.size(); j++) {
				if (colomns[j].name() == c_name) {
					return colomns[j].find_value(i);
				}
			}
		}
		matrix() {
			rows.clear();
			colomns.clear();
			// cout << "表格已创建" << endl;
		}
		~matrix() {
			rows.clear();
			colomns.clear();
			// cout << "表格已销毁" << endl;
		}
};