
namespace CodeForces
{
    class Program
    {

        public static List<int> StringToIntList(string numbersString)
        {
            return numbersString
                .Split()
                .Select(x => int.Parse(x))
                .ToList();
        }

        public static int input()
        {
            return int.Parse(Console.ReadLine()!);
        }
        static void Main(string[] args)
        {
            int cases = int.Parse(Console.ReadLine()!);
            for (int i = 0; i < cases; i++)
            {
                var lengthAndPieces = StringToIntList(Console.ReadLine()!);
                var length = lengthAndPieces[0];
                var pieces = lengthAndPieces[1];

                int result = 0;
                var nums = StringToIntList(Console.ReadLine()!);
                nums.Sort();
                for (int j = 0; j < pieces - 1; j++)
                {
                    result += (nums[j] - 1) * 2 + 1;
                }

                Console.WriteLine(result);
            }
        }
    }
}
