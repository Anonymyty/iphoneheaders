/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:09:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	BOOL _isInTransaction;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)close;
-(id)initWithIdentifier:(id)arg1 ;
-(void)open;
@end
