#include<iostream>
#include<fstream>
using namespace std;

static void search_numbers(int &j, char *new_text, char *text) {
    for (int i = 0; i<strlen(text); i++){
        if( text[i]=='o'&& text[i+1]=='n'&& text[i+2]=='e'){
            new_text[j]='1';
            i+=3;
            j++;
        }
        if( text[i]=='t'&& text[i+1]=='w'&& text[i+2]=='o'){
            new_text[j]='2';
            i+=3;
            j++;
        }
        if( text[i]=='t'&& text[i+1]=='h'&& text[i+2]=='r'&& text[i+3]=='e'&& text[i+4]=='e'){
            new_text[j]='3';
            i+=5;
            j++;
        }
        if( text[i]=='f'&& text[i+1]=='o'&& text[i+2]=='u'&& text[i+3]=='r'){
            new_text[j]='4';
            i+=4;
            j++;
        }
        if( text[i]=='f'&& text[i+1]=='i'&& text[i+2]=='v'&& text[i+3]=='e'){
            new_text[j]='5';
            i+=4;
            j++;
        }
        if( text[i]=='s'&& text[i+1]=='e'&& text[i+2]=='v'&& text[i+3]=='e'&& text[i+4]=='n'){
            new_text[j]='7';
            i+=5;
            j++;
        }
        //....
        if( text[i]=='f'&& text[i+1]=='i'&& text[i+2]=='f'&& text[i+3]=='t'&& text[i+4]=='y'){
            new_text[j]='5';
            i+=5;
            j++;
        }
        //....
        if( text[i]=='h'&& text[i+1]=='u'&& text[i+2]=='n'&& text[i+3]=='d'&& text[i+4]=='r'&& text[i+5]=='e'&& text[i+6]=='d'){
            i+=7;
            j--;
        }

        new_text[j]=text[i];
        j++;
    }
}

int main(){
    char text[50];
    char new_text[50];
    int j=0;

    ofstream text_numbers;
    text_numbers.open("text1.txt");
    text_numbers<<"abcd one hundred fifty four ertyqw five ds seven";
    text_numbers.close();

    ifstream textWithNumbers("text1.txt");
    if(!textWithNumbers.is_open()){
        cout<<"Error! File is not found"<<endl;
    }else{
        textWithNumbers.getline(text, 50);
        cout << text << endl;
        textWithNumbers.close();
    }
    search_numbers(j, new_text, text);

    cout<<new_text<<endl;
    ofstream text_numbers2;
    text_numbers2.open("text2.txt");
    text_numbers2<<new_text;
    text_numbers2.close();
    return 0;

}
