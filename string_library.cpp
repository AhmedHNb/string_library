#include <iostream>
#include <string>
#include <vector>

using namespace std;


class string_library 
{
    private:
        string _value;
    
    public:
        string_library()
        {
            _value = "";
        }
        
        
        string_library(const string& value)
        {
            _value = value;
        }

        string get_value() const
        {
            return _value;
        }

        void set_value(string value)
        {
            _value = value;
        }

        static void upper_case(string& str)
        {
            for (char& c : str)
            {
                c = toupper(c);
            }
        }

        static void lower_case(string& str)
        {
            for (char& c : str)
            {
                c = tolower(c);
            }
        }

        static void append(string str , string appended_str)
        {
            str = str + appended_str;
        }

        static void prepend(string str , string pre_appended_str)
        {
            pre_appended_str = pre_appended_str + str ;
        }

        static string split_string(char delimiter , string str)
        {
            vector<string> acc_vector;
            string temp = "";
            string result = "";

            for (char c : str)
            {
                if (c != delimiter)
                {
                    temp += c;
                }
                else
                {
                    acc_vector.push_back(temp);
                    temp = "";
                }
            }

            for(string s : acc_vector)
            {
                result = result + s + " " ;
            }

            return result;
        }

        static int count_words(string str)
        {
            int count = 0;
            char delimiter = ' ';
            if(str.empty())
            {
                return 0 ;
            }
            
            else
            {
                for (char c : str)
                {
                    if (c == delimiter)
                    {
                        count++;
                    }
                }
            }
            return count + 1;
        }

        static int size(string str)
        {
            int size = 0;
            
            for (char c : str)
            {
                size ++ ;
            }
            return size;
        }

        static string substing(string str , short strat_pos , short end_pos)
        {
            string result = "";
            for (int i = strat_pos ; i < end_pos ; i++)
            {
                result += str[i];
            }
            return result;
        }

        void upper_case()
        {
            upper_case(_value);
        }

        void lower_case()
        {
            lower_case(_value);
        }

        void append(string str)
        {
            append(_value , str);
        }
        
        void prepend(string str)
        {
            prepend(_value , str);
        }

        string split_string(char delimiter)
        {
            return split_string(delimiter , _value);
        }

        int count_words()
        {
            return count_words(_value);
        }


        int size()
        {
            return size(_value);
        }

        string substing(short strat_pos , short end_pos)
        {
            return substing(_value , strat_pos , end_pos);
        }

        __declspec(property(get = get_value, put = set_value)) string value;
};


int main() {
    // Example usage or placeholder
    cout << "String library main function." << std::endl;
    return 0;
}
