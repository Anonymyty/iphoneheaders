/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:21:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAAdvertisableItem.h>

@interface UADebugAdvertisableItem : UAAdvertisableItem {

	unsigned long long _debugType;

}

@property (assign) unsigned long long debugType;              //@synthesize debugType=_debugType - In the implementation block
-(void)setDebugType:(unsigned long long)arg1 ;
-(unsigned long long)debugType;
-(id)initWithType:(unsigned long long)arg1 manager:(id)arg2 ;
-(id)advertisingBytes;
@end
