/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSArray * stackTrace; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) double lineNumber; 
-(double)lineNumber;
-(void)setLineNumber:(double)arg1 ;
-(NSString *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
@end
