using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

namespace IntroductionToProgramming
{
    class FindCorrectDates
    {
        static void Main() 
        {
            const string input = "input.txt", output = "output.txt";
            const string pattern = @"((?<NormalDays>[012][1-9]|10|20|30|31)\.(?<NormalMonths>01|0[3-9]|10|11|12)\.(\d{2}|\d{4})+)|((?<NormalMonths1>01|0[3-9]|10|11|12)\.(?<NormalDays1>[012][1-9]|10|20|30|31)\.(\d{2}|\d{4})+)|((((0|1|2)[1-9])|10|20)\.02\.(\d{2}|\d{4})+|(02\.(((0|1|2)[1-9])|10|20)\.(\d{2}|\d{4})+))";
            
            var matches = new List<string>();

            foreach (string line in File.ReadAllLines(input))
            {
                foreach (Match match in Regex.Matches(line, pattern))
                {
                    matches.Add(match.Value);
                }
            }

            File.WriteAllLines(output, matches.ToArray());
        }   
    }
}
