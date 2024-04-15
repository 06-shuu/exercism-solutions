using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bob
{
    public static class Bob
    {
        public static string Response(string statement)
        {
            //if (statement.Contains("?"))
            //    return "Sure.";
            //else if (statement.Any(char.IsLetter) && statement.ToUpperInvariant() == statement && statement.Contains("?"))
            //    return "Whoa, chill out!";
            //else if (statement.Any(char.IsLetter) && statement.ToUpperInvariant() == statement)
            //    return "Calm down, I know what I'm doing!";
            //if (string.IsNullOrEmpty(statement))
            //    return "Fine. Be that way!";
            //else return "Whatever.";

            if (string.IsNullOrWhiteSpace(statement))
                return "Fine. Be that way!";
            
            if (statement.Any(char.IsLetter) && statement.Where(Char.IsLetter).All(char.IsUpper)){
                if (statement.Trim().EndsWith("?"))
                    return "Calm down, I know what I'm doing!";
                else
                    return "Whoa, chill out!";
            }
            if (statement.Trim().EndsWith("?"))
                return "Sure.";
            return "Whatever.";


        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Bob.Response("How are you?"));
            Console.WriteLine(Bob.Response("SHUT UP!"));
            Console.WriteLine(Bob.Response("WHAT'S GOING ON?"));
            Console.WriteLine(Bob.Response(" "));
            Console.WriteLine(Bob.Response("idk"));
        }
    }
}
