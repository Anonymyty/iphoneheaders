/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRContentItemsChangedNotificationMessage : MRProtocolMessage {

	NSArray* _contentItems;

}

@property (nonatomic,readonly) NSArray * contentItems; 
-(NSArray *)contentItems;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithContentItems:(id)arg1 ;
@end
