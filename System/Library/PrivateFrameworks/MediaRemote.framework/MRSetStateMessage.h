/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSDictionary, NSString;

@interface MRSetStateMessage : MRProtocolMessage {

	NSArray* _supportedCommands;
	NSDictionary* _nowPlayingInfo;
	void* _playbackQueue;

}

@property (nonatomic,readonly) NSDictionary * nowPlayingInfo; 
@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) void* playbackQueue; 
@property (nonatomic,readonly) NSString * displayID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) unsigned playbackState; 
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)displayName;
-(id)initWithNowPlayingState:(id)arg1 ;
-(NSArray *)supportedCommands;
-(unsigned)playbackState;
-(NSString *)displayID;
-(void*)playbackQueue;
-(NSDictionary *)nowPlayingInfo;
@end
