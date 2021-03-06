/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class NSData, NSString;

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _rawDataConsumer;
	NSData* _strippedData;
	unsigned long long _length;
	unsigned _seenNetworkLineEndings : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(id)data;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(void)purge;
-(id)copyDataWithUnixLineEndings;
@end

