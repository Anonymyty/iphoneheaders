/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor;

@interface NPHCarrierInfoCompanionReplication : NSObject {

	NPSManager* _npsManager;
	NPSDomainAccessor* _mobilePhoneDomainAccessor;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)NPHVMServiceSubscriptionStatusChanged:(id)arg1 ;
-(void)updateShouldHideVoicemailUI;
-(void)updateIsVisualVoicemailServiceSubscribed;
@end
