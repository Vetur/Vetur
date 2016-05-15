package junit01;

import static org.junit.Assert.*;

import org.junit.Test;

public class TestTriangle{
    @Test
    public void testIsTriangle1(){
        Triangle t = new Triangle(1,1,1);
        assertEquals("Regular",t.getType(t),"Regular");
    }

    @Test
    public void testIsTriangle2(){
        Triangle t = new Triangle(3,4,5);
        assertEquals("Scalene",t.getType(t),"Scalene");
    }

    @Test
    public void testIsTriangle3(){
        Triangle t = new Triangle(3,3,5);
        assertEquals("Isoceles",t.getType(t),"Isoceles");
    }
    @Test
    public void testIsTriangle4(){
        Triangle t = new Triangle(1,1,5);
        assertTrue(t.isTriangle(t));
    }
    @Test
    public void testIsTriangle5(){
        Triangle t = new Triangle(5,4,4);
        assertEquals("Isoceles",t.getType(t),"Isoceles");
    }
    @Test
    public void testIsTriangle6(){
        Triangle t = new Triangle(6,4,6);
        assertEquals("Isoceles",t.getType(t),"Isoceles");
    }
}
