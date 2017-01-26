/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <TSReading/TSReading-Structs.h>
@class NSObject;

@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> >* mSet;
	tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long>* mIter;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(void)addRange:(SCD_Struct_TS138)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4 ;
-(BOOL)isCheckbox;
-(UIEdgeInsets)getPaddingInsets;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)reset;
-(SCD_Struct_TS138)begin;
-(SCD_Struct_TS138)iter;
-(CGSize)getSize;
@end
