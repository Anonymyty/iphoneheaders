/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileCal/MobileCal-Structs.h>
@class CALayer, EKCalendarDate, NSCalendar, CompactMonthWeekTodayCircle;

@interface CompactMonthWeekDayNumber : NSObject {

	CALayer* _layer;
	double _offsetX;
	EKCalendarDate* _calendarDate;
	NSCalendar* _calendar;
	CompactMonthWeekTodayCircle* _attachedTodayCircle;
	CGRect _lastKnownTappableZone;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                                  //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) BOOL representsActualDate; 
@property (nonatomic,retain) NSCalendar * calendar;                                          //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) double offsetX; 
@property (nonatomic,retain) CompactMonthWeekTodayCircle * attachedTodayCircle;              //@synthesize attachedTodayCircle=_attachedTodayCircle - In the implementation block
@property (assign,nonatomic) CGRect lastKnownTappableZone;                                   //@synthesize lastKnownTappableZone=_lastKnownTappableZone - In the implementation block
+(double)baselineOffsetFromTopOfLayer;
+(id)_standardLabel;
+(id)_dayNumberFont;
-(CompactMonthWeekTodayCircle *)attachedTodayCircle;
-(void)setLastKnownTappableZone:(CGRect)arg1 ;
-(CGRect)lastKnownTappableZone;
-(BOOL)representsActualDate;
-(void)setAttachedTodayCircle:(CompactMonthWeekTodayCircle *)arg1 ;
-(BOOL)_calendarDateIsOnWeekend;
-(id)_weekendImageForDayNumberString:(id)arg1 ;
-(id)_weekdayImageForDayNumberString:(id)arg1 ;
-(id)_generateImageWithString:(id)arg1 color:(id)arg2 ;
-(EKCalendarDate *)calendarDate;
-(CALayer *)layer;
-(id)init;
-(id)description;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
-(double)offsetX;
@end
