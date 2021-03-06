/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBTodayTableDateHeader : NSObject {

	BOOL _shouldSuperscriptOrdinal;
	NSString* _dateString;
	NSRange _ordinalRange;

}

@property (readonly) NSString * dateString;                      //@synthesize dateString=_dateString - In the implementation block
@property (readonly) NSRange ordinalRange;                       //@synthesize ordinalRange=_ordinalRange - In the implementation block
@property (readonly) BOOL shouldSuperscriptOrdinal;              //@synthesize shouldSuperscriptOrdinal=_shouldSuperscriptOrdinal - In the implementation block
+(id)dateHeaderWithDate:(id)arg1 locale:(id)arg2 singleLine:(BOOL)arg3 ;
-(id)initWithDateString:(id)arg1 ordinalRange:(NSRange)arg2 shouldSuperscriptOrdinal:(BOOL)arg3 ;
-(NSRange)ordinalRange;
-(BOOL)shouldSuperscriptOrdinal;
-(NSString *)dateString;
@end

