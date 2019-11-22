/************************************************************
  *  * EaseMob CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2013-2014 EaseMob Technologies. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of EaseMob Technologies.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from EaseMob Technologies.
  */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#define D_MINUTE	60
#define D_HOUR		3600
#define D_DAY		86400
#define D_WEEK		604800
#define D_YEAR		31556926

typedef enum : NSUInteger {
    STIMDateDayTypeMorning,
    STIMDateDayTypeNoon,
    STIMDateDayTypeAfternoon,
    STIMDateDayTypeNight,
} STIMDateDayType;

@interface NSDate (STIMCategory)

- (NSString *)stimDB_timeIntervalDescription;//距离当前的时间间隔描述
- (NSString *)stimDB_minuteDescription;/*精确到分钟的日期描述*/
- (NSString *)stimDB_MonthDescription; /*精确到月的日期描述*/
- (NSString *)stimDB_dayDescription;
- (NSString *)stimDB_formattedTime;
- (NSString *)stimDB_formattedDateDescription;//格式化日期描述
- (double)stimDB_timeIntervalSince1970InMilliSecond;
+ (NSDate *)stimDB_dateWithTimeIntervalInMilliSecondSince1970:(double)timeIntervalInMilliSecond;
+ (NSString *)stimDB_formattedTimeFromTimeInterval:(long long)time;
// Relative dates from the current date
+ (NSDate *) stimDB_dateTomorrow;
+ (NSDate *) stimDB_dateYesterday;
+ (NSDate *) stimDB_dateWithDaysFromNow: (NSInteger) days;
+ (NSDate *) stimDB_dateWithDaysBeforeNow: (NSInteger) days;
+ (NSDate *) stimDB_dateWithHoursFromNow: (NSInteger) dHours;
+ (NSDate *) stimDB_dateWithHoursBeforeNow: (NSInteger) dHours;
+ (NSDate *) stimDB_dateWithMinutesFromNow: (NSInteger) dMinutes;
+ (NSDate *) stimDB_dateWithMinutesBeforeNow: (NSInteger) dMinutes;

// Comparing dates
- (BOOL) stimDB_isEqualToDateIgnoringTime: (NSDate *) aDate;
- (BOOL) stimDB_isToday;
- (BOOL) stimDB_isTomorrow;
- (BOOL) stimDB_isYesterday;
- (BOOL) stimDB_isSameWeekAsDate: (NSDate *) aDate;
- (BOOL) stimDB_isThisWeek;
- (BOOL) stimDB_isNextWeek;
- (BOOL) stimDB_isLastWeek;
- (BOOL) stimDB_isSameMonthAsDate: (NSDate *) aDate;
- (BOOL) stimDB_isThisMonth;
- (BOOL) stimDB_isSameYearAsDate: (NSDate *) aDate;
- (BOOL) stimDB_isThisYear;
- (BOOL) stimDB_isNextYear;
- (BOOL) stimDB_isLastYear;
- (BOOL) stimDB_isEarlierThanDate: (NSDate *) aDate;
- (BOOL) stimDB_isLaterThanDate: (NSDate *) aDate;
- (BOOL) stimDB_isInFuture;
- (BOOL) stimDB_isInPast;

// Date roles
- (BOOL) stimDB_isTypicallyWorkday;
- (BOOL) stimDB_isTypicallyWeekend;

//获取时间段
+ (STIMDateDayType)stimDB_getTheTimeBucket;

// Adjusting dates
- (NSDate *) stimDB_dateByAddingDays: (NSInteger) dDays;
- (NSDate *) stimDB_dateBySubtractingDays: (NSInteger) dDays;
- (NSDate *) stimDB_dateByAddingHours: (NSInteger) dHours;
- (NSDate *) stimDB_dateBySubtractingHours: (NSInteger) dHours;
- (NSDate *) stimDB_dateByAddingMinutes: (NSInteger) dMinutes;
- (NSDate *) stimDB_dateBySubtractingMinutes: (NSInteger) dMinutes;
- (NSDate *) stimDB_dateAtStartOfDay;

// Retrieving intervals
- (NSInteger) stimDB_minutesAfterDate: (NSDate *) aDate;
- (NSInteger) stimDB_minutesBeforeDate: (NSDate *) aDate;
- (NSInteger) stimDB_hoursAfterDate: (NSDate *) aDate;
- (NSInteger) stimDB_hoursBeforeDate: (NSDate *) aDate;
- (NSInteger) stimDB_daysAfterDate: (NSDate *) aDate;
- (NSInteger) stimDB_daysBeforeDate: (NSDate *) aDate;
- (NSInteger)stimDB_distanceInDaysToDate:(NSDate *)anotherDate;

// Decomposing dates
@property (readonly) NSInteger stimDB_nearestHour;
@property (readonly) NSInteger stimDB_hour;
@property (readonly) NSInteger stimDB_minute;
@property (readonly) NSInteger stimDB_seconds;
@property (readonly) NSInteger stimDB_day;
@property (readonly) NSInteger stimDB_month;
@property (readonly) NSInteger stimDB_week;
@property (readonly) NSInteger stimDB_weekday;
@property (readonly) NSInteger stimDB_nthWeekday; // e.g. 2nd Tuesday of the month == 2
@property (readonly) NSInteger stimDB_year;

@end
