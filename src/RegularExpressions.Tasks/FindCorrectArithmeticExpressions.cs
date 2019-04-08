using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

namespace IntroductionToProgramming
{
    class FindCorrectArithmeticExpressions
    {
        static void Main()
        {
            const string input = "input.txt", output = "output.txt";
            const string pattern = @"(([1-9]+(0*))+(([+\-*\/])(([1-9]+(0*)))+)+|([1-9]+(0*))+)";
            
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
