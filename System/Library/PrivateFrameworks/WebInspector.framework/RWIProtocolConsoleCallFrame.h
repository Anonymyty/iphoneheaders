/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)lineNumber;
-(void)setLineNumber:(int)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setColumnNumber:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 url:(id)arg2 lineNumber:(int)arg3 columnNumber:(int)arg4 ;
-(int)columnNumber;
@end

