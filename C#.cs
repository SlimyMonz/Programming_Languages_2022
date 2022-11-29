class FirstCSOop
{
    static public void Main()
    {
        Animal animal = new Animal();
        Dog dog = new Dog();
        Bird bird = new Bird();
        Cat cat = new Cat();

        animal.move();
        animal.sleep();
        animal.eat();

        dog.move("Dog");
        dog.sleep("Dog");
        dog.eat("Dog");
        dog.sing();
        dog.wash();
        dog.turnAround();

        bird.move("Bird");
        bird.sleep("Bird");
        bird.eat("Bird");
        bird.sing();
        bird.wash();
        bird.turnAround();

        cat.move("Cat");
        cat.sleep("Cat");
        cat.eat("Cat");
        cat.sing();
        cat.wash();
        cat.turnAround();

        IUFO smallcraft = new SmallCraft();
        IUFO largecraft = new LargeCraft();
        IUFO bosscraft = new BossCraft();

        smallcraft.fly();
        smallcraft.goToHyperspace();
        smallcraft.land();

        largecraft.fly();
        largecraft.goToHyperspace();
        largecraft.land();

        bosscraft.fly();
        bosscraft.goToHyperspace();
        bosscraft.land();
    }
}

class Animal
{
    public void move() { Console.WriteLine("Animal is moving."); }
    public void move(string name) { Console.WriteLine(name + " is moving."); }
    public void sleep() { Console.WriteLine("Animal is sleeping."); }
    public void sleep(string name) { Console.WriteLine(name + " is sleeping."); }
    public void eat() { Console.WriteLine("Animal is eating."); }
    public void eat(string name) { Console.WriteLine(name + " is eating."); }
}

class Dog : Animal
{
    public void sing() { Console.WriteLine("Dog is barking."); }
    public void wash() { Console.WriteLine("Dog is being washed."); }
    public void turnAround() { Console.WriteLine("Dog turns around."); }
}

class Bird : Animal
{
    public void sing() { Console.WriteLine("Bird is singing."); }
    public void wash() { Console.WriteLine("Bird is being washed."); }
    public void turnAround() { Console.WriteLine("Bird hops around."); }
}

class Cat : Animal
{
    public void sing() { Console.WriteLine("Cat is screaming."); }
    public void wash() { Console.WriteLine("Cat is being washed while clawing at you."); }
    public void turnAround() { Console.WriteLine("Cat doesn't turn around on command, cats do what they want."); }
}


interface IUFO
{
    void fly();
    void goToHyperspace();
    void land();
}

class SmallCraft : IUFO
{
    public void fly()
    {
        Console.WriteLine("Flying in a small craft!");
    }

    public void goToHyperspace()
    {
        Console.WriteLine("Hyperspace in a small craft!");
    }

    public void land()
    {
        Console.WriteLine("Small craft landed!");
    }
}

class LargeCraft : IUFO
{
    public void fly()
    {
        Console.WriteLine("Flying in a large craft!");
    }

    public void goToHyperspace()
    {
        Console.WriteLine("Hyperspace in a large craft!");
    }

    public void land()
    {
        Console.WriteLine("Large craft landed!");
    }
}

class BossCraft : IUFO
{
    public void fly()
    {
        Console.WriteLine("Flying in a boss craft!");
    }

    public void goToHyperspace()
    {
        Console.WriteLine("Hyperspace in a boss craft!");
    }

    public void land()
    {
        Console.WriteLine("Small craft landed!");
    }
}

