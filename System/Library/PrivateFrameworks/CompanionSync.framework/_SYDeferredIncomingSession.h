/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSURL * resourceURL;                    //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(NSURL *)resourceURL;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
@end

