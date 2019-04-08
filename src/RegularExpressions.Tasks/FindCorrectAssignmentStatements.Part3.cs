using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

namespace IntroductionToProgramming
{
    class FindCorrectAssignmentStatementsPart3
    {
        static void Main(string[] args)
        {
            const string input = "input.txt", 
                         output = "output.txt";
            
            #region Part 3
            const string pattern = @"([a-zA-Z]+[0-9]*)+(\[\s*(([a-zA-Z]+[0-9]*)+|([1-9]+0*)+|0|(?<ArithmeticExpression0>(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+)(\s*[*-\/+]\s*(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+))+))\s*\])?\s*\=\s*(0|([1-9]+0*)+|(([a-zA-Z]+[0-9]*)+(\[\s*(([a-zA-Z]+[0-9]*)+|([1-9]+0*)+|0|(?<ArithmeticExpression1>(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+)(\s*[*-\/+]\s*(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+))+))\s*\])?)|(?<ComplexArithmeticExpression>(0|([1-9]+0*)+|([a-zA-Z]+[0-9]*)+(\[\s*(([a-zA-Z]+[0-9]*)+|([1-9]+0*)+|0|(?<ArithmeticExpression2>(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+)(\s*[*-\/+]\s*(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+))+))\s*\])?)(\s*[*-\/+]\s*(0|([1-9]+0*)+|([a-zA-Z]+[0-9]*)+(\[\s*(([a-zA-Z]+[0-9]*)+|([1-9]+0*)+|0|(?<ArithmeticExpression3>(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+)(\s*[*-\/+]\s*(([a-zA-Z]+[0-9]*)+|0|([1-9]+0*)+))+))\s*\])?))+))\s*\;";
            #endregion

            var matches = new List<string>();
            
            foreach (string line in File.ReadAllLines(input))
            {
                foreach (Match match in Regex.Matches(line, pattern, RegexOptions.ECMAScript))
                {
                    matches.Add(match.Value);
                }
            }

            File.WriteAllLines(output, matches.ToArray());
        } 
    }
}