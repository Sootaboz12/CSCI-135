/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 10 A

Lab 10 A: Takes time.
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Time 
{ 
    public:
        int h;
        int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
    public: 
        string title;
        Genre genre;     // only one genre per movie
        int duration;    // in minutes
};

class TimeSlot { 
    public: 
        Movie movie;     // what movie
        Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time)
{
    int hour;
    int min;
    hour = time.h - 0;
    min = time.m - 0;

    int total = (hour * 60) + min;

    return total;
}

int minutesUntil(Time earlier, Time later)
{
    int hour;
    int min;
    hour = later.h - earlier.h;
    min = later.m - earlier.m;

    int total = (hour * 60) + min;
    return total;
}

Time addMinutes(Time time0, int min)
{
    int newmins = minutesSinceMidnight(time0) + min;
    int hour =  newmins / 60;
    int minute = newmins % 60;
    return {hour, minute};
}

void printMovie(Movie mv)
{
    string g;
    switch (mv.genre)
    {
    case ACTION: g = "ACTION"; break;
    case COMEDY: g = "COMEDY"; break;
    case DRAMA: g = "DRAMA"; break;
    case ROMANCE: g = "ROMANCE"; break;
    case THRILLER: g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts)
{
    Time movieTime = addMinutes(ts.startTime, ts.movie.duration);;
    printMovie(ts.movie);
    cout << " [starts at " << ts.startTime.h << ":" << ts.startTime.m << " , ends by " << movieTime.h << ":" << movieTime.m << "]" << "\n";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    Time something = something = addMinutes(ts.startTime, ts.movie.duration);;
    TimeSlot after = {nextMovie, something};
    return after;
}


bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    bool overlap = false;
    Time placement = addMinutes(ts1.startTime, ts1.movie.duration);
    if (minutesUntil(ts1.startTime, placement) > minutesUntil(ts1.startTime, ts2.startTime))
	{
		overlap = true;
	}
	return overlap;
}