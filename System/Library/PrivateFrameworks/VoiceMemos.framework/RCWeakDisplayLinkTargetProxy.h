/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {

	RCWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)displayLinkFired:(id)arg1 ;
@end
