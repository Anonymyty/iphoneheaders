/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {

	NSString* _path;

}

@property (readonly) NSString * path; 
-(void)dealloc;
-(id)debugDescription;
-(NSString *)path;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 ;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
@end

