//左旋转字符串
//汇编语言中有一种移位指令叫做循环左移（ROL），现在有个简单的任务，就是用字符串模拟这个指令的运算结果。对于一个给定的字符序列S，请你把其循环左移K位后的序列输出。例如，字符序列S=”abcXYZdef”,要求输出循环左移3位后的结果，即“XYZdefabc”。是不是很简单？OK，搞定它！
void Reverse(string &str,int begin,int end){
        while(begin<end){
            char tmp=str[begin];
            str[begin]=str[end];
            str[end]=tmp;
            begin++;
            end--;
        }
    }
    string LeftRotateString(string str, int n) {
        if(str.empty())
            return "";
        if(n>=0 && n<str.size()){
            int b1=0,b2=n,e1=n-1,e2=str.size()-1;
            Reverse(str,b1,e1);
            Reverse(str,b2,e2);
            Reverse(str,b1,e2);
        }
        return str;
    }