public class test0523 {
    public static void main(String[] args) {

      Circle cir1 = new Circle(3);
      System.out.println("Area: "+cir1.area());
      
    }
}

class Circle{
  private double radius;
  public Circle (double r){radius=r;}
  double area(){return radius*radius*3.14;}
  
}