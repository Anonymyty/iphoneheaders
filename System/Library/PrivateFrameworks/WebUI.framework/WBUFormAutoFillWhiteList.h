/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface WBUFormAutoFillWhiteList : NSObject {

	NSCache* _cache;

}
+(id)sharedAutoFillWhiteList;
-(void)dealloc;
-(id)init;
-(BOOL)allowsURL:(id)arg1 ;
-(void)_whiteListSettingsChanged:(id)arg1 ;
@end
