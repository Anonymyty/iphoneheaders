/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCell.h>

@class CalMessageStrings, NSString, EKCalendarEventInvitationNotification;

@interface CalendarMessageAttendeeReplyCell : CalendarMessageCell {

	CalMessageStrings* _titleStrings;
	NSString* _dateString;

}

@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification; 
+(long long)numberOfLinesForTitleLabels;
-(id)titleStrings;
-(id)bodyStrings;
-(id)actions;
-(void)setNotification:(EKCalendarEventInvitationNotification *)arg1 ;
@end

