/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Books/BCPlistProducer.h>

@class NSArray, NSMutableArray;

@interface BCIngestSidecarPlistProducer : BCPlistProducer {

	NSArray* _sidecarDeletes;
	NSMutableArray* _filterMatches;

}

@property (nonatomic,readonly) NSArray * filterMatches;              //@synthesize filterMatches=_filterMatches - In the implementation block
-(id)initWithPath:(id)arg1 sidecarPath:(id)arg2 ;
-(NSArray *)filterMatches;
-(id)produceData;
-(void)dealloc;
-(BOOL)shouldRetry;
@end

