#include <iostream>
using namespace std;

int main(){
    float HP,Heal_perfect,Heal_good,Damage_miss,HP_result,Damage_result,Miss_times,Heal_per_res,Heal_goo_res,Num_per_heal,Num_goo_heal,Damage_goo_res;
    //HP=增加血量,Heal_p=回復比例(P),
    cout << "輸入HP計算後比率(EX:1.1 or 0.9):" << endl;
    cin >> HP ;
    cout << "輸入Heal(perfect)計算後比率(只有Heal就填入Heal)(EX:1.1 or 0.9):" << endl;
    cin >> Heal_perfect ;
    cout << "輸入Heal(good)計算後比率(只有Heal就填入Heal)(EX:1.1 or 0.9):" << endl;
    cin >> Heal_good ;
    cout << "輸入Damage(miss)計算後比率(EX:1.1 or 0.9):" << endl;
    cin >> Damage_miss ;

    HP_result = 100*HP; //新HP=100*HP
    Damage_result = 5*Damage_miss; //miss一次扣幾滴血=5*miss倍率
    Miss_times = HP_result/Damage_result; //可miss數=新HP/傷害
    Heal_per_res = 1*Heal_perfect; //打出5 perfect可以回復幾滴血
    Num_per_heal = Damage_result/Heal_perfect*5; //打出幾個perfect會回復1次miss數量

    if(Heal_good>0){
        Heal_goo_res=1*Heal_good; //打出10 good可以回復幾滴血
        Num_goo_heal=Damage_result/Heal_good*10; //打出幾個gooe會回復1次miss數量
        cout << "你有" << HP_result << "滴血" << endl;
        cout << "每次miss一次扣" << Damage_result << "滴血(你可以連續miss" << Miss_times << "次)" << endl;

        if(Heal_perfect==Heal_good){
            cout << "每打出5個perfect或是10個good會回復" << Heal_per_res << "滴血" << endl;
        }
        else{
            cout << "每打出5個perfect會回復" << Heal_per_res << "滴血，或是10個good會回復" << Heal_goo_res << "滴血" << endl;
        }

        cout << "因此，打出" << Num_per_heal << "個perfect或是" << Num_goo_heal << "個good就會回復" << Damage_result << "滴血，等同於回復1次miss的數量" << endl;
        cout << "回復力=" << Num_per_heal << "+" << Num_goo_heal << "+0-" << Miss_times << "=" << Num_per_heal+Num_goo_heal+0-Miss_times << endl;
    }
    else{
        Damage_goo_res=-1*Heal_good/10; //打出1個good扣幾滴血
        cout << "你有" << HP_result << "滴血" << endl;
        cout << "每次miss一次扣" << Damage_result << "滴血(你可以連續miss" << Miss_times << "次)" << endl;
        cout << "每次good一次扣" << Damage_goo_res << "滴血(你可以連續good" << HP_result/Damage_goo_res << "次)" << endl;
        cout << "每打出5個perfect會回復" << Heal_per_res << "滴血" << endl;
        cout << "因此，打出" << Num_per_heal << "個perfect就會回復" << Damage_result << "滴血，等同於回復1次miss的數量" << endl;
        cout << "回復力=" << Num_per_heal << "+0+" << HP_result/Damage_goo_res << "-" << Miss_times << "=" << Num_per_heal+0+HP_result/Damage_goo_res-Miss_times << endl;
    }
    system("Pause");
    return 0;
}
