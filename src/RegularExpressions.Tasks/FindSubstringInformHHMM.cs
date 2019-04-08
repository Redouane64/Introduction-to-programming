using System;
using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;

namespace IntroductionToProgramming.RegularExpressions.Tasks
{
    class FindSubstringInformHHMM
    {
        static void Main(string[] args)
        {
            var regex = new Regex("(([0-1][0-9]|2[0-3]):([0-5][0-9]))");
            var test = File.ReadAllText("input.txt");

            var matches = new List<string>();
            foreach (var match in regex.Matches(test))
                matches.Add(match.ToString());

            File.WriteAllLines("output.txt", matches.ToArray());
        }
    }
}
