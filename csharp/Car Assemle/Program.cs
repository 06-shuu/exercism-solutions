using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Car_Assemble
{
    static class AssemblyLine
    {
        public static double SuccessRate(int speed)
        {
            if (speed == 0)
                return 0.0;
            else if (speed >= 1 && speed <= 4)
                return 1.0;
            else if (speed >= 5 && speed <= 8)
                return 0.9;
            else if (speed == 9)
                return 0.8;
            else
                return 0.77;
        }

        public static double ProductionRatePerHour(int speed)
        {
            int producedCar = 221;
            if (speed >= 1 && speed <= 10)
                return SuccessRate(speed) * speed * producedCar;
            else
                return 0;
        }

        public static int WorkingItemsPerMinute(int speed)
        {
            return (int)ProductionRatePerHour(speed) / 60;
        }
    }
        class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine($"{ AssemblyLine.SuccessRate(10)}");
            Console.WriteLine($"{AssemblyLine.ProductionRatePerHour(6)}");
            Console.WriteLine($"{AssemblyLine.WorkingItemsPerMinute(6)}");
        }
    }
}
