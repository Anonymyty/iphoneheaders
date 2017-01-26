/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest {

	BOOL _shouldParseResponse;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end
