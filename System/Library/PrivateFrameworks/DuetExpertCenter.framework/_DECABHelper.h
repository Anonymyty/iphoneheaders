/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _DECABHelper : NSObject {

	NSString* _groupIdentifier;
	NSDictionary* _abGroupContents;

}

@property (nonatomic,readonly) NSString * groupIdentifier;                  //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * abGroupContents;              //@synthesize abGroupContents=_abGroupContents - In the implementation block
+(unsigned char)indexForDevice;
-(id)init;
-(NSString *)groupIdentifier;
-(id)initWithAssetContents:(id)arg1 ;
-(id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2 ;
-(NSDictionary *)abGroupContents;
@end
