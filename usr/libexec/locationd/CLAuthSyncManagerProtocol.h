/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLAuthSyncManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)sendNotification:(int)arg1 withGlobalAuthStatus:(int)arg2;
-(void)watchNeedsFullSync;
-(void)sendGlobalAuthStatus:(int)arg1;
-(void)addObject:(id)arg1;
-(void)updateObject:(id)arg1;
-(void)deleteObject:(id)arg1;

@end
