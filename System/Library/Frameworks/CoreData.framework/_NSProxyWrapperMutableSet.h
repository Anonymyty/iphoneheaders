/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/_NSNotifyingWrapperMutableSet.h>

@class _NSFaultingMutableSetMutationMethods;

@interface _NSProxyWrapperMutableSet : _NSNotifyingWrapperMutableSet {

	_NSFaultingMutableSetMutationMethods* _mutationMethods;

}
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 mutationMethods:(id)arg4 ;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
@end

