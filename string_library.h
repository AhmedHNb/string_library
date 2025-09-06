#pragma once
#include <string>
#include <vector>   
#include <iostream>

using namespace std;

/**
 * @class string_library
 * @brief Provides various string manipulation utilities.
 */
class string_library 
{
    private:
        string _value; ///< Internal string value.
    
    public:
        /**
         * @brief Default constructor. Initializes _value to an empty string.
         */
        string_library()
        {
            _value = "";
        }
        
        /**
         * @brief Constructor with initial value.
         * @param value The initial string value.
         */
        string_library(const string& value)
        {
            _value = value;
        }

        /**
         * @brief Gets the current value.
         * @return The internal string value.
         */
        string get_value() const
        {
            return _value;
        }

        /**
         * @brief Sets the internal string value.
         * @param value The new string value.
         */
        void set_value(string value)
        {
            _value = value;
        }

        /**
         * @brief Converts all characters in the given string to uppercase.
         * @param str The string to convert (modified in place).
         */
        static void upper_case(string& str)
        {
            for (char& c : str)
            {
                c = toupper(c);
            }
        }

        /**
         * @brief Converts all characters in the given string to lowercase.
         * @param str The string to convert (modified in place).
         */
        static void lower_case(string& str)
        {
            for (char& c : str)
            {
                c = tolower(c);
            }
        }

        /**
         * @brief Appends appended_str to str.
         * @param str The original string (passed by value, not modified outside).
         * @param appended_str The string to append.
         * @note This function does not modify the original string outside the function.
         */
        static void append(string& str , string appended_str)
        {
            str = str + appended_str;
        }

        /**
         * @brief Prepends pre_appended_str to str.
         * @param str The original string (passed by value, not modified outside).
         * @param pre_appended_str The string to prepend.
         * @note This function does not modify the original string outside the function.
         */
        static void prepend(string& str , string pre_appended_str)
        {
            pre_appended_str = pre_appended_str + str ;
            str = pre_appended_str;
        }

        /**
         * @brief Splits a string by a delimiter and returns the joined result with spaces.
         * @param delimiter The character to split by.
         * @param str The string to split.
         * @return A string with split parts joined by spaces.
         * @note This does not return a vector of strings, but a single string with parts separated by spaces.
         */
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
            // Add the last segment if not empty
            if (!temp.empty()) {
                acc_vector.push_back(temp);
            }

            for(string s : acc_vector)
            {
                result = result + s + " " ;
            }

            return result;
        }

        /**
         * @brief Counts the number of words in a string (words separated by spaces).
         * @param str The string to count words in.
         * @return The number of words.
         */
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

        /**
         * @brief Returns the size (length) of the string.
         * @param str The string to measure.
         * @return The length of the string.
         */
        static int size(string str)
        {
            int size = 0;
            
            for (char c : str)
            {
                size ++ ;
            }
            return size;
        }

        /**
         * @brief Returns a substring from strat_pos to end_pos (exclusive).
         * @param str The string to extract from.
         * @param strat_pos The starting position (inclusive).
         * @param end_pos The ending position (exclusive).
         * @return The substring.
         * @note No bounds checking is performed.
         */
        static string substing(string str , short strat_pos , short end_pos)
        {
            string result = "";
            for (int i = strat_pos ; i < end_pos ; i++)
            {
                result += str[i];
            }
            return result;
        }

        /**
         * @brief Converts the internal value to uppercase.
         */
        void upper_case()
        {
            upper_case(_value);
        }

        /**
         * @brief Converts the internal value to lowercase.
         */
        void lower_case()
        {
            lower_case(_value);
        }

        /**
         * @brief Appends a string to the internal value.
         * @param str The string to append.
         * @note The static append does not modify _value, so this does not change the internal value.
         */
        void append(string str)
        {
            append(_value , str);
        }
        
        /**
         * @brief Prepends a string to the internal value.
         * @param str The string to prepend.
         * @note The static prepend does not modify _value, so this does not change the internal value.
         */
        void prepend(string str)
        {
            prepend(_value , str);
        }

        /**
         * @brief Splits the internal value by a delimiter and returns the joined result with spaces.
         * @param delimiter The character to split by.
         * @return A string with split parts joined by spaces.
         */
        string split_string(char delimiter)
        {
            return split_string(delimiter , _value);
        }

        /**
         * @brief Counts the number of words in the internal value.
         * @return The number of words.
         */
        int count_words()
        {
            return count_words(_value);
        }

        /**
         * @brief Returns the size (length) of the internal value.
         * @return The length of the string.
         */
        int size()
        {
            return size(_value);
        }

        /**
         * @brief Returns a substring of the internal value.
         * @param strat_pos The starting position (inclusive).
         * @param end_pos The ending position (exclusive).
         * @return The substring.
         */
        string substing(short strat_pos , short end_pos)
        {
            return substing(_value , strat_pos , end_pos);
        }

        /// Property for value (getter and setter).
        __declspec(property(get = get_value, put = set_value)) string value;
};
