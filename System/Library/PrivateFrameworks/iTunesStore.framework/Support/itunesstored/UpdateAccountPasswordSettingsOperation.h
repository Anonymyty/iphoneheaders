/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMutableURLRequestProperties;

@interface UpdateAccountPasswordSettingsOperation : ISOperation {

	long long _freeDownloadsPasswordSetting;
	long long _paidPurchasesPasswordSetting;
	SSMutableURLRequestProperties* _requestProperties;

}

@property (readonly) long long freeDownloadsPasswordSetting; 
@property (readonly) long long paidPurchasesPasswordSetting; 
+(long long)_accountPasswordSettingValueForServerValue:(id)arg1 ;
-(id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2 ;
-(id)_newAccountPasswordSettingsDictionary;
-(id)initWithFreeDownloadsPasswordSetting:(long long)arg1 paidPurchasesPasswordSetting:(long long)arg2 requestProperties:(id)arg3 ;
-(id)_serverValueForAccountPasswordSettingValue:(long long)arg1 defaultValue:(id)arg2 ;
-(long long)freeDownloadsPasswordSetting;
-(long long)paidPurchasesPasswordSetting;
-(void)run;
-(id)_requestDictionary;
@end

