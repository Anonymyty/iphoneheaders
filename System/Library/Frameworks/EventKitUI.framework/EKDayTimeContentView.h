/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView {

	EKDayTimeView* _owner;
	NSRange _hourRange;

}

@property (assign,nonatomic) EKDayTimeView * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) NSRange hourRange;                  //@synthesize hourRange=_hourRange - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(EKDayTimeView *)owner;
-(void)setOwner:(EKDayTimeView *)arg1 ;
-(void)setHourRange:(NSRange)arg1 ;
-(NSRange)hourRange;
@end
