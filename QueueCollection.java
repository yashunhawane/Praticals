import java.util.*;
public class QueueCollection {
    public static void main(String[] args){
        int numbers[]={21, 45, 35, 76, 98};
        List<Integer>list=new ArrayList<>();
        try{
            for(int i=0;i<5;i++){
                list.add(numbers[i]);
            }
            System.out.println("The list is: "+list);
            LinkedList<Integer>queue=new LinkedList<>();
            for(int i=0;i<5;i++){
                queue.addFirst(numbers[i]);
            }
            System.out.println("The queue is : "+queue);
            queue.removeLast();
            System.out.println("After removing last element the queue is: "+queue);
        }catch(Exception e){
            
        }
    }
}
