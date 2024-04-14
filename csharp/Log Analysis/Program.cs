using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Log_Analysis
{
    public  static class LogAnalysis
    {
        // TODO: define the 'SubstringAfter()' extension method on the `string` type
        public static string SubstringAfter(this string str, string del)
        {
            int first = str.IndexOf(del) + del.Length;
            return str.Substring(first);
        }

        // TODO: define the 'SubstringBetween()' extension method on the `string` type

        public static string SubstringBetween(this string str, string first, string last)
        {
            int firstIndex = str.IndexOf(first) + first.Length;
            int lasttIndex = str.IndexOf(last);
            return str.Substring(firstIndex, lasttIndex - firstIndex);
        }
        // TODO: define the 'Message()' extension method on the `string` type
        public static string Message(this string str)
        {
            int first = str.IndexOf(": ") + ": ".Length;
            return str.Substring(first);
        }

        // TODO: define the 'LogLevel()' extension method on the `string` type
        public static string LogLevel(this string str)
        {
            int firstIndex = str.IndexOf("[") + "[".Length;
            int lasttIndex = str.IndexOf("]");
            return str.Substring(firstIndex, lasttIndex - firstIndex);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine(LogAnalysis.SubstringAfter("[INFO]: File Deleted.", ": "));
            Console.WriteLine(LogAnalysis.SubstringBetween("[INFO]: File Deleted.","[", "]"));
            Console.WriteLine(LogAnalysis.Message("[ERROR]: Missing ; on line 20."));
            Console.WriteLine(LogAnalysis.LogLevel("[ERROR]: Missing ; on line 20."));
        }
    }
}
