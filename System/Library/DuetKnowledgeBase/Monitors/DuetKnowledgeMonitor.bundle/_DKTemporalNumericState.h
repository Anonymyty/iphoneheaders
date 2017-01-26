/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSCoding> {

	NSNumber* _state;
	NSDate* _timestamp;

}

@property (retain) NSNumber * state;                //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithState:(id)arg1 timestamp:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(NSNumber *)state;
-(void)setState:(NSNumber *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end
