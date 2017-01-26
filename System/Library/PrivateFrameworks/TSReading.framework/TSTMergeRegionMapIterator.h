/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {

	TSTMergeRegionMap* mMergeRegionMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> >* mMergeRegionIterator;

}
-(SCD_Struct_TS138)nextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg1 ;
-(BOOL)hasNextMergeRegion;
-(void)dealloc;
-(void)reset;
@end
