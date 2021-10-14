#include<bits/stdc++.h>
using namespace std;
class User{
    private:
    int User_Id;
    string User_name;
    int User_age;
    String User_gender;
    int User_Dob;
    string User_email;
};
class Hotel{
    private:
     int Hotel_id;
     string Hotel_name;
     string Hotel_address;
     float Hotel_rating;
     std::vector<int>Noofrooms();
    
};

class rooms{
    private:
    string room_type; //single double
    int room_no;
    // also declaire room status whether booked or not
};

class facilities{
    private:
    bool ac_available;
    bool swimming_pool;
    bool hot_water;
    bool wifi;
    bool breakfast;
    bool Power_backup;
};

class Booking{
    private:
    int BookingId;
    int User_Id;
    int Hotel_id;
    int Booking_amount;
    //payment status (is successful or not)
    //date and time duration of booking
    
};
class location{
    private:
    string street;
    string near_landmark;
    string city;
    string pin_code;
    string state;
    string country;
};

int main(){
    
    return 0;
}
