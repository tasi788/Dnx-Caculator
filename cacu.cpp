#include <iostream>
using namespace std;

int main(){
    float HP,Heal_perfect,Heal_good,Damage_miss,HP_result,Damage_result,Miss_times,Heal_per_res,Heal_goo_res,Num_per_heal,Num_goo_heal,Damage_goo_res;
    //HP=�W�[��q,Heal_p=�^�_���(P),
    cout << "��JHP�p����v(EX:1.1 or 0.9):" << endl;
    cin >> HP ;
    cout << "��JHeal(perfect)�p����v(�u��Heal�N��JHeal)(EX:1.1 or 0.9):" << endl;
    cin >> Heal_perfect ;
    cout << "��JHeal(good)�p����v(�u��Heal�N��JHeal)(EX:1.1 or 0.9):" << endl;
    cin >> Heal_good ;
    cout << "��JDamage(miss)�p����v(EX:1.1 or 0.9):" << endl;
    cin >> Damage_miss ;

    HP_result = 100*HP; //�sHP=100*HP
    Damage_result = 5*Damage_miss; //miss�@�����X�w��=5*miss���v
    Miss_times = HP_result/Damage_result; //�imiss��=�sHP/�ˮ`
    Heal_per_res = 1*Heal_perfect; //���X5 perfect�i�H�^�_�X�w��
    Num_per_heal = Damage_result/Heal_perfect*5; //���X�X��perfect�|�^�_1��miss�ƶq

    if(Heal_good>0){
        Heal_goo_res=1*Heal_good; //���X10 good�i�H�^�_�X�w��
        Num_goo_heal=Damage_result/Heal_good*10; //���X�X��gooe�|�^�_1��miss�ƶq
        cout << "�A��" << HP_result << "�w��" << endl;
        cout << "�C��miss�@����" << Damage_result << "�w��(�A�i�H�s��miss" << Miss_times << "��)" << endl;

        if(Heal_perfect==Heal_good){
            cout << "�C���X5��perfect�άO10��good�|�^�_" << Heal_per_res << "�w��" << endl;
        }
        else{
            cout << "�C���X5��perfect�|�^�_" << Heal_per_res << "�w��A�άO10��good�|�^�_" << Heal_goo_res << "�w��" << endl;
        }

        cout << "�]���A���X" << Num_per_heal << "��perfect�άO" << Num_goo_heal << "��good�N�|�^�_" << Damage_result << "�w��A���P��^�_1��miss���ƶq" << endl;
        cout << "�^�_�O=" << Num_per_heal << "+" << Num_goo_heal << "+0-" << Miss_times << "=" << Num_per_heal+Num_goo_heal+0-Miss_times << endl;
    }
    else{
        Damage_goo_res=-1*Heal_good/10; //���X1��good���X�w��
        cout << "�A��" << HP_result << "�w��" << endl;
        cout << "�C��miss�@����" << Damage_result << "�w��(�A�i�H�s��miss" << Miss_times << "��)" << endl;
        cout << "�C��good�@����" << Damage_goo_res << "�w��(�A�i�H�s��good" << HP_result/Damage_goo_res << "��)" << endl;
        cout << "�C���X5��perfect�|�^�_" << Heal_per_res << "�w��" << endl;
        cout << "�]���A���X" << Num_per_heal << "��perfect�N�|�^�_" << Damage_result << "�w��A���P��^�_1��miss���ƶq" << endl;
        cout << "�^�_�O=" << Num_per_heal << "+0+" << HP_result/Damage_goo_res << "-" << Miss_times << "=" << Num_per_heal+0+HP_result/Damage_goo_res-Miss_times << endl;
    }
    system("Pause");
    return 0;
}
