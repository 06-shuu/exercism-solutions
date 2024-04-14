using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lucians_luscious_lasagna
{
    class Lasagna
    {
        // TODO: define the 'ExpectedMinutesInOven()' method
        public int ExpectedMinutesInOven()
        {
            return 40;
        }
        // TODO: define the 'RemainingMinutesInOven()' method
        public int RemainingMinutesInOven(int minutes)
        {
            return ExpectedMinutesInOven() - minutes;
        }
        // TODO: define the 'PreparationTimeInMinutes()' method
        public int PreparationTimeInMinutes(int layers)
        {
            return layers * 2;
        }

        // TODO: define the 'ElapsedTimeInMinutes()' method
        public int ElapsedTimeInMinutes(int layers, int minutesInOven)
        {
            return PreparationTimeInMinutes(layers) + minutesInOven;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            var lasagna = new Lasagna();
            Console.WriteLine(lasagna.ExpectedMinutesInOven());
            Console.WriteLine(lasagna.RemainingMinutesInOven(30));
            Console.WriteLine(lasagna.PreparationTimeInMinutes(2));
            Console.WriteLine(lasagna.ElapsedTimeInMinutes(3, 20));
        }
    }
}
