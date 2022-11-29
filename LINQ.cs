public class COPLINQ
{
    public class Problem1
    {
        public static IEnumerable<int> MyFilter(IEnumerable<int> input)
        {
            return input.Where((n, index) => {

                // if it's less than 50 and divisible by 5, get rid of it
                return !(n < 50 && n % 5 == 0);

            }).Select((n, index) => {

                // cube each number
                return n * n * n;

            }).Where((n, index) => {

                // remove any integer that is even
                return !(n % 2 == 0);

            });
        }

        public void Main1()
        {
            Random rnd = new Random(5);

            var listForProblem = Enumerable.Range(1, 100).Select(i => rnd.Next() % 101);

            var answer = Problem1.MyFilter(listForProblem);

            foreach (int i in answer)
            {
                Console.WriteLine(i);
            }
        }
    }

    public class Problem2
    {
        public static IEnumerable<int> MyFilter(IEnumerable<int> input)
        {

            return input.Where((n, index) => {

                // if less than 42 and a multiple of 6, remove it
                return !(n < 42 && n % 6 == 0);

            }).Select((val, index) => {

                // square each number
                return val * val;

            }).Where((val, index) => {

                // remove any integer that is odd
                return (val % 2 == 0);

            });
        }

        public void Main2()
        {

            Random rnd = new Random(5);

            var listForProblem = Enumerable.Range(1, 100).Select(i => rnd.Next() % 101);

            var answer = Problem2.MyFilter(listForProblem);

            foreach (int i in answer)
            {
                Console.WriteLine(i);
            }
        }
    }

    public class Problem3
    {
        public static IEnumerable<int> Merge(
            IEnumerable<int> input1, 
            IEnumerable<int> input2, 
            IEnumerable<int> input3, 
            IEnumerable<int> input4
            )

        {
            // I hate how this looks tbh
            return input1.Concat(input2).Concat(input3).Concat(input4)
            .Where(
                // divisible by 10 and is in every list
                i => i % 10 == 0 
                && input1.Contains(i) 
                && input2.Contains(i)
                && input3.Contains(i) 
                && input4.Contains(i)
                )
            .OrderBy(i => i);
        }

        public void Main3()
        {
            Random rnd = new Random();

            var list1 = Enumerable.Range(1, 15)
                .Select(i => rnd.Next() % 16);
                
            var list2 = Enumerable.Range(2, 42)
                .Select(i => rnd.Next() % 43)
                .Where(n => n % 2 == 0)
                .Select(n => n);

            var list3 = Enumerable.Range(3, 21)
                .Select(i => rnd.Next() % 22)
                .Where(n => !(n % 2 == 0))
                .Select(n => n);

            var list4 = Enumerable.Range(5, 105)
                .Select(i => rnd.Next() % 106)
                .Where(n => n % 5 == 0)
                .Select(n => n);

            var answer = Problem3.Merge(list1, list2, list3, list4);

            foreach (int i in answer) 
            {
                // note: due to how this works, it probably won't print out anything cuz an odd number can never be divisible by 10
                Console.WriteLine(i);
            }
        }
    }


    public static void Main(string[] args)
    {
        Problem1 p1 = new Problem1();
        Problem2 p2 = new Problem2();
        Problem3 p3 = new Problem3();

        p1.Main1();
        p2.Main2();
        p3.Main3();

    }
}