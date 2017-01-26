/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:18:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DATrustHandler;


@protocol DARefreshManagerDelegate
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@optional
-(id)password;
-(id)username;
-(id)serverTokenRegistrationURL;
-(void)interfaceWentUp;
-(void)interfaceWentDown;

@required
-(DATrustHandler *)trustHandler;
-(id)scheduleIdentifier;
-(id)onBehalfOfBundleIdentifier;
-(id)getDAAccount;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;

@end
