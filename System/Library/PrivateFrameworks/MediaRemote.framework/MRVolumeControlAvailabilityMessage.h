/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@interface MRVolumeControlAvailabilityMessage : MRProtocolMessage

@property (nonatomic,readonly) BOOL volumeControlAvailable; 
-(unsigned long long)type;
-(BOOL)volumeControlAvailable;
-(id)initWithAvailableFlag:(BOOL)arg1 ;
@end

