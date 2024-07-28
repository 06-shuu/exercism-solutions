using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Leap
{
    class Program
    {

        public static bool IsLeapYear(int year)
        {

            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                return true;
            return false;
        } 

        static void Main(string[] args)
        {
            Console.WriteLine(IsLeapYear(1999));
        }
    }
}
