/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKKnowledgeStore;

@interface CDGlanceLaunchManager : NSObject {

	_DKKnowledgeStore* _historyStore;

}
+(id)sharedManager;
-(void)recordActiveGlances:(id)arg1 fromDates:(id)arg2 untilDates:(id)arg3 forDevice:(id)arg4 ;
-(void)recordActiveGlances:(id)arg1 fromDates:(id)arg2 untilDates:(id)arg3 ;
-(id)init;
@end
