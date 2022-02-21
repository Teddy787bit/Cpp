#include<iostream>
#include<cstring>
using namespace std;
class YT{
    protected:
        string title;
        float rating;
    public:
        YT(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;
};
class YTVideo: public YT
{
    float videoLength;
    public:
        YTVideo(string s, float r, float vl): YT(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class YTText: public YT
{
    int words;
    public:
        YTText(string s, float r, int wc): YT(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    YTVideo djVideo(title, rating, vlen);

    
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    YTText djText(title, rating, words);

    YT* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
