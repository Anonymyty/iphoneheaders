/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXProfileManagerDelegate <NSObject>
@required
-(id)profileManagerSessionAppID:(id)arg1;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1;
-(void)appDidChangeForAppSelfLockModeWithProfileManager:(id)arg1;
-(void)applyUnmanagedSelfLockStaticRestrictionsWithProfileManager:(id)arg1;
-(void)removeUnmanagedSelfLockStaticRestrictionsWithProfileManager:(id)arg1;

@end

