using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Annalyns_Infiltration
{
    static class QuestLogic
    {
        public static bool CanFastAttack(bool knightIsAwake)
        {
            return knightIsAwake;
        }

        public static bool CanSpy(bool knightIsAwake, bool archerIsAwake, bool prisonerIsAwake)
        {
            return knightIsAwake || archerIsAwake || prisonerIsAwake;
        }

        public static bool CanSignalPrisoner(bool archerIsAwake, bool prisonerIsAwake)
        {
            return prisonerIsAwake && !archerIsAwake;
        }

        public static bool CanFreePrisoner(bool knightIsAwake, bool archerIsAwake, bool prisonerIsAwake, bool petDogIsPresent)
        {
            return (petDogIsPresent && !archerIsAwake) || (!petDogIsPresent && prisonerIsAwake && !knightIsAwake && !archerIsAwake);
        }
    }


    class Program
    {
        static void Main(string[] args)
        {
            //var knightIsAwake = true;
            // Console.WriteLine(QuestLogic.CanFastAttack(knightIsAwake));

            //var knightIsAwake = false;
            //var archerIsAwake = true;
            //var prisonerIsAwake = false;
            // Console.WriteLine(QuestLogic.CanSpy(knightIsAwake, archerIsAwake, prisonerIsAwake));

            // var archerIsAwake = false;
            // var prisonerIsAwake = true;
            // Console.WriteLine(QuestLogic.CanSignalPrisoner(archerIsAwake, prisonerIsAwake));
            var knightIsAwake = false;
            var archerIsAwake = true;
            var prisonerIsAwake = false;
            var petDogIsPresent = false;
            Console.WriteLine(QuestLogic.CanFreePrisoner(knightIsAwake, archerIsAwake, prisonerIsAwake, petDogIsPresent));


        }
    }
}
