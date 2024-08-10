//using helpingClasses;
namespace CodeForces;

class Program
{
    static void Main(string[] args)
    {
        // var a = Input.Intger();
        // var b = Input.Intger();
        // Console.WriteLine(a * b);

        int cases = int.Parse(Console.ReadLine()!);
        for (int i = 0; i < cases; i++)
        {
            var nums = Console.ReadLine()!.Split().Select(int.Parse).ToList();
            for (int j = 0; j < 5; j++)
            {
                nums.Sort();
                nums[0]++;


            }
            var result = nums.Aggregate((res, x) => res *= x);
            Console.WriteLine(result);
        }





    }
}
