#include <iostream> //yeh ek header file hai jo input aur output operation(jaise cin aur cout)ko enable karta hai.
using namespace std; //yeh bata hai ki hum standard library ke objects use kar rahe hai, taaki humein har baar std::cout na likna paray
 //yeh program ka entry pont hai. computer sabse pehle isi function ke andar likha hua code run karta hai
int main()
{
int radius; //yeh ek variable delare kar raha hai jo integer(poora number) store kare ga
float PI =3.14; //float decimal values ki kiye use hota hai. yahan humne PI ki value fix kar de hai.
cout<< radius; //yeh screen par text ya output dikhane kiliye use hota hain(character output)
cin>> radius; //yeh user se input lene ki liye use hota hai(character input)
float area = PI *radius*radius;
cout<< "area of the circle is: "<<area <<endl;

	
	return 0;
}
/*semicolon error= compiler isay "expected";"before" ya "missing semicolon" ki error ke tauur par dikhayega 
programming mein semicolon ka wahi kaam hota hai jo urdu mein "khatma"(-) ya english mein "full stop"(.)ka hota hai.yeh computer
ko bata hai ki yeh statement yahan khatam hojayega
*/
/*float error= to compiler "errror:'PI' was not declared in this scope" dega
wajah kiya hai 
c++ ko pehle batana padta hai ki variable ki "data type" kiya hai.computer ko samajh nahin ayega ki PI mein decimal store karna hai ya text
*/
/*namespace std; error= agar ham using namespace std; ko program mein se hata dete hain, to compiler ko cout,cin,aur endl jaise alfaz
ki pehchan nahi rahega. is se "compilation error" paida hoga.
*/
/*insertion operator(<<) error= to compiler syntax error dega 
c++ mein cout aur variable ya text ke darmiyan yeh operator ek "raste" ka kaam karta hai. iske baghair computer ko
samajh nahi aata ke data ko screen ki taraf kiasie bhejna hai */







