//Encapsulation -wrapping of data member and functions in a same entity
//inheritance-parent and child
//#include<iostream>
//using namespace std;
//
//class Human{
//	public:
//		int height;
//		int weight;
//		int age;
//		
//		public:
//			int getAge(){
//				return this->age;
//			}
//			void setWeight(int w){
//				this->weight=w;
//			}
//			void setHeight(int h){
//				this->height=h;
//			}
//};
//
//class Male: public Human{
//	public:
//		string color;
//		
//	void sleep(){
//		cout<<"Male Sleeping"<<endl;
//	}
//};
//
//int main(){
//	Male object1;
//		object1.sleep();
//	cout<<object1.weight<<endl;
//		object1.sleep();
//	cout<<object1.age<<endl;
//		object1.sleep();
//		object1.setHeight(31);
//	cout<<object1.height<<endl;
//		object1.sleep();
//	cout<<object1.color<<endl;
//	
//		object1.sleep();
//		object1.setWeight(85);
//	cout<<	object1.weight;
//	
//}
//Type of inheritence---single---multi-level---multiple---hybrid---herirchical;



//single

//#include<iostream>
//using namespace std;
//
//class Animal{
//	public:
//		int age;
//		int height;
//		
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//};
//
//class Dog: public Animal{
//	
//
//};
//
//int main(){
//	Dog d;
//	d.speak();
//	
//	
//}




// Multi-level



//#include<iostream>
//using namespace std;
//
//class Animal{
//	public:
//		int age;
//		int height;
//		
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//};
//
//class Dog: public Animal{
//	
//
//};
//class GermanSeford: public Dog{
//	
//};
//
//int main(){
//	GermanSeford gs;
//	gs.speak();
//	
//	
//}





//multiple


//#include<iostream>
//using namespace std;
//
//class Animal{
//	public:
//		int age;
//		int height;
//		
//	public:
//		void bark(){
//			cout<<"barking "<<endl;
//		}
//};
//
//class Human{
//	public:
//		string color;
//		
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//		
//};
//class multiple: public Animal,public Human{
//	
//};
//
//int main(){
//	multiple m;
//	m.bark();
//	m.speak();
//	
//}


//herirchical

//
//#include<iostream>
//using namespace std;
//
//class Animal{
//	public:
//		int age;
//		int height;
//		
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//};
//
//class Dog: public Animal{
//	public:
//		void bark(){
//				cout<<"barking"<<endl;
//			}
//
//};
//class Cat: public Animal{
//	public:
//	void meme(){
//			cout<<"memeyana"<<endl;
//		}
//};
//
//int main(){
//	Animal A;
//	A.speak();
//	cout<<endl;
//	
//	Dog d;
//	d.speak();
//	d.bark();
//	cout<<endl;
//	Cat c;
//	c.speak();
//	c.meme();
//	
//}


// Hybrid




//#include<iostream>
//using namespace std;
//
//
//class Apes{
//	public:
//		void mind(){
//			cout<<"diff. and fast mind"<<endl;
//		}
//};
//class Animal{
//	public:
//		int age;
//		int height;
//		
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//};
//
//class Dog: public Animal{
//	public:
//		void bark(){
//				cout<<"barking"<<endl;
//			}
//
//};
//class Cat: public Animal,public Apes{
//	public:
//	void meme(){
//			cout<<"memeyana"<<endl;
//		}
//};
//
//int main(){
//	Apes aps;
//	aps.mind();
//	cout<<endl;
//	Animal A;
//	A.speak();
//	cout<<endl;
//	
//	Dog d;
//	d.speak();
//	d.bark();
//	cout<<endl;
//	
//	Cat c;
//	c.speak();
//	c.meme();
//	c.mind();
//	
//}




//Inheritance Ambiguity-2 function call by 1 function both having same function name so which will be call first;     scope reso.

//#include<iostream>
//using namespace std;
//
//
//class Apes{
//	public:
//		void mind(){
//			cout<<"diff. and fast mind"<<endl;
//		}
//};
//class Animal{
//	public:
//		void mind(){
//			cout<<"speaking"<<endl;
//		}
//};
//
//class Cat: public Animal,public Apes{
//	public:
//	void meme(){
//			cout<<"memeyana"<<endl;
//		}
//};
//
//int main(){
//	
//	Cat c;
//	
//	c.Animal::mind();
//	c.Apes::mind();
//}





//       Polymorphism -many form,of 2 type---compile-time---run-time.

//compile time-2type---function overloading---operator overloading.



//#include<iostream>
//using namespace std;
//
//
//class A{
//	public:
//		void sayHello(){
//			cout<<"Hello bhai ji"<<endl;
//			
//		}
//		void sayHello(string name){                  //ther function overloading is managed by giving diff input argument
//			cout<<"Hello bhai ji"<<name<<endl;
//			
//		}
//};
//
//int main(){
//	A obj;
//	obj.sayHello();
//}



//#include<iostream>
//using namespace std;
//
//
//class A{
//	public:
//		int a;
//		int b;
//		
//	public:
//		int add(){
//			return a+b;
//		}
//		
//		void operator+ (A &obj){                                     //operator overloading
//			int value1=this->a;
//			int value2=obj.a;
//			cout<<"output "<<value2-value1<<endl;
//		}
//		void operator* (A &obj){
//			int value1=this->a;
//			int value2=obj.a;
//			cout<<"output "<<value2-value1<<endl;
//		}
//};
//
//int main(){
//	A obj1,obj2;
//	obj1.a=4;
//	obj2.a=7;
//	obj1 * obj2;
//	
//	
//}





//#include<iostream>
//using namespace std;
//
//class Animal{
//			
//	public:
//		void speak(){
//			cout<<"speaking"<<endl;
//		}
//};                                                 //function or menthod over riding at run time
//
//class Dog: public Animal{
//	public:
//		void speak(){
//			cout<<"barking"<<endl;
//		}
//	
//
//};
//
//int main(){
//	Dog d;
//	d.speak();
//	
//	
//}






//                                    Abstraction          (implementation hiding)



 





