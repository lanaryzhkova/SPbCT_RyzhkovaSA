
package com.metanit;
import java.util.Scanner;

public class Main {
    public static void Task1()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите число:");
        int num = in.nextInt();
        if (num<100)
            System.out.println("less");
        else
            System.out.println("not less");
    }
    public static void Task2()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите оценку:");
        int num = in.nextInt();
        if (num==2)
            System.out.println("Неудовлетворительно");
        else if (num ==3)
            System.out.println("Удовлетворительно");
        else if (num==4)
            System.out.println("Хорошо");
        else if (num ==5)
            System.out.println("Отлично");
        else { System.out.println("Такой оценки нет, введите число от 2 до 5");}
    }
    public static void Task3()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите название дня недели:");
        String num = in.nextLine();
        switch (num) {
            case "Понедельник" -> System.out.println("Номер 1");
            case "Вторник" -> System.out.println("Номер 2");
            case "Среда" -> System.out.println("Номер 3");
            case "Четверг" -> System.out.println("Номер 4");
            case "Пятница" -> System.out.println("Номер 5");
            case "Суббота" -> System.out.println("Номер 6");
            case "Воскресенье" -> System.out.println("Номер 0");
            default -> System.out.println("Вы неправильно ввели название дня недели");
        }
    }
    public static void Task4() {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите количество баллов:");
        int num = in.nextInt();
        if (num>=91 && num<=100)
            System.out.println("Разряд A");
        else if (num>=81 && num<=90)
            System.out.println("Разряд B");
        else if (num>=71 && num<=80)
            System.out.println("Разряд C");
        else if (num>=61 && num<=70)
            System.out.println("Разряд D");
        else if (num>=51 && num<=60)
            System.out.println("Разряд E");
        else if (num<=50)
            System.out.println("Разряд F");
        else
            System.out.println("Введите корректное количетсво баллов");
    }
    public static void Task5() {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите a: (по варианту а=7,5)");
        double a = in.nextDouble();
        System.out.println("Введите b: (по варианту b=1,4)");
        double b = in.nextDouble();
        System.out.println("Введите x: (по варианту 1) x=-4,13 2) x=0,77)");
        double x = in.nextDouble();
        double y = 0;
        if (x<=-3)
        {
            y = a-b*b*x;
            System.out.println(y);
        }
        else {
            y = 1. / (x * x + Math.exp(b * x));
            System.out.println(y);
        }
    }
    public static void Task5_2() {
        Scanner in = new Scanner(System.in);
        System.out.println("Введите a: (по варианту а=7,2)");
        double a = in.nextDouble();
        System.out.println("Введите b: (по варианту b=3,9)");
        double b = in.nextDouble();
        System.out.println("Введите x: (по варианту 1) x=-0,38 2) x=4,19 3) х=9,13)");
        double x = in.nextDouble();
        double y = 0;
        if (x<3)
        {
            y = a*x+b*x*x;
            System.out.println(y);
        }
        else if (x>=3 && x<=6) {
            y = Math.exp(x)+x*x;
            System.out.println(y);
        }
        else {
            y = Math.pow(Math.sin(b*x), 2);
            System.out.println(y);
        }
    }
        public static void main(String[] args){
    Task5_2();

    }


}
