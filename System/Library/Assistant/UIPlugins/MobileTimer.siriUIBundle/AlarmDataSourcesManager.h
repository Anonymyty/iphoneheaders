/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface AlarmDataSourcesManager : NSObject {

	NSMutableArray* _alarmNotificationNames;

}
+(id)copyRegisterForManager;
-(void)handleFrameworkNotification:(id)arg1 ;
-(void)registerForAlarmActionNotifications;
-(void)unregisterForAlarmActionNotifications;
-(void)postNotificationName:(id)arg1 forAlarmActionWithAlarmId:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
