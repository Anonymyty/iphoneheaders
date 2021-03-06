/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PKPushPayload : NSObject {

	NSString* _type;
	NSDictionary* _dictionaryPayload;

}

@property (copy) NSString * type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSDictionary * dictionaryPayload;              //@synthesize dictionaryPayload=_dictionaryPayload - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setDictionaryPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryPayload;
@end

