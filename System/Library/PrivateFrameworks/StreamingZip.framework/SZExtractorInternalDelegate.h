/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StreamingZip/StreamingUnzipDelegateProtocol.h>

@protocol SZExtractorDelegate;
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {

	id<SZExtractorDelegate> delegate;

}

@property (__weak) id<SZExtractorDelegate> delegate; 
-(void)setDelegate:(id<SZExtractorDelegate>)arg1 ;
-(id<SZExtractorDelegate>)delegate;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
@end

