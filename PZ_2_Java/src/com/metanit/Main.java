package com.metanit;

public class Main {

    public static void main(String[] args) {
        char symb1=1067;
        char symb2 ='Ы';

        System.out.println("symb1 contains "+ symb1);
        System.out.println("symb2 contains "+ symb2);

        char ch = 'J';
        int intсh = (int) ch;

        System.out.println("\n\nJ corresponds with "+ intсh);

        String s1 = "I have ";
        String s2 = " apples ";
        int num = 3;
        String s = s1 + num + s2;

        System.out.println("\n\n"+s);

        int i = 35;
        String str = Integer.toString(i);
        System.out.println("\n\n"+str);
        double  i1 = 32.4e10;
        String str1 = Double.toString(i1);
        System.out.println(str1);
        long  i2 = 3422222;
        String str2 = Long.toString(i2);
        System.out.println(str2);
        float  i3 = 3.46f;
        String str3 = Float.toString(i3);
        System.out.println(str3);

        char ch1= 'S';

        // c использованием класса Character
        String charToString = Character.toString(ch1);
        System.out.println("\n\n"+charToString);

        // с использованием операции добавления класса String
        String str4 = "" + ch1;
        System.out.println(str4);

        //с использованием массива
        String fromChar = new String(new char[] { ch1 });
        System.out.println(fromChar);

        // с использованием метода valueOf класса String
        String valueOfchar = String.valueOf(ch1);
        System.out.println(valueOfchar);

        char ch2 = '9';

        // c использованием метода getNumericValue
        // класса Character
        int i4 = Character.getNumericValue(ch2);
        System.out.println(i4);

        // c использованием метода digit класса Character
        int i5 = Character.digit(ch2,10);
        System.out.println(i4);

        int a = 2015;
        long l = (long) (a);
        System.out.println(l);

        int a2 = 2015;
        float f = (float) (a2);
        System.out.println(f);

        long l1 = 214748364;
        int a3 = (int) l1;
        System.out.println(a3);

        double d = 3.14;
        int a4 = (int) d;
        System.out.println(a4);

        class Point {
            int x, y;

            /**
             * Конструктор принимает 2 аргумента,
             * которыми инициализирует поля объекта.
             */
            Point (int newx, int newy){
                x=newx;
                y=newy;
            }
        }
        Point p = null;
        try {
            // в следующей строке, используя лишь
            // текстовое имя класса Point, порождается
            // объект без применения ключевого слова new
            p=(Point)Class.forName("Point").newInstance();
            System.out.println(p);

        } catch (Exception e) { // обработка ошибок
            System.out.println(e);
        }
    }
}
