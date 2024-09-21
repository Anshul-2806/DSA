import java.io.*;
import java.util.*;
class first{
    public static void main(String arg[]){
        int n = 5;
        System.out.println("hEllo");
        // Vector <Integer> v = {1,2,3,4,7,5};
        Vector <Integer> v1 = new Vector<Integer>(n);
        for (int i = 1; i<=n; i++)
            v1.add(i);
        
        System.out.println(v1);
        v1.remove(3);   // remove ele from 3 index
        System.out.println(v1);

        for (int i=0; i<v1.size(); i++)
            System.out.println(v1.get(i) + " ");

        // v.push_back();

        //Create an empty Vector        
        Vector<Integer> in = new Vector<>();  
        //Add elements in the vector  
        in.add(100);  
        in.add(200);  
        in.add(300);  
        in.add(200);  
        in.add(400);  
        in.add(500);  
        in.add(600);  
        in.add(700);  
        //Display the vector elements  
        System.out.println("Values in vector: " +in);  
        //use remove() method to delete the first occurence of an element  
        System.out.println("Remove first occourence of element 200: "+in.remove((Integer)200));  
        //Display the vector elements afre remove() method  
        System.out.println("Values in vector: " +in);  
        //Remove the element at index 4  
        System.out.println("Remove element at index 4: " +in.remove(4));  
        System.out.println("New Value list in vector: " +in);  
        //Remove an element  
        in.removeElementAt(5);        
        //Checking vector and displays the element  
        System.out.println("Vector element after removal: " +in);  
        //Get the hashcode for this vector  
        System.out.println("Hash code of this vector = "+in.hashCode());  
        //Get the element at specified index  
        System.out.println("Element at index 1 is = "+in.get(1)); 
        System.out.println("First element of the vector is = "+in.firstElement());
        //Use forEach() method to print vector elements  
        in.forEach(System.out::println);       

        // find element with max freq in array
        // Vector <Integer> v = {1,2,3,4,7,5};
        // Hashmap <Integer, Integer> h = new Hashmap();

 
        
    }
}

