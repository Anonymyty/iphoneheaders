/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXFill.h>

@class NSString;

@interface SXVideoFill : SXFill

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) BOOL loop; 
+(id)typeString;
-(BOOL)loop;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(BOOL)loopWithValue:(id)arg1 withType:(int)arg2 ;
@end
