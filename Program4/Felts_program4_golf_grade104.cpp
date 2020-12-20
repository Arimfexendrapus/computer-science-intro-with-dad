/*
Name : Tyler Felts
Date : 11/16/2020
Class : CSC 1710
Path : ~/csc1710/Program4/Felts_program4_golf_grade104.cpp
Description : a golf program

i added all the options for a total possible grade of 104
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

//adding all my structs
struct Players
{
    string name;
    int scores[18];
};
struct Output
{
    int best_score;
    string winner1;
    string winner2;
    string winner3;
    string winner4;
};
struct Half_scores
{
    int first_half;
    int second_half;
};
struct Scores_to_output
{
    string scores_to_output[18];
};


//declaring all my functions
void input_pars(int pars[]);
void input_names(Players players[]);
void input_scores(Players players[]);
void calculate_scores(Players players[],int scores[]);
void calculate_half_scores(Players players[],Half_scores half_scores[]);
int making_par(int pars[]);
Output lowest_score_and_winners(int scores[], Players players[]);
void convert_to_string_array(Players players[],Scores_to_output scores_to_output[]);
void adding_birds(Players players[],Scores_to_output scores_to_output[],int pars[]);


// my main funtions that has all the funcion calls and outputing in it
int main()
{
    Output output;
    int pars[18];
    Players players[4];
    int scores[4];
    Half_scores half_scores[4];
    input_pars(pars);
    input_names(players);
    input_scores(players);
    calculate_scores(players,scores);
    output=lowest_score_and_winners(scores,players);
    calculate_half_scores(players,half_scores);
    int par=making_par(pars);
    Scores_to_output scores_to_output[4];
    convert_to_string_array(players,scores_to_output);
    adding_birds(players,scores_to_output,pars);


for (int i = 0; i < 4; i++)
{
    cout <<right<<setw(10)<<setfill (' ')<< players[i].name << right << setw(6) << setfill (' ') << scores[i]<<"    "<< "("<< half_scores[i].first_half <<" - "<<half_scores[i].second_half<<")"<<endl;
}
cout<<endl;
cout<< "The winner/s, with a score of "<<output.best_score - par<<" is/are "<<output.winner1<< " " << output.winner2<< " " << output.winner3<< " " << output.winner4<< " "<<endl<<endl;

cout <<right<<setw(9)<<setfill (' ')<< "Hole:";

for (int i = 0; i < 18; i++)
{
    cout<< right << setw(3) << setfill (' ') << i+1;
}
cout<<endl;

cout <<right<<setw(9)<<setfill (' ')<< "Par:";
for (int i = 0; i < 18; i++)
{
    cout<< right << setw(3) << setfill (' ') << pars[i];
}
cout<<"   Par for the course: "<<par<<endl<<endl;

cout<< right << setw(45) << setfill ('-') << "Player Scores "<< right << setw(20) << setfill ('-')<<" "<<" Total Scores "<<endl;

for (int i = 0; i < 4; i++)
{
    cout <<right<<setw(10)<<setfill (' ')<< players[i].name << " ";
    for (int ii = 0; ii < 18; ii++)
    {
        cout << left << setw(3) << setfill (' ') << scores_to_output[i].scores_to_output[ii];
    }
    cout<< right << setw(8) << setfill (' ') << scores[i] ;
    cout<<endl;
    
}

}


// putting in the pars
void input_pars(int pars[])
{
    fstream Data;
    Data.open("names_scores.dat");

    for (int i = 0; i < 18; i++)
    {
        Data>>pars[i];
    }

    Data.close();
}

//inputting names
void input_names(Players players[])
{
    fstream Data;
    Data.open("names_scores.dat");
    int temp[18];
    for (int i = 0; i < 18; i++)
    {
        Data>>temp[i];
    }

    for (int i = 0; i < 4; i++)
    {
        Data>>players[i].name;
    }
    Data.close();
}

//inputting scores
void input_scores(Players players[])
{
    fstream Data;
    Data.open("names_scores.dat");
    int temp[18];
    string temp2[4];
    for (int i = 0; i < 18; i++)
    {
        Data>>temp[i];
    }

    for (int i = 0; i < 4; i++)
    {
        Data>>temp2[i];
    }

    for (int i = 0; i < 18; i++)
    {
        for (int ii = 0; ii < 4; ii++)
        {
            Data>>players[ii].scores[i];
        }
        
    }
    Data.close();

}

//inputting scores
void calculate_scores(Players players[],int scores[])
{
    for (int i = 0; i < 4; i++)
    {
        scores[i]=0;
    }
    
    for (int ii = 0; ii < 4; ii++)
    {
        for (int i = 0; i < 18; i++)
        {
                    scores[ii]=scores[ii]+players[ii].scores[i];
        }
        
    }
}

//adding in option to do half scores
void calculate_half_scores(Players players[],Half_scores half_scores[])
{
    for (int i = 0; i < 4; i++)
    {
        half_scores[i].first_half=0;
        half_scores[i].second_half=0;
    }
    
    for (int ii = 0; ii < 4; ii++)
    {
        for (int i = 0; i < 9; i++)
        {
                    half_scores[ii].first_half=half_scores[ii].first_half+players[ii].scores[i];
        }
        
    }

    for (int ii = 0; ii < 4; ii++)
    {
        for (int i = 9; i < 18; i++)
        {
                    half_scores[ii].second_half=half_scores[ii].second_half+players[ii].scores[i];
        }
        
    }
}

//getting winners and adding option to remove the 1 winner assumption
Output lowest_score_and_winners(int scores[], Players players[])
{
    Output output;
    int score1, score2, score3, score4;

    score1=scores[0];
    score2=scores[1];
    score3=scores[2];
    score4=scores[3];
    
    int greatest=score1;
    if (score2<greatest)
        greatest=score2;
    if (score3<greatest)
        greatest=score3;
    if (score4<greatest)
        greatest=score4;

    
    output.best_score=greatest;
    if (score1==greatest)
        output.winner1=players[0].name;
    if (score2==greatest)
        output.winner2=players[1].name;
    if (score3==greatest)
        output.winner3=players[2].name;
    if (score4==greatest)
        output.winner4=players[3].name;

return output;

}

//making the par array
int making_par(int pars[])
{
    int par=0;
    for (int i = 0; i < 18; i++)
    {
        par= par+pars[i];
    }
    return par;
}

// converting to string array to add the birds symbols
void convert_to_string_array(Players players[],Scores_to_output scores_to_output[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int ii = 0; ii < 18; ii++)
        {
            scores_to_output[i].scores_to_output[ii]=to_string(players[i].scores[ii]);
        }
        
    }
    
}

//adding ! & *
void adding_birds(Players players[],Scores_to_output scores_to_output[],int pars[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int ii = 0; ii < 18; ii++)
        {
            if (players[i].scores[ii]==pars[ii]-1)
                scores_to_output[i].scores_to_output[ii]=scores_to_output[i].scores_to_output[ii]+"*";
            if (players[i].scores[ii]==pars[ii]-2)
                scores_to_output[i].scores_to_output[ii]=scores_to_output[i].scores_to_output[ii]+"!";
        }
        
    }
}