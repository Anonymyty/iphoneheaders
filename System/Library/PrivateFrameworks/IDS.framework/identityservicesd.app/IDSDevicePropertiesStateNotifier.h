/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:03 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSDevicePropertiesStateNotifier : NSObject {

	char** _notifyNames;
	int* _notifyTokens;
	int _numberOfTokens;
	unsigned long long _notifyArraySize;

}
+(id)sharedInstance;
-(void)setState:(unsigned long long)arg1 forProperty:(unsigned long long)arg2 deviceUniqueID:(id)arg3 ;
-(void)updateStateForDeviceWithUniqueID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

