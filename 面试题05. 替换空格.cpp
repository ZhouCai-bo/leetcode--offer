class Solution {
public:
	string replaceSpace(string s) {
		int index1 = s.size() - 1;
		for (int i = 0; i <= index1; i++)
			if (s[i] == ' ')
				s += "  ";
		int index2 = s.size() - 1;
		while (index1 >= 0)
		{
			if (s[index1] == ' ')
			{
				s[index2--] = '0';
				s[index2--] = '2';
				s[index2--] = '%';
			}
			else
				s[index2--] = s[index1];
			index1--;
		}
		return s;
	}
};
