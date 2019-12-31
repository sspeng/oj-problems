#include <iostream>
#include <string>

using namespace std;

/*
 * ������˼·��ͦ����ģ��Ǵ��ڵ���Ѱ������һ���Գ��Ӵ���
 * ��Ҫע����ǣ���������λ�õĲ�ͬ�����Է�Ϊ2n+1�������
 * ��n���ַ���n+1���ַ�֮��Ŀ�϶���������Ե�����������
 * �Բ��迼�ǣ�����һ����2n-3��������������㷨��ʱ��
 * ���Ӷ���O(n^2)��ƽ������½�ΪO(n)���ѡ�
 */

int main(){
	string input;
	getline(cin, input);
	int maxlen = 1, len = input.length();
	int curr, left, right, currlen;
	for(int ix = 2; ix < 2*len - 1; ++ix){
		if(ix & 1){//if ix is odd
			currlen = 1;
			curr = ix >> 1;
			left = curr - 1;
			right = curr + 1;
		}
		else{//if ix is even
			currlen = 0;
			right = ix >> 1;
			left = right - 1;
		}
		while (left >= 0 && right < len && input[left] == input[right]) {
			currlen += 2;
			left--;
			right++;
		}
		if (currlen > maxlen) maxlen = currlen;
	}
	cout << maxlen << endl;
	system("pause");
	return 0;
}
