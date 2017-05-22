#ifndef CIRCLE_HPP
#define CIRCLE_HPP


class Circle 
{
  public:

    Circle();
    Circle( float r);

    float area() const;
    float circumference() const;

   //radius Setter
    void radius(float r); 

    //radius Getter
    float radius() const;
    
    //Operator overloading
    bool operator< (Circle const& a);
    bool operator> (Circle const& a);
    bool operator==(Circle const& a);

  private:
 
    float radius_;
  
};
#endif