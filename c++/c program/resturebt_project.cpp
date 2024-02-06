#include <iostream>
using namespace std;

class resturent
{
public:
    string name, restutentname, number;
    int b, s, sa, co, kss, km , k , mp;

    void detail()
    {
        cout << "\n";
        cout << "k     k   R R R R    o    s  s  s    h       " << endl;
        cout << "k   k     R     R    i   s           h h h h " << endl;
        cout << "k  k      R R R      i     s         h     h " << endl;
        cout << "k k       R  R       i        s      h     h " << endl;
        cout << "k   k     R   R      i          s    h     h   --> RESTURENT <--" << endl;
        cout << "k     k   R    R     i   s  s  s     h     h   --> RESTURENT <--" << endl;
        cout << "\n";
        cout << "Enter coustumer name: ";
        cin >> name;
        cout << "Enter coustumer number: ";
        cin >> number;
        
    }

    int butter_milk()
    {
        cout << "Buttermilk quantity: ";
        cin >> b;
        return b;
    }

    void dhosh()
    {
        cout << "dhosh quantity: ";
        cin >> s;
    }

    void jira_rise()
    {
        cout << "jira_rise quantity: ";
        cin >> sa;
    }

    void cold_drink()
    {
        cout << "Cold drink quantity: ";
        cin >> co;
    }

    void krish_special_sabji()
    {
        cout << "krish_special_sabji quantity: ";
        cin >> kss;
    }
    void kaju_mataka()
    {
        cout << "kaju mataka quantity: ";
        cin >> km;
    }
    void kulcha()
    {
        cout << "kulcha quantity: ";
        cin >> k;   
    }
    void masala_papadha()
    {
        cout << "masala papad quantity: ";
        cin >> mp;   
    }
    
};
 
int main()
{
    int ch, quantity, choice, price;
    string b, s, sa, co, kss, km , k , mp;
    resturent restu;
    restu.detail();
    double total = 0.0;
      
    do
    {
        cout << "\n      ||------> MENU <------||\n";
        cout << "Press 1 for buttermilk = 20 $" << endl;
        cout << "Press 2 for dhosh = 60 $" << endl; 
        cout << "Press 3 for jira_rise = 90 $" << endl;
        cout << "Press 4 for cold drink = 25 $" << endl;
        cout << "Press 5 for rice and dal = 200 $" << endl;
        cout << "Press 6 for kaju mataka = 180 $ " << endl;
        cout << "Press 7 for kulcha  = 40 $ " << endl;
        cout << "Press 8 for masala papad = 50 $ " << endl;
        cout << "Press 0 to show bill " << endl;
        cout << "\n";

        cout << "Enter the item number (1 to 8): ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            quantity = restu.butter_milk();
            price = 20;
            total += price * quantity;
            b="buttermilk";
            
            break;

        case 2:
            restu.dhosh();
            price = 60;
            total += price * restu.s;
            s="dosha";
            break;

        case 3:
            restu.jira_rise();
            price = 90;
            total += price * restu.sa;
            sa="jira_rise";
            break;

        case 4:
            restu.cold_drink();
            price = 25;
            total += price * restu.co;
            co="cold_drink";
            break;

        case 5:
            restu.krish_special_sabji();
            price = 200;
            total += price * restu.kss;
            kss="special sabji";
            break;

        case 6:
            restu.kaju_mataka();
            price = 180;
            total += price * restu.km;
            km="kaju mataka";
            break;    
          
        case 7:
            restu.kulcha();
            price = 40;
            total += price * restu.k;
            k="kulcha";
            break;  

        case 8:
            restu.masala_papadha();
            price = 50;
            total += price * restu.mp;
            mp="masala papad";
            break;  

        case 0:
            break;

        default:
            cout << "||  item is not valid  ||" << endl;
            cout << "||  pelses enter number 1 to 8 or 0 show bill  ||" << endl;
        }
    cout << " your Order is :" << b <<endl;
    cout << " your Order is :" << s <<endl;
    cout << " your Order is :" << sa <<endl;
    cout << " your Order is :" << co <<endl;
    cout << " your Order is :" << kss <<endl;
    cout << " your Order is :" << km <<endl;
    cout << " your Order is :" << k <<endl;
    cout << " your Order is :" << mp <<endl;
    } while (ch != 0); 

    double cgst = total * 0.06; // CGST rate is 9%
    double sgst = total * 0.06; // SGST rate is 9%
    double totalgst = cgst + sgst;
    double netBill = total + cgst + sgst;

    cout << "Order Total: $" << total << endl;
    cout << "CGST: $" << cgst << endl;
    cout << "SGST: $" << sgst << endl;
    cout << "total gst: $" << totalgst << endl;
    cout << "Net Bill: $" << netBill << endl;

    return 0;
}