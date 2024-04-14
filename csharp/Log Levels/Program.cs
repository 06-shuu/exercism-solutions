using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Log_Levels
{
    static class LogLine
    {
        public static string Message(string logLine)
        {
            int first = logLine.IndexOf("]") + "]".Length+2;
            string str = logLine.Substring(first);
            return str.Trim();
        }

        public static string LogLevel(string logLine)
        {
            int first = logLine.IndexOf("[") + "]".Length;
            int last = logLine.IndexOf("]");
            string str = logLine.Substring(first, last - first);
            return str.ToLower().Trim();
        }

        public static string Reformat(string logLine)
        {
            return Message(logLine) + " (" + LogLevel(logLine) + ")";
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(LogLine.Message("[ERROR]: Invalid operation"));
            Console.WriteLine(LogLine.LogLevel("[ERROR]: Invalid operation"));
            Console.WriteLine(LogLine.Reformat("[ERROR]: Invalid operation"));
        }
    }
}
