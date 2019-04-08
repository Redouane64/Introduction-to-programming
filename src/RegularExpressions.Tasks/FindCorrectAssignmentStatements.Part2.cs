using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

namespace IntroductionToProgramming
{
    class FindCorrectAssignmentStatementsPart2
    {
        static void Main() 
        {
            const string input = "input.txt", output = "output.txt";

            #region Part 2
            const string pattern = @"(?:[a-zA-Z]+[a-zA-Z0-9]*)(?:\[(?:[a-zA-Z]+[a-zA-Z0-9]*|[0-9]+)\])?(?:\s*)(?:\=)(?:\s*)(?:[0-9]+|(?:(?:[a-zA-Z]+[a-zA-Z0-9]*(?:\[(?:[a-zA-Z]+[a-zA-Z0-9]*|[0-9]+)\])?)+)|(?:\s*)(?:(?:(?:[1-9]+(?:0*))+|0|(?:[a-zA-Z]+[a-zA-Z0-9]*(?:\[(?:[a-zA-Z]+[a-zA-Z0-9]*|(?:[1-9]+(?:0*))+|0)\])?)+)(?:\s*)(?:(?:[+\-*\/])(?:\s*)(?:(?:[1-9]+(?:0*))+|0|(?:[a-zA-Z]+[a-zA-Z0-9]*))(?:\[(?:[a-zA-Z]+[a-zA-Z0-9]*|[0-9]+)\])?(?:\s*))+)+)(?:\s*)(?:\;)";
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