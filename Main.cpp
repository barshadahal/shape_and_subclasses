#include <iostream>
using namespace std;

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"

void descriptionShape(string &color_shape, bool &isFilled);
void descriptionCircle (double &radius, string &color_shape, bool &Isfilled);
void descriptionRectangle(double &rect_width, double &rect_length, string &color_shape, bool &Isfilled);
void descriptionSquare( double &side, string &color_shape, bool &Isfilled);


int main()
{
        string color_shape;
        double radius, rect_width, rect_length,side;
        bool Isfilled;
        char shpType;
        Shape shp1;
        cout<<"Circle:'C'\n Rectangle:'R'\n Square:'S'\n Shape type is:";
        cin>>shpType;
        cout<<endl;

    if(shpType=='C')
         {

            cout<<"-------CIRCLE!-----------\n";
            descriptionCircle ( radius,  color_shape, Isfilled);
            Circle Circle1(radius, color_shape, Isfilled);

            cout<<Circle1.toString();
            cout<<endl;
            cout<<" The Area of Circle : " <<Circle1.getArea()<<" and the perimeter is: " << Circle1.getPerimeter();


      }

   else if(shpType=='R')

   {

        cout<<"---------------RECTANGLE!-------------\n";
        descriptionRectangle( rect_width,  rect_length,  color_shape,  Isfilled);
        Rectangle Rectangle1( rect_width, rect_length,  color_shape,  Isfilled);
        cout<<Rectangle1.toString();
        cout<<endl;
        cout<<" The Area of rectangle : " <<Rectangle1.getArea()<<" and the perimeter is: " << Rectangle1.getPerimeter();



 }


   else if(shpType=='S')

   {
            cout<<"-----------SQUARE!----------\n";


            descriptionSquare(side,color_shape,Isfilled);
            Square Square1(side,color_shape,Isfilled);
            cout<<Square1.toString();



   }

   else
           {
               cout<<"This is invalid!";
           }

}
void descriptionShape(string &color_shape, bool &Isfilled)
{

        cout<<"Enter the color for given shape:";
        cin>>color_shape;
        cout<<endl;
        cout<<"Is it Filled or not ? (1 For Yes, 0 For No)";
        cin >> Isfilled;
        cout << endl;
}

void descriptionCircle (double &radius, string &color_shape, bool &Isfilled)
{

        cout<<"Enter the radius of the Circle:";
        cin>>radius;
        cout<<endl;
        descriptionShape( color_shape,Isfilled);
}

void detailRectangle(double &rect_width, double &rect_length, string &color_shape, bool &Isfilled)
{

        cout<<"Enter the width of the rectangle:";
        cin>>rect_width;
        cout<<endl;
        cout<<"Enter the length of the rectangle:";
        cin>>rect_length;
        cout<<endl;
        descriptionShape( color_shape,Isfilled);

}

void detailSquare( double &side, string &color_shape, bool &Isfilled)
{

    cout<<"Enter the side of Square";
    cin>>side;
    cout<<endl;
    descriptionShape( color_shape,Isfilled);


}



