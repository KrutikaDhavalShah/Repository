class Multi
{
    public static void main(String arg[])
    {
        //Arr is 2 dimensional array which contains 3 one dimensional array
        //Each one dimensional array contains 4 elements
        //Each element is of type integer

        //Allowed in C, C++
        //int Arr[3][4]={{10,20,30,40},{40,50,60,80},{90,100,110,120}};

        //Allowed in Java only
         int Arr[][]={{10,20,30,40},{40,50,60,80},{90,100,110,120}};

        System.out.println(Arr.length);           //3
        System.out.println(Arr[0].length);        //4
        System.out.println(Arr[1].length);        //4
        System.out.println(Arr[2].length);        //4
    }
}