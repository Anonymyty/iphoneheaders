/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateTransitionOnePredEl, NSUUID;

@interface RTStateTransitionOneTransPred : NSObject {

	RTStateTransitionOnePredEl* _weekly;
	RTStateTransitionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateTransitionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateTransitionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                               //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(void)setWeekly:(RTStateTransitionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateTransitionOnePredEl *)arg1 ;
-(RTStateTransitionOnePredEl *)weekly;
-(RTStateTransitionOnePredEl *)daily;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end
